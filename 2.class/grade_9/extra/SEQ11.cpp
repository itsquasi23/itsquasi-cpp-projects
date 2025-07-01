//Goal: Get into CLC
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1000006];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll mx = 1, cnt = 1, sum = a[1], csum = a[1];
    for (int i = 2; i <= n; ++i){
        if (a[i] > a[i - 1]){
            cnt++;
            csum += a[i];
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
            csum = a[i];
        }
    }
    if (mx < cnt){
    mx = cnt;
    sum = csum;
    }
    else if (mx == cnt){
        sum = max(sum, csum);
    }
    cout << sum;
    return 0;
}