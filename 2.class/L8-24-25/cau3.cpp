//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

bool prime[1000006];

void sieve(){
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= 1000006; ++i){
        if (!prime[i]){
            for (int j = i * i; j <= 1000006; j += i){
                prime[j] = 1;
            }
        }
    }
}

bool rev(int x){
    int t = 0, x1 = x;
    while (x){
        t = t * 10 + (x % 10);
        x /= 10;
    }
    return t == x1;
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
    int t;
    cin >> t;
    while (t--){
        int l, r;
        cin >> l >> r;
        int c = 0;
        for (int i = l; i <= r; ++i){
            if (!prime[i] && rev(i)) ++c;
        }
        cout << c << "\n";
    }
    return 0;
}