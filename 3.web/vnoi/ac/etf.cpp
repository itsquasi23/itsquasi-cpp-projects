//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll phi(ll n){
    ll res = n;
    if (n % 2 == 0){
        while (n % 2 == 0) n /= 2;
        res -= res / 2;
    }
    for (int i = 3; i * i <= n; i += 2){
        if (n % i == 0){
            while (n % i == 0) n /= i;
            res -= res / i;
        }
    }
    if (n != 1) res -= res / n;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        ll a;
        cin >> a;
        cout << phi(a) << "\n";
    }
    return 0;
}