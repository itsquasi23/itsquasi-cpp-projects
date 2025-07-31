//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, k;
    cin >> n >> k;
    if (n & 1){
        ll s = n / 2 + 1;
        if (k <= s){
            ll pos = (s * 2 - 1);
            cout << pos - (2 * (s - k));
        }
        else {
            ll pos = ((n - s) * 2);
            cout << pos - (2 * (n - k));
        }
    }
    else {
        ll s = n / 2;
        if (k <= s){
            ll pos = (s * 2 - 1);
            cout << pos - (2 * (s - k));
        }
        else {
            ll pos = ((n - s) * 2);
            cout << pos - (2 * (n - k));
        }
    }
    return 0;
}