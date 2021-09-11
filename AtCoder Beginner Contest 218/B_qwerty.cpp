//                      B - qwerty
// Link - https://atcoder.jp/contests/abc218/tasks/abc218_b


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll num;
    fora(0,26){
        cin >> num;
        cout << char(96+num);
    }
return 0;
}