//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAX = 1e6 + 6;

int n;
ll a[MAX], st[20][MAX];
void preMin(){
    for (int i = 1; i <= n; ++i) st[0][i] = a[i];
    for (int j = 1; j <= 20; ++j)
        for (int i = 1; i + (1 << j) - 1 <= n; ++i)
            st[j][i] = min(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
}
void preSum(){
    for (int i = 1; i <= n; ++i) st[0][i] = a[i];
    for (int j = 1; j <= 20; ++j)
        for (int i = 1; i + (1 << j) - 1 <= n; ++i)
            st[j][i] = st[j - 1][i] + st[j - 1][i + (1 << (j - 1))];
}
int queryMin(int l, int r) {
    int k = __lg(r - l + 1);
    return min(st[k][l], st[k][r - (1 << k) + 1]);
}
int querySum(int l, int r) {
    int len = r - l + 1;
    int sum = 0;
    for (int j = 0; (1 << j) <= len; ++j)
        if (len >> j & 1) {
            sum = sum + st[j][l];
            l = l + (1 << j);
        }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    return 0;
}