//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<ll,ll> cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        ll a;
        cin >> a;
        cnt[a]++;
    }
    ll s = 0;
    for (auto c : cnt){
        s += (c.second / 2);
    }
    cout << s;
    return 0;
}