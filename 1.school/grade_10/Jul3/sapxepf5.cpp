//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

long double a[1000006], pf[1000006];
int n, k;
int check(long double r)
{
    ll dem = 0;
    int i = 0;
    while (i < n){
        dem++;
        long double sum = pf[i] + r;
        int j = i;
        while (j < n && pf[j] <= sum) j++;
        long double cov = pf[j - 1] + r;
        i = j;
        while(i < n && pf[i] <= cov) i++;
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    cin >> n >> k;
    for (int i = 1; i < n; ++i){
        cin >> a[i];
    }
    pf[0] = 0;
    for (int i = 1; i < n; ++i){
        pf[i] = pf[i - 1] + a[i];
    }
    long double l = 0 , r = pf[n - 1] ;
    for (int i = 0; i < 100; ++i)
    {
        long double mid = (l + r) / 2;
        if(check(mid) > k ) l = mid;
        else {

            r = mid;
        }
    }
    cout << fixed << setprecision(4) << r;
    return 0;
}