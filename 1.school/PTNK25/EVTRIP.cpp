//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[10004];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    ll p,d;
    cin >> n >> p >> d;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    a[n + 1] = d;
    ll checkpoint = 0, c = 0;
    for (int i = 1; i <= n; ++i){
        if (p > a[i] - checkpoint && p < a[i + 1] - checkpoint) checkpoint = a[i], c++;
        else continue;
    }
    if (p < d - checkpoint) cout << -1;
    else cout << c;
    return 0;
}

/*
// legit code, quality over quantity
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n, p, a[1005], d[1005], target, minn = 1e9;
void solve()
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = 1e9;
        for (int j = i - 1; j >= 0; j--)
            if (a[i] - a[j] < p)
                d[i] = min(d[i], d[j] + 1);
            else
                break;
        if (d[i] == 1e9)
        {
            cout << -1;
            exit(0);
        }
    }
    for (int i = 0; i <= n; i++)
        if (target - a[i] < p)
            minn = min(minn, d[i]);
    if (minn == 1e9)
        cout << -1;
    else
        cout << minn;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> p >> target;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    solve();
}
*/