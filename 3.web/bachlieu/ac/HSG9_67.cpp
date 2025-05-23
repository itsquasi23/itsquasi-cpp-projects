//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll p[100005];

const ll mod = 1e9 + 7;

void gen(){
    p[1] = p[2] = 1;
    for (int i = 3; i <= 100000; ++i){
        p[i] = (p[i - 1] + p[i - 2]) % mod;
    }
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    gen();
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cout << p[a] << "\n";
    }   
    return 0;
}