//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<char,ll> cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,k,m;
    cin >> n >> k >> m;
    string a;
    cin >> a;
    vector<char> all;
    for (int i = 0; i < n; ++i){
        cnt[a[i]]++;
    }
    sort(a.begin(), a.end(), greater<char>());
    all.push_back(a[0]);
    char last = a[0];
    for (int i = 1; i < n; ++i){
        if (a[i] != last) all.push_back(a[i]), last = a[i];
    }
    ll t = 0;
    for (char c : all){
        if (k){
        //cout << min({k, cnt[c], m}) << " " << (c - 'a' + 1) << "\n";
        t += min({k, cnt[c], m}) * (c - 'a' + 1);
        k -= min({k, cnt[c], m});
        }
    }
    cout << t;
    return 0;
}