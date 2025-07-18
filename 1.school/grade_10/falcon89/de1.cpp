//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n , m ,a[10005] ;
map<int,int> cnt;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1;i <= n; ++i){
        if(cnt[m-a[i]]){
            cout << cnt[m - a[i]] << " " << i;
            return  0;
        }
        cnt[a[i]] = i;
    }
    cout << -1;
    return 0;
}
