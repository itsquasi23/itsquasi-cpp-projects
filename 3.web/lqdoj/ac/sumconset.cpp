//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll t;
    cin >> n >> t;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int i = 1;
    ll sum = 0;
    int mx = 0;
    for (int j = 1; j <= n; ++j){
        sum += a[j];
        while (sum > t){
            sum -= a[i];
            i++;
        }
        mx = max(mx, j - i + 1);
    }
    cout << mx;
    return 0;
}