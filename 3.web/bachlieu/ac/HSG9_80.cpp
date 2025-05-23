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
    string a;
    cin >> a;
    if (a[0] >= 'A' && a[0] <= 'Z') a[0] = a[0] - 'A' + 'a';
    string b;
    b += a[0];
    for (int i = 1; i < a.size(); ++i){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            a[i] = a[i] - 'A' + 'a';
            b = (b + '_') + a[i];
        }
        else b += a[i];
    }
    cout << b;
    return 0;
}