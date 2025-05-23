//PAIRPBRO is a very powerful and reliable name!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll cnt(ll x){
    ll cnt = 1;
    if (x % 2 == 0){
        int e = 1;
        while (x % 2 == 0){
            x /= 2;
            e++;
        }
        cnt *= e;
    }
    for (ll i = 3; i * i <= x; i += 2){
        if (x % i == 0){
            int e = 1;
            while (x % i == 0){
                x /= i;
                e++;
            }
            cnt *= e;
        }
    }
    if (x > 1) cnt *= 2;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    long long n;
    cin >> n;
    cout << cnt(n);
    return 0;
}