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
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += (a[i] - a[i - 1]) * (a[n] - a[i]);
    }
    cout << sum;
    return 0;
}