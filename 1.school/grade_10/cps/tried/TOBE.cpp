//Welcome to your new home, CLCer ItsQuasi!
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long

using namespace std;

string check(string b){
    if (b == "I") return "am";
    if (b == "You" || b == "We" || b == "They") return "are";
    return "is";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string a;
    getline(cin,a);
    string b = "";
    for (int i = 0; i < a.size(); ++i){
        if (a[i] != ' ') b += a[i];
        else break;
    }
    cout << check(b);
    return 0;
}