#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 10000

int N, K;
double L[MAX_N];

bool c(double x){
    int num = 0;
    for(int i = 0;i < N;i++){
        num += (int)(L[i]/x);
    }
    return num >= K;
}

int main(){
    cin >> N >> K;
    for(int i = 0;i < N;i++){ cin >> L[i]; }

    double lb = 0, ub = LONG_MAX;
    for(int i = 0;i < 100;i++){
        double mid = (lb + ub) / 2;
        if(c(mid)) lb = mid;
        else ub = mid;
    }
    printf("%0.2f\n", floor(ub * 100) / 100);
    return 0;
}
