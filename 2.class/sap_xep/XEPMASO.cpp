//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct kien{
    ll pos, val;
};

kien a[1000006];

bool cmp(kien a, kien b){
    if (a.val == b.val) return a.pos < b.pos;
    return a.val > b.val;
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i].pos >> a[i].val;
    sort (a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; ++i) cout << a[i].pos << " " << a[i].val << "\n";
    return 0;
}