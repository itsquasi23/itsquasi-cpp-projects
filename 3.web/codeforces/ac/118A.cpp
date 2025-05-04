//Happy April 30!
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
    for (int i = 0; i < a.size(); ++i){
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
    }
    for (int i = 0; i < a.size(); ++i){
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'o' && a[i] != 'u' && a[i] != 'i' && a[i] != 'y') a.insert(i, 1, '.'), ++i;
        else a.erase(i, 1), i--;
    }
    cout << a;
    return 0;
}