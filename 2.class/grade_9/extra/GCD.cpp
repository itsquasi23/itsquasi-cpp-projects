//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

unordered_map<ll,ll> cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll mxval = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        cnt[a[i]]++;
        mxval = max(mxval, a[i]);
    }
    for (int i = mxval; i >= 1; --i){
        int sum = 0;
        for (int j = i; j <= mxval; j += i){
            sum += cnt[j];
        }
        if (sum >= 2){
            cout << i;
            break;
        }
    }
    return 0;
}