#include <bits/stdc++.h>

using namespace std;

long long a, pref[10000005];

int main()
{

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        pref[i] = pref[i - 1] + a;
    }

    long long res = LONG_LONG_MAX;

    for (int i = 1; i <= n; i++)
    {
        long long t = pref[i-1];

        int l = i, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (pref[mid]-t >= m)
            {
                res=min(res,1ll*mid-i+1);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        // if (j <= n)
        //     res = min(res, j - i + 1);
    }

    cout << res;
    return 0;
}