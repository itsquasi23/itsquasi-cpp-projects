//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    if (fopen("tongchuso.inp","r"))
        {
            freopen("tongchuso.inp", "r", stdin);
            freopen("tongchuso.out", "w", stdout);
        }
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    ll t = 0;
    for (char c : a){
        t += (c - '0');
    }
    cout << t;
    return 0;
}