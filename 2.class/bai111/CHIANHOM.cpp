//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

struct kien{
    bool gen;
    ll iq;
};

map<pair<bool, ll>, int> cnt;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        kien a;
        cin >> a.gen >> a.iq;
        cnt[{a.gen, a.iq}]++;
    }
    cout << cnt.size();
    return 0;
}