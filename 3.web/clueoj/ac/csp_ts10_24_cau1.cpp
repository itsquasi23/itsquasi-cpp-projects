//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll divs(ll n){
    ll sum = n - 1, res = n - 2;
    for (ll i = 2; i * i <= n; ++i){
        if (n % i == 0){
            ll x = i * (n / i - 1);
            if (x + i > sum) sum = x + i, res = x;
            else if (x + i == sum) res = max(res, x);
            if (i * i != n) {
                x = n / i * (i - 1);
                if (x + n / i > sum) sum = x + n / i, res = x;
                else if (x + n / i == sum) res = max(res, x);
            }
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    cout << divs(n);
    return 0;
}