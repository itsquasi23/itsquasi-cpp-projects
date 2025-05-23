//Goal: Get into CLC
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
    int n = a.size() - 1;
    for (int i = 0; i < n; ++i){
        if(a > b){
            cout << i;
            return 0;
        }
        a = a.substr(1) + a[0];
        b = b.substr(1) + b[0];
    }
    cout << -1;
    return 0;
}