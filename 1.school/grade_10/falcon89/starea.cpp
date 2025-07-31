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
    ll mxarea = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    stack<ll> st;
    for (int i = 0; i <= n; ++i){
        int h = (i == n ? 0 : a[i]);
        while (!st.empty() && a[st.top()] >= h){
            ll hg = a[st.top()]; st.pop();
            ll wd = st.empty() ? i : i - st.top() - 1;
            mxarea = max(mxarea, hg * wd);
        }
        st.push(i);
    }
    cout << mxarea << "\n";
    return 0;
}