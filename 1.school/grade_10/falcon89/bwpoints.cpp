//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<pair<ll,bool>> a;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll x;
    for (int i = 1; i <= n; ++i){
        cin >> x;
        a.push_back({x, 1});
    }
    for (int i = 1; i <= n; ++i){
        cin >> x;
        a.push_back({x, 0});
    }
    sort (a.begin(), a.end());
    int t = 0;
    for (int i = 1; i < a.size(); ++i){
        if (a[i - 1].second != a[i].second) t++, i++;
    }
    cout << t;
    return 0;
}