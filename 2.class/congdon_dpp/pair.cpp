//Chasing the goal...
//MΔDE BY ITSQUΔSI
#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

unordered_map<int,int> kien;

int main()
{
    /*if (fopen(".inp","r"))
    {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }*/
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int sum = 0, t = 0;
    while (n--){
        int a;
        cin >> a;
        t += kien[-a];
        kien[a]++;
    }
    cout << t;
    return 0;
}