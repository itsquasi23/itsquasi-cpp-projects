//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
unordered_map<ll,bool> b;

void save(){
    b[1] = 1;
    for (int i = 2; i <= 1e9; i *= 2) b[i] = 1;
    for (int i = 3; i <= 1e9; i *= 3) b[i] = 1;
    for (int i = 5; i <= 1e9; i *= 5) b[i] = 1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    save();
    int n, m;
    cin >> n >> m;
    vector<ll> ac;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if (b[a[i]] == 1) ac.push_back(a[i]);
    }
    sort (ac.begin(), ac.end());
    while (m--){
        ll low, high;
        cin >> low >> high;
        ll l = lower_bound(ac.begin(), ac.end(), low) - ac.begin();
        ll r = upper_bound(ac.begin(), ac.end(), high) - ac.begin() - 1;
        cout << r - (l - 1) << "\n";
    }
    return 0;
}