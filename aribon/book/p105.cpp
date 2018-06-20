#include <iostream>
using namespace std;
#define MAX_ML 100
#define MAX_MD 100
#define MAX_N  100
#define INF 10000

void p(int *d, int n);
void p(int *d, int n){
    cout << "d[]: ";
    for(int i = 0;i < n;i++){
        cout << *d << " ";
        d++;
    }
    cout << endl;
}

int main(){
    int N, ML, MD;
    cin >> N >> ML >> MD;

    int AL[ML], BL[ML], DL[ML];
    int AD[MD], BD[MD], DD[MD];
    for(int i = 0;i < ML;i++){ cin >> AL[i] >> BL[i] >> DL[i]; }
    for(int i = 0;i < MD;i++){ cin >> AD[i] >> BD[i] >> DD[i]; }

    int d[N]; // shortest distance
    fill(d, d+N, INF);
    d[0] = 0;
    p(d, N);

    for(int k = 0;k < N;k++){
        for(int i = 0;i+1 < N;i++){
            if(d[i+1] < INF){
                d[i] = min(d[i], d[i+1]);
                cout << "k:" << k << " i:" << i << " d[i] " << " ";
                p(d, N);
            }
        }
        for(int i = 0;i < ML;i++){
            if(d[AL[i]-1] < INF){
                d[BL[i]-1] = min(d[BL[i]-1], d[AL[i]-1] + DL[i]);
                cout << "k:" << k << " i:" << i << " d[BL[i]-1] " <<  " ";
                p(d, N);
            }
        }
        for(int i = 0;i < MD;i++){
            if(d[BD[i]-1] < INF){
                d[AD[i]-1] = min(d[AD[i]-1], d[BD[i]-1] - DD[i]);
                cout << "k:" << k << " i:" << i << " d[AD[i]-1] " << " ";
                p(d, N);
            }
        }
    }
    int res = d[N-1];
    if(d[0] < 0){
        res = -1;
    } else if(res == INF){
        res = -2;
    }
    cout << res << endl;
    return 0;
}
