//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

ll divisor[1000006];

void divisor_sieve(){
    for (int i = 1; i < 1000006; ++i){
        for (int j = i; j < 1000006; j += i){
            divisor[j]++;
        }
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
    //Code goes here:
    divisor_sieve();
    int t;
    cin >> t;
    cout << divisor[t];
    return 0;
}