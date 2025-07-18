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
    ll x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int i = 1, j = n;
    while (i < j){
        if (a[i] + a[j] == x){
            cout << i << " " << j;
            return 0;
        }
        else if (a[i] + a[j] < x) i++;
        else if (a[i] + a[j] > x) j--;
    }
    cout << "No solution";
    return 0;
}