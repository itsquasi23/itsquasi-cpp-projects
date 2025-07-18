#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fastpow(ll a, ll b){
    ll t = 1;
    while (b){
        if (b & 1){
            t *= a;
        }
        a *= a;
        b /= 2;
    }
    return t;
}

ll ten(ll a){
    ll c = 0;
    while (a){
        a /= 10;
        c++;
    }
    return c;
}

int main(){
    ll t = 0;
    int n;
    cin >> n;
    while (n--){
        ll a;
        cin >> a;
        t += fastpow(10, a);
        cout << ten(t) << " ";    
    }
    return 0;
}