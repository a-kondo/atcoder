#include <iostream>
using namespace std;
#define MAX_N 100000

int n, S;
int a[MAX_N];

int main(){
    cin >> n >> S;
    for(int i = 0;i < n;i++){ cin >> a[i]; }

    int res = n + 1;
    int s = 0, t = 0, sum = 0;

    while(1){
        while(t < n && sum < S){
            sum += a[t++];
        }
        cout << "s: " << s << " t: " << t;
        cout << " sum: " << sum << " res: " << res << endl;
        if(sum < S) break;
        res = min(res, t - s);
        sum  -= a[s++];
    }

    if(res > n) res = 0;
    cout << res << endl;

    return 0;
}
