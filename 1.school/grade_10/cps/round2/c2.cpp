#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sochuso(ll x){
    ll c = 0;
    while (x){
        x /= 10;
        c++;
    }
    return c;
}

ll n2025(ll x){
    if (sochuso(x) % 2 == 0){
        int t = sochuso(x) / 2;
        ll a = 0;
        ll b = x;
        while (t--){
            a = a * 10 + (b % 10);
            b /= 10;
        }
        if ((a + b) * (a + b) == x) return x;
        return 0;
    }
    //return 0;
    else{
        int t1 = sochuso(x) / 2;
        int t2 = t1 + 1;
        ll a1 = 0, a2 = 0;
        ll b1 = x, b2 = x;
        while (t1--){
            a1 = a1 * 10 + (b1 % 10);
            b1 /= 10;
        }
        while (t2--){
            a2 = a2 + ((b2 % 10) * 10);
            b2 /= 10;
        }
        cout << b1 << " " << a1 << " " << b2 << " " << a2 << "\n";
        cout << (a1 + b1) * (a1 + b1) << "\n" << (a2 + b2) * (a2 + b2) << "\n";
        if ((a1 + b1) * (a1 + b1) == x) return x;
        if ((a2 + b2) * (a2 + b2) == x) return x;
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cout << n2025(n);
    /*while (n--){
        ll a;
        cin >> a;
        ll t = 0;
        for (int i = 10; i < a; ++i){
            t += (n2025(i));
            if (n2025(i) != 0) cout << i << " ";
        }
        cout << t << " ";
    }*/
    return 0;
}