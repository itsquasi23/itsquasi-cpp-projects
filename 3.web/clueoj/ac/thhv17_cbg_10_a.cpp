//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<ll,ll> kien;

ll str_to_num(string a, int n){
    ll t = 0;
    for (char c : a){
        t = (t * 10 + (c - '0')) % n;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n;
    k = n;
    kien[0] = 1;
    ll sum = 0, res = 0;
    while (n--){
        string a;
        cin >> a;
        sum += str_to_num(a, k);
        res += kien[sum % k];
        kien[sum % k]++;
    }
    cout << res;
    return 0;
}