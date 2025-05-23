//PAIRPBRO is a very powerful and reliable name!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

long long a[200005];
ll l[2000005] , r[2000005];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    long long x,y,z;
    cin >> x >> y >> z;
    for(int i = 0 ;i <= n + 1; ++i)
        l[i] = INT_MIN ,  r[i] = INT_MIN;
    for(int i = 1;i <= n; ++i)
        l[i] = max(l[i - 1] , a[i] * x);
    for(int i = n ;i >= 1 ; --i)
        r[i] = max(r[i + 1] , a[i] * z);
    long long res = 0;
    for(int i = 2 ;i < n; ++i)
        res = max(res , l[i - 1] + a[i] * y + r[i + 1]);
    cout << res;
    return 0;
}