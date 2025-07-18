//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];
int n, k;

ll check(ll mid){
    ll sum = mid;
    int d = 1;
    for (int i = 1; i <= n; ++i){
        if(mid < a[i]) return k + 1;
        if (sum < a[i]){
            sum = mid;
            d++;
        }
        sum -= a[i];
    }

    return d;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    ll sum = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    ll l = 1, r = sum;
    ll res = sum;
    while (l <= r){
        ll mid = l + r >> 1;
        if (check(mid) <= k){
            res = mid;  
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
    return 0;
}