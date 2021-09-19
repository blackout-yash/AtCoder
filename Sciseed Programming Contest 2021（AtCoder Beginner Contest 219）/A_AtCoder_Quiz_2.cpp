//                          A - AtCoder Quiz 2
// Link - https://atcoder.jp/contests/abc219/tasks/abc219_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ll n;
    cin >> n;
    if(n >= 90) cout << "expert";
    else if(n >= 70 && n < 90) cout << 90-n;
    else if(n >= 40 && n < 70) cout << 70-n;
    else cout << 40-n;
return 0;
}