// Welcome to your new home, CLCer ItsQuasi!
// MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll lcm2(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
      ll n;
      cin >> n;
      ll check = LLONG_MAX , l = 0 , r = 0;
      for(int i = 2;i * i <= n ; ++i){
        if(n % i ==0)
        {
            ll x = n / i - 1;
            ll a = x * i;
            if(check >= a && a + i == n)
            {
                l = a , r = i;
                check = a;
            }
            x = i - 1;
            a = x * (n/i);
            if(check >= a && a + n/i == n && i * i != n){
                l = a , r = n/i;
                check = a;
            }
        }
      }
      if(l != 0 && r != 0)
      cout << r << " " << l << "\n";
      else 
      cout << 1 << " " << n- 1 << "\n";
    }
    return 0;
}