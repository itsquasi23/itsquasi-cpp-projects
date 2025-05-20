// Goal: Get into CLC
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

unordered_map<char, bool> kien;

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
    int mx = 0;
    for (int i = 0, j = 0; j < a.size(); ++j)
    {
        while (kien[a[j]])
        {
            kien[a[i]] = 0;
            i++;
        }
        mx = max(mx, j - i + 1);
        kien[a[j]] = 1;
    }
    cout << mx;
    return 0;
}