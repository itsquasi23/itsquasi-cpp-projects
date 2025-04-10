//2025 = 45² = (20+25)² = 5²*9² = (1+2+3+4+5+6+7+8+9)² = 1³+2³+3³+4³+5³+6³+7³+8³+9³
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct kien{
    int pos;
    ll val;
};

kien a[100005], b[100005];

bool cmp1(kien a, kien b){
    return a.val < b.val;
}

bool cmp2(kien a, kien b){
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
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> a[i].val, a[i].pos = i;
    for (int i = 1; i <= m; ++i) cin >> b[i].val, b[i].pos = i;
    sort (a + 1, a + 1 + n, cmp2);
    sort (b + 1, b + 1 + m, cmp1);
    ll s = 0;
    for (int i = 1; i <= n; ++i){
        s += a[i].val * b[i].val;
    }
    cout << s << "\n";
    for (int i = 1; i <= n; ++i) cout << a[i].pos << " ";
    cout << "\n";
    for (int i = 1; i <= n; ++i) cout << b[i].pos << " ";
    return 0;
}