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
    for (int i = 0; i <= a.size() / 2; ++i){
        if (a[i] != a[a.size() - 1 - i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}