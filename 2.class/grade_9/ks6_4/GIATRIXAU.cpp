//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll pf[1000006];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    int n;
    ll c;
    cin >> n >> c;
    string s;
    cin >> s;
    s = ' ' + s;
    int mx = INT_MIN;
    for (int i = 1; i <= n; ++i){
        int a = 0, b = 0;
        for (int j = i; j <= n; ++j){
            if (s[j] == 'a') ++a;
            else if (s[j] == 'b') ++b;
            //cout << a * b << " ";
            if (a * b <= c) mx = max(mx, j - i + 1);
            else break;
        }
        //cout << "\n";
    }
    cout << mx;
    return 0;
}