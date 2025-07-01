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
    while (n--){
    int k;
    cin >> k;
    string a;
    cin >> a;
    set<char> c;
    for (char e : a) c.insert(e);
    if (c.size() == k) cout << "Yes\n";
    else cout << "No\n";
    }
    return 0;
}