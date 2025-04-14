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
    int x = 0;
    while (n--){
        string s;
        cin >> s;
        for (int i = 1; i < s.size(); ++i){
            if (s[i] == '+' && s[i - 1] == '+') ++x;
            else if (s[i] == '-' && s[i - 1] == '-') --x;
        }
    }
    cout << x;
    return 0;
}