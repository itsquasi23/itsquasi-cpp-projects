//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll find(ll x){
    ll t = 0;
    while (x){
        t = max(t, x % 10);
        x /= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    int t = 0;
    while (n > 0){
        n -= find(n);
        t++;
    }
    cout << t;
    return 0;
}