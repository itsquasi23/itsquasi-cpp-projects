//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool prime[1000006];

ll a[1000006];

void sieve(){
    prime[1] = prime[0] = 1;
    for (int i = 2; i * i < 1000000; ++i){
        if (!prime[i]){
            for (int j = i * i; j < 1000000; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll mx = 1, cnt = 1, sum = 0, csum = 0;
    if (!prime[a[1]]) sum = a[1], csum = a[1];
    for (int i = 2; i <= n; ++i){
        if (a[i] > a[i - 1]){
            cnt++;
            if (!prime[a[i]]){
                csum += a[i];
            }
        }
        else {
            if (mx < cnt){
            mx = cnt;
            sum = csum;
            }
            else if (mx == cnt){
                sum = max(sum, csum);
            }
            cnt = 1;
            csum = a[i] * (!prime[a[i]] ? 1 : 0);
        }
    }
    if (mx < cnt){
    mx = cnt;
    sum = csum;
    }
    else if (mx == cnt){
        sum = max(sum, csum);
    }
    cout << mx << " " << sum;
    return 0;
}