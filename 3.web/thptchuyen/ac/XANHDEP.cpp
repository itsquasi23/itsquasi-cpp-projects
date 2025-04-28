//Chasing the goal...
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
    int res = 0;
    while (n--){
        string a;
        cin >> a;
        int len = 0;
        for (int i = 0, j = 0; j < a.size(); ++j){
            if (a[j] == a[i]) len = max(len, j - i + 1);
            else i = j;
        }
        res = max(res,len);
    }
    cout << res;
    return 0;
}