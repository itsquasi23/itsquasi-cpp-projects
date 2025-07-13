//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,int> a[1000006];
int n;
ll p;

int bin(int l, int r, ll req){
    int pos = n + 1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid].first >= req){
            pos = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return pos;
}

int mxa[1000006];
ll sub[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> p;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
        sub[i] = a[i].first;
    }
    sort(a + 1, a + 1 + n);
    mxa[n] = a[n].second;
    for (int i = n - 1; i >= 1; --i) {
        mxa[i] = max(mxa[i + 1], a[i].second);
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i){
        ll require = sub[i] + p;
        int pos = bin(1, n, require);
        if (pos <= n){
            mx = max(mx, mxa[pos] - i);
        }
    }
    cout << mx;
    return 0;
}