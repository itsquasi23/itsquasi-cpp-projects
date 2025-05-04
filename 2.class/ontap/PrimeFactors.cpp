//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

void fast(ll x){
    int c = 0;
    while (x % 2 == 0){
        c++;
        x /= 2;
    }
    if (c)
    cout << 2 << " " << c << " ";
    c = 0;
    for (int i = 3; i * i <= x; i += 2){
        while (x % i == 0){
            c++;
            x /= i;
        }
        if (c)
        cout << i << " " << c << " ";
        c = 0;
    }
    if (x > 1) cout << x << " " << 1 << " ";
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll a;
        cin >> a;
        fast(a);
        cout << "\n";
    }
    return 0;
}