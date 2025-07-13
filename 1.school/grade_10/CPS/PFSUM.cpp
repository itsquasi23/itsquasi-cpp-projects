//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

ll fastpow(ll x){
    ll t = 1;
    while (x){
        t *= 10;
        x--;
    }
    return t;
}

ll ten(ll x){
    ll p = 0;
    while (x){
        x /= 10;
        p++;
    }
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll t = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        t += fastpow(a[i]);
        cout << ten(t) << " ";
    }   
    return 0;
}