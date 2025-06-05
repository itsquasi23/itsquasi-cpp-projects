//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ll mx = 0, pos = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a;
        if (a > mx){
            mx = a;
            pos = i;
        }
        else if (a == mx){
            pos = i;
        }
    }
    cout << pos;
    return 0;
}