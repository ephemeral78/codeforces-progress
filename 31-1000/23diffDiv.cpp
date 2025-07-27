#include <bits/stdc++.h>
using namespace std;

long long nextPrime(int n) {
    for (long long i = n;; i++)
    {
        bool isPrime = true;
        for (long long j = 2; j*j <= i; j++)
        {
            if(i%j==0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) return i;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long p = nextPrime(n+1);
        long long q = nextPrime(p+n);
        long long a = min(1LL*p*p*p, 1LL*p*q);
        cout<<a<<endl;
    }
    return 0;
}