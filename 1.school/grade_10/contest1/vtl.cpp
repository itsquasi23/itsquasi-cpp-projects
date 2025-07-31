//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> a[1000006];
ll p[1000006];
bool sorter(pair<ll,ll> a, pair<ll,ll> b){
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
    for(int i = 1;i <= n; ++i)
        p[i] = p[i-1] + a[i].second;
    int l = 1 ;
    ll H = LLONG_MIN;
    for(int r = 1 ;r <= n; ++r){
        while(l < r)
        {
            ll H1 = p[r] - p[l - 1] - (a[r].first - a[l].first) , H2 = p[r] - p[l] - (a[r].first - a[l + 1].first);
            if(H2 > H1)
                l++;
            else break;
        }
        H = max(H ,p[r] - p[l-1] - (a[r].first - a[l].first));
    }
    cout << H;
    return 0;
}