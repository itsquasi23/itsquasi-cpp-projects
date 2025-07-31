//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    ll sum = 0, c = 0;
    map<ll,ll> cnt;
    cnt[0] = 1;
    while (n--){
        ll a;
        cin >> a;
        a = a % m;
        sum += a;
        sum = sum % m;
        c += cnt[sum];
        cnt[sum] ++;
    }
    cout << c;
    return 0;
}