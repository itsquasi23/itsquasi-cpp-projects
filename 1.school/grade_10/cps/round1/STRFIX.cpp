#include<bits/stdc++.h>

using namespace std;

map<char,bool> invalid;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    long long n,m;
    cin >> n;
    while (n--){
        char c;
        cin >> c;
        invalid[c] = 1;
    }
    cin >> m;
    while (m--){
        string a;
        cin >> a;
        string b = "", res = "";
        for (char c : a){
            if (invalid[c] == 0) b = c + b;
            else{
                res += b;
                b = "";
            }
        }
        res += b;
        cout << res << "\n";
    }
    return 0;
}