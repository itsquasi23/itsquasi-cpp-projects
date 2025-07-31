//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

unordered_map<ll,ll> kbc;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 1, r = 1, res = 0, dist = 0;
    for (int i = 1, j = 1; j <= n; ++j){
        if (++kbc[a[j]] == 1) dist++;
        while (dist > k){
            if (--kbc[a[i]] == 0) dist--;
            i++;
        }
        if (j - i + 1 > res){
            res = j - i + 1;
            l = i, r = j;
        }
    }
    cout << l << " " << r;
    return 0;
}