//Welcome to your new home, CLCer ItsQuasi!
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
    ll t = 0;
    sort (a + 1, a + 1 + n);
    for (int i = n; i >= 1; --i){
        int l = 1, r = i - 1;
        while (l < r){
            if (a[l] + a[r] > a[i]){
                t += r - l;
                //cout << a[l] << " " << a[r] << "\n";
                r--;
            }
            else l++;
        }
    }
    cout << t;
    return 0;
}