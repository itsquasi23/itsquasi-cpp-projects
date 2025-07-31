//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll str_to_num(string n, ll k){
    ll t = 0;
    for (char c : n){
        t = (t * 10 + (c - '0')) % k;
    }
    return t;
}

ll f(ll k){
    ll t = 1;
    for (int i = 2; i <= k; ++i){
        t *= i;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        ll k;
        string n;
        cin >> n >> k;
        if (str_to_num(n, f(k)) == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}