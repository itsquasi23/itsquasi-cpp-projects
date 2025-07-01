//Goal: Get into CLC
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
    ll c;
    cin >> n >> c;
    string a;
    cin >> a;
    int mx = 0;
    int na = 0, nb = 0, ab = 0;
    for (int i = 0, j = 0; j < n; ++j){
        if (a[j] == 'a') na++;
        else if (a[j] == 'b') ab += na, nb++;
        while (ab > c){
            if (a[i] == 'a') ab -= nb, na--;
            else if (a[i] == 'b') nb--;
            i++;
        }
        mx = max(mx, j - i + 1);
    }
    cout << mx;
    return 0;
}