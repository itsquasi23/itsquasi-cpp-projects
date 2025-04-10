//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[10000007];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i <= 10000007; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= 10000007; j += i){
                prime[j] = 1;
            }
        }
    }
}

bool check(int a){
    int t = 0, x = a;
    while (a){
        t = t * 10 + a % 10;
        a /= 10;
    }
    return t == x;
}

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    sieve();
    int a,b,c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i){
        if (!prime[i] && check(i)) c++;
    }
    cout << c;
    return 0;
}