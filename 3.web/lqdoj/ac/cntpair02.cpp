//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<ll,ll> kien;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    ll c = 0;
    while (n--){
        ll a;
        cin >> a;
        c += kien[k - a];
        kien[a]++;
    }
    cout << c;
    return 0;
}