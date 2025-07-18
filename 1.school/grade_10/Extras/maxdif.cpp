//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006], dif[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    sort (a + 1, a + 1 + n);

    for (int i = 1; i < n; ++i) dif[i] = a[i + 1] - a[i];

    ll mn = LLONG_MAX;
    deque<ll> dq;

    for (int i = 1; i < n; ++i){
        while (!dq.empty() && dq.front() <= i - (n - k - 1))
            dq.pop_front();
        while (!dq.empty() && dif[dq.back()] <= dif[i])
            dq.pop_back();

        dq.push_back(i);
        if (i >= n - k - 1)
            mn = min(mn, dif[dq.front()]);
    }
    cout << mn;
    return 0;
}