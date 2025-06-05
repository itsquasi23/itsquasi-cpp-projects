//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[105];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll t = 0;
    for (int i = 2; i <= n; ++i){
        for (int j = 1; j < i; ++j){
            if ((a[i] + a[j]) == e) ++t;
        }
    }
    cout << t;
    return 0;
}