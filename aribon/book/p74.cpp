#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N, L, P;
    cin >> N >> L >> P;
    int A[N+1], B[N+1];
    for(int i = 0;i < N;i++) cin >> A[i];
    for(int i = 0;i < N;i++) cin >> B[i];

    A[N] = L;
    B[N] = 0;
    N++;

    priority_queue<int> que;

    int ans = 0, pos = 0, tank = P;
    for(int i = 0;i < N; i++){
        int d = A[i] - pos;
        while(tank - d < 0){
            if(que.empty()){
                puts("-1");
                return 0;
            }
            tank += que.top();
            que.pop();
            ans++;
        }
        tank -= d;
        pos = A[i];
        que.push(B[i]);
    }
    cout << ans << endl;
    return 0;
}
