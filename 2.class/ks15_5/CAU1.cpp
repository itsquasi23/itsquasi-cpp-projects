//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll trans(char c){
    if (c == 'U') return 25570;
    if (c == 'E') return 28662;
    if (c == 'J') return 179;
    if (c == 'C') return 3487;
    if (c == 'B') return 756;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        char c;
        ll a;
        cin >> c >> a;
        cout << trans(c) * a << "\n";
    }
    return 0;
}