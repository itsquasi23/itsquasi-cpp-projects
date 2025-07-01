//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

map<ll,ll> cnt;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int k;
    cin >> k;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i){
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] = a[i] - 'A' + 'a';
        cnt[a[i]]++;
    }
    int t = 0;
    for (auto c : cnt){
        if (c.second >= k) t++;
    }
    cout << t;
    return 0;
}