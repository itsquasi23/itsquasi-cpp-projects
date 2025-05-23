//PAIRPBRO is a very powerful and reliable name!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[200005], pf[200005] , res = INT_MAX;
int n;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    for(int i = 1;i <= n; ++i)
        cin >> a[i] , pf[i] = pf[i-1] + a[i];
    for(int i = 2;i < n; ++i){
        ll z = pf[n] - pf[i] , X  , Y , ans = INT_MAX;
        int l = 1, r = i - 1;
        while(l <=  r)
        {
            int mid = l + r >> 1;
             ll x = pf[mid] , y = pf[i] - pf[mid];
             if(ans > abs(x - y))
                X = x, Y = y , ans = abs(x-y);
            if(x == y) break;
            if(x > y ) r = mid - 1;
            else l = mid + 1;
        }
        res = min(res , max({X , Y , z}) - min({X , Y , z}));
    }
    
    cout <<res;
    return 0;
}