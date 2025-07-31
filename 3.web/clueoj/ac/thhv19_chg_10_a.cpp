//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll divs[1000006];
ll codi[1000006];
ll cnt[1000006];

void divsieve(){
    for (int i = 1; i < 1000006; ++i){
        for (int j = i; j < 1000006; j += i){
            divs[j]++;
        }
    }
}

void codisieve(){
    ll l = 2;
    cnt[1] = 1;
    for (int i = 2; i < 1000006; ++i){
        cnt[i] = cnt[i - 1];
        if (i == l) cnt[i]++, l = l + divs[l];
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    divsieve();
    codisieve();
    int n;
    cin >> n;
    while (n--){
        int l, r;
        cin >> l >> r;
        cout << cnt[r] - cnt[l - 1] << "\n";
    }
    return 0;
}