//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

string t, p;
const ll base = 31;
const ll mod = 1000000003;

ll hasht[1000006], pw[1000006];

ll gethash(int i, int j){
    return (hasht[j] - hasht[i - 1] * pw[j - i + 1] + mod * mod) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> t >> p;
    int lent = t.size(), lenp = p.size();
    t = " " + t;
    p = " " + p;
    pw[0] = 1;

    for (int i = 1; i <= lent; ++i){
        pw[i] = (pw[i - 1] * base) % mod;
    }

    for (int i = 1; i <= lent; ++i){
        hasht[i] = (hasht[i - 1] * base + t[i] - 'a' + 1) % mod;
    }

    ll hashp = 0;
    for (int i = 1; i <= lenp; ++i){
        hashp = (hashp * base + p[i] - 'a' + 1) % mod;
    }
    ll t = 0;
    for (int i = 1; i <= lent - lenp + 1; i++)
        if (hashp == gethash(i, i + lenp - 1)) cout << i << " ";
    return 0;
}