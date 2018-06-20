#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int N;
    int MAX_N = 1000;
    cin >> N;
    int L[N+1];
    for(int i = 0;i < N;i++) cin >> L[i];

    long long ans = 0;
    priority_queue<int, vector<int>, greater<int> > que;
    for(int i = 0;i < N;i++) que.push(L[i]);

    while(que.size() > 1){
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        ans += l1 + l2;
        que.push(l1 + l2);
    }
    cout << ans << endl;

    return 0;
}
