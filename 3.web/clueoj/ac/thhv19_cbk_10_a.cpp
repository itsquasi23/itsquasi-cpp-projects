//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dig(ll n){
    return (n == 0 ? 1 : (ll)log10(n) + 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll base_low = 1, base_high = 9, cnt = 0;
    for (int i = 1; i <= dig(n); ++i){
        if (n > base_high){ 
            cnt += (base_high - base_low + 1) * i;
            base_high = base_high * 10 + 9;
            base_low *= 10;
        }
        else {
            cnt += (n - base_low + 1) * i;
        } 
    }
    cout << cnt;
    return 0;
}