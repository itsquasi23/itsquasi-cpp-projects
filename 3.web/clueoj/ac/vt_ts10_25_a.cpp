//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll divs[1000006];

void sieve(){
    for (int i = 1; i <= 1000006; ++i){
        for (int j = i; j <= 1000006; j += i) divs[j]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll n, k, t = 0;
    cin >> n >> k;
    for (int i = 1; i < n; ++i){
        if (divs[i] == k) t++;
    }
    cout << t;
    return 0;
}