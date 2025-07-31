#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef const long long cll;
typedef pair<ll, ll> ii;
 
ll s;
pair<string,string> a;
 
int main() {
     ios_base::sync_with_stdio(NULL);
     cin.tie(0); cout.tie(0);
 
     if (fopen ("BasicINP.inp","r")){
     freopen("BasicINP.inp","r",stdin);
     freopen("BasicOUT.out","w",stdout);}
 
     cin >> s;
     cin.ignore();
     while(s--){
          cin >> a.first >> a.second;
          swap(a.first, a.second);
          cout << a.first << " " << a.second << endl;
     }
     return 0;
}