//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

/* ll bit[1000006];
int n;

void update(int u, int v){
    int idx = u;
    while (idx <= n){
        bit[idx] += v;
        idx += (idx & (-idx));
    }
}

ll sum(int p){
    int idx = p;
    ll ans = 0;
    while (idx > 0){
        ans += bit[idx];
        idx -= (idx & (-idx));
    }
    return ans;
} */

vector<int> bit1, bit2;
/*
    Các hàm update và sum cần làm việc trên một trong hai BIT riêng biệt.
    Sử dụng vector cho phép truyền BIT vào làm việc trực tiếp dễ dàng hơn.
*/

void updatePoint(vector<int>& b, int u, int v) {
    int idx = u;
    while (idx <= n) {
        b[idx] += v;
        idx += (idx & (-idx));
    }
}

void updateRange(int l, int r, int v) {
    updatePoint(bit1, l, (n - l + 1) * v);
    updatePoint(bit1, r + 1, -(n - r) * v);
    updatePoint(bit2, l, v);
    updatePoint(bit2, r + 1, -v);
}

int getSumOnBIT(vector<int>& b, int u) {
    int idx = u, ans = 0;
    while (idx > 0) {
        ans += b[idx];
        idx -= (idx & (-idx));
    }
    return ans;
}

int prefixSum(int u) {
    return getSumOnBIT(bit1, u) - getSumOnBIT(bit2, u) * (n - u);
}

int rangeSum(int l, int r) {
    return prefixSum(r) - prefixSum(l - 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    return 0;
}