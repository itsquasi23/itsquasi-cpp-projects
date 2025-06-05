//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool dx(ll x){
    ll t = 0, x1 = x;
    while (x){
        t = t * 10 + x % 10;
        x /= 10;
    }
    return t == x1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a,b, c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i){
        if (dx(i)) c++;
    }
    cout << c;
    return 0;
}