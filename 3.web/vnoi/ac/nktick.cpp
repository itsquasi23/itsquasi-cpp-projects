//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], b[1000006], dp[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i){
        cin >> b[i];
    }
    dp[1] = a[1];
    for (int i = 2; i <= n; ++i){
        dp[i] = min(a[i] + dp[i - 1], b[i - 1] + dp[i - 2]);
    }
    cout << dp[n];
    return 0;
}