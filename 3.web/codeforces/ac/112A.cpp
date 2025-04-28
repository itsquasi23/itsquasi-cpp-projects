//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a,b;
    cin >> a >> b;
    ll sa = 0, sb = 0;
    for (int i = 0; i < a.size(); ++i){
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
    }
    for (int i = 0; i < b.size(); ++i){
        if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
    }
    if (a == b) cout << 0;
    else if (a < b) cout << -1;
    else cout << 1;
    return 0;
}