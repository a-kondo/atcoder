#include <iostream>
using namespace std;
typedef long long ll;

ll mod_pow(ll x, ll n,ll mod);
void printb(ll x);

int main(){
    int ret = mod_pow(2, 14, 1000000000);
    cout << ret << endl;
    return 0;
}

ll mod_pow(ll x, ll n, ll mod){
    ll res = 1;
    while(n > 0){
        cout << "res: " << res << " n: " << n << " x: "<< x << endl;
        printb(n);
        if(n & 1){
            res = res * x % mod;
        }
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

void printb(ll x){
    char n[10];
    int i = 0;
    while(x > 0){
        if(x & 1){
            n[i] = '1';
        }else{
            n[i] = '0';
        }
        x >>= 1;
        i++;
    }
    printf("n: %s\n", n);
}