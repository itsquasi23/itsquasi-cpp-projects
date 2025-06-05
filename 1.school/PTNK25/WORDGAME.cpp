//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dp[2004][2004];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();

    for (int i = n - 1; i >= 0; --i){
        dp[i][i] = 1;
        for (int j = i + 1; j < n; ++j){
            if (s[i] == s[j])
            dp[i][j] = 2 + dp[i + 1][j - 1];
            else dp[i][j] = max(dp[i + 1][j],dp[i][j - 1]);
        }
    }
    cout << n - dp[0][n - 1];
    return 0;
}