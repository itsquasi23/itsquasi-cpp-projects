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
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 2; i <= n; ++i){
        for (int j = 1; j < i; ++j){
            ll t = abs(a[i] + a[j]);
            sum += t * t * t;
        }
    }
    cout << sum;
    return 0;
}