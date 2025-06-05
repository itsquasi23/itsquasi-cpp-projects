//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll abc = a * b * c / __gcd(a,__gcd(b,c));
    ll ab = a * b / __gcd(a,b);
    ll ac = a * c / __gcd(a,c);
    ll bc = b * c / __gcd(b,c);
    ll sum1 = n / ab - n / abc, sum2 = n / bc - n / abc, sum3 = n / ac - n / abc;
    cout << sum1 + sum2 + sum3;
    return 0;
}