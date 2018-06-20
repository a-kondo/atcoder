#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N 10000
#define INF   10000
struct edge {
    int to;
    int cost;
};
typedef pair<int, int> P;

int main(){
    int N, R;
    cin >> N >> R;
    vector<edge> G[MAX_N];

    int dist[MAX_N];
    int dist2[MAX_N];


    priority_queue<P, vector<P>, greater<P> > que;
    fill(dist, dist + N, INF);
    fill(dist2, dist2 + N, INF);
    dist[0] = 0;
    que.push(P(0,0));

    while(!que.empty()){
        P p = que.top(); que.pop();
        int v = p.second, d = p.first;
        if(dist2[v] < d) continue;
        for(int i = 0;i < G[v].size();i++){
            edge &e = G[v][i];
            int d2 = d + e.cost;
            if(dist[e.to] > d2){
                swap(dist[e.to], d2);
                que.push(P(dist[e.to], e.to));
            }
            if(dist2[e.to] > d2 && dist[e.to] < d2){
                dist2[e.to] = d2;
                que.push(P(dist2[e.to], e.to));
            }
        }
    }


    return 0;
}
