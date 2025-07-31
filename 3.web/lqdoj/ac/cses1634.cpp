//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], dp[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n; ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= k; ++i){
        dp[i] = -1;
        for (int j = 1; j <= n; ++j){
            if (a[j] <= i && dp[i - a[j]] != -1){
                if (dp[i] != -1)
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
                else dp[i] = dp[i - a[j]] + 1;
            }
        }
    }
    cout << dp[k];
    return 0;
}