#include <iostream>
#include <cfloat>
using namespace std;
#define MAX_N 10000

int n, k;
int w[MAX_N], v[MAX_N];
double y[MAX_N]; // v - x * w

bool c(double x){
    for(int i = 0;i < n;i++){
        y[i] = v[i] - x * w[i];
    }
    sort(y, y + n);
    double sum = 0;
    for(int i = 0;i < k;i++){
        sum += y[n - i -1];
    }
    return sum >= 0;
}

int main(){
    cin >> n >> k;
    for(int i = 0;i < n;i++){ cin >> w[i] >> v[i]; }

    double lb = 0, ub = 1000000;
    for(int i = 0;i < 100;i++){
        cout << "lb: " << lb << " ub: " << ub << endl;
        double mid = (lb + ub) / 2;
        if(c(mid)) lb = mid;
        else ub = mid;
    }
    printf("%.2f\n", ub);

    return 0;
}
