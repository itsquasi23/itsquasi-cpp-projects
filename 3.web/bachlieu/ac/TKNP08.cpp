#include<bits/stdc++.h>

using namespace std;

long long a[1000005];

int main(){

    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);

    long long n, m, maxval = 0, res = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxval = max(maxval, a[i]);
    }

    sort(a + 1, a + 1 + n);

    long long l = 1, r = maxval;
    while (l <= r) {
        long long sum = 0;
        int mid = l + (r - l) / 2;

        int idx = lower_bound(a + 1, a + 1 + n, mid + 1) - a;

        for (int i = idx; i <= n; i++) {
            sum += a[i] - mid;
        }

         if (sum >= m) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << res;
    return 0;
}