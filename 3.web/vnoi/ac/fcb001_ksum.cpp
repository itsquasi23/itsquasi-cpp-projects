//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll sum = 0, st = 1, mx = 0;
    for (int i = 1; i <= n; ++i){
        sum += a[i];
        if (i - st + 1 == k){
            mx = max(mx, sum);
            sum -= a[st];
            st++;
        }
    }
    cout << mx << "\n";
    return 0;
}