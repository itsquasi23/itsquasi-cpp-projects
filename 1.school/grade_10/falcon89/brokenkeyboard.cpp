//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--){
        string a, b;
        cin >> a >> b;
        int i = 0, j = 0;
        bool f = 1;
        while (j < b.size() && i < a.size()){
            if (a[i] != b[j]){
                f = 0;
                break;
            } 
            ll c1 = 0, c2 = 0;
            char ch = a[i];
            while (i < a.size() && a[i] == ch){
                c1++;
                i++;
            }
            while (j < b.size() && b[j] == ch){
                c2++;
                j++;
            }

            if (c2 < c1){
                f = 0;
                break;
            }
        }
        if (f && i == a.size() && j == b.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}