#include<bits/stdc++.h>

using namespace std;

int extremecf(int x){
    while (x > 9){
        if (x % 10 != 0) return 0;
        x /= 10;
    }    
    return 1;
}

int main(){
    int a;
    cin >> a;
    while (a--){
    int s, t = 0;
    cin >> s;
    for (int i = 1; i <= s; i++){
        if(extremecf(i)) t++;
    }
    cout << t << endl;
    }
    return 0;
}