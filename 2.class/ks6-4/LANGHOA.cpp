//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool a[100005], b[100005];
int prep[100005];

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //Code goes here:
    int n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];
    prep[n + 1] = -1;
    for (int i = n; i >= 1; --i){
        if (a[i] == 1 && b[i] == 1) prep[i] = i;
        else prep[i] = prep[i + 1];
    }
    while (k--){
        int d;
        cin >> d;
        if (a[d] == 1) cout << 1 << " ";
        else if (b[d] == 1 && prep[d + 1] != -1){
            cout << 1 << " ";
        }
        else cout << 0 << " ";
    }
    return 0;
}