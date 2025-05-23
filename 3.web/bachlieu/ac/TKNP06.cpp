#include<bits/stdc++.h>

using namespace std;

long long a[100005];


int main(){
    long long n,c = 0, b;
    cin >> n >> b;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++){
    int l = i + 1, r = n;
    long long t = b - a[i];
    /*while (l <= r){
        int mid = l + (r - l) / 2;
        if (a[mid] == t){ c++; break;}
        if (a[mid] > t) r = mid - 1;
        else l = mid + 1;
    }*/
    int upper = upper_bound(a + l, a + r + 1, t) - a;
    int lower = lower_bound(a + l, a + r + 1, t) - a;
    c += upper - lower;
    }
    cout << c << endl;
    return 0;
}