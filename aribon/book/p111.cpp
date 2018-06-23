#include <iostream>
#include <map>
using namespace std;

bool is_prime(int n);
map<int, int> prime_factor(int n);
int sieve(int n);

int main(){
    int n = 100;
    for(int i = 1;i < n;i++){
        if(is_prime(i)){
            cout << i << ": " << is_prime(i) << endl;
        }
    }
    cout << endl;
    map<int, int> res = prime_factor(n);
    for(auto it = res.begin();it != res.end();++it){
        cout << it->first << ": " << it->second << endl; 
    }

    int r = sieve(11);
    cout << r << endl;
    return 0;
}

bool is_prime(int n){
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0) return false;
    }
    return n != 1;
}

map<int, int> prime_factor(int n){
    map<int, int> res;
    for(int i = 2;i*i <= n;i++){
        while(n % i == 0){
            ++res[i];
            n /= i;
        }
    }
    if(n != 1) res[n] = 1;
    return res;
}

int sieve(int n){
    int p = 0;
    int prime[n];      // primes 
    bool bool_prime[n+1]; // is_prime[i] is prime or not prime

    for(int i = 0;i <= n;i++) bool_prime[i] = true;
    for(int i = 2;i <= n;i++){
       if(bool_prime[i]){
           prime[p++] = i;
           for(int j = 2*i;j <= n;j += i) bool_prime[j] = false;
       } 
    }
    return p;
}
