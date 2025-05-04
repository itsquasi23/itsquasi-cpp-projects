//Happy April 30!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

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
    string a;
    cin >> a;
    int t = 0;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] == a[i + 1]){
            a.erase(i,1);
            i--;
            n--;
            ++t;
        }
    }
    cout << t;
    return 0;
}