#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int i = 1;
    int mx = 0;
    for (int j = 1; j <= n; ++j){
        if (a[j] > k) i = j + 1;
        mx = max(mx, j - i + 1);
    }
    cout << mx;
    return 0;
}