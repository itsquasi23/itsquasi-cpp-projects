#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef const long long cll;
typedef pair<ll, ll> ii;

cll arr = 1e6 + 9;
ll s;
pair<ll,ll> a[arr];
bool cmp(pair<ll,ll> x , pair<ll,ll> y)
{
     if(x.second == y.second) return x.first > y.first;
     return x.second < y.second;
}
int main() {
     ios_base::sync_with_stdio(NULL);
     cin.tie(0); cout.tie(0);

     if (fopen ("BasicINP.inp","r")){
     freopen("BasicINP.inp","r",stdin);
     freopen("BasicOUT.out","w",stdout);}

     cin >> s;
     for (ll i = 1; i <= s; i++){
          cin >> a[i].first >> a[i].second;
     } 
     sort(a + 1 , a + s + 1 ,cmp);
     for (ll i = 1; i <= s; i++){
          cout << a[i].first << " " << a[i].second << endl;
     } 
     return 0;
}
