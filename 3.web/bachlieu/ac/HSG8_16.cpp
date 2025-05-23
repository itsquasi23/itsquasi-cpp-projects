//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

string num_to_string(ll x){
    string a = "";
    while (x){
        a += (x % 10) + '0';
        x /= 10;
    }
    return a;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll k;
    cin >> k;
    string a = num_to_string(k);
    string b = a;
    reverse(a.begin(), a.end());
    b = a + b;
    cout << b;
    return 0;
}