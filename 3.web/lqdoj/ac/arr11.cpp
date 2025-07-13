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
    while (n--){
        ll a;
        cin >> a;
        kien[a]++;
    }
    cout << kien[k];
    return 0;
}