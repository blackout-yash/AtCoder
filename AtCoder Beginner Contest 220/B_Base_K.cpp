//                              Base K
// Link - https://atcoder.jp/contests/abc220/tasks/abc220_b


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

ll toDecimal(ll n, ll b){
    ll num = n;
    ll dec_value = 0;
    ll base = 1;
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * b;
    } 
return dec_value;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k, a, b;
    cin >> k >> a >> b;
    cout << toDecimal(a, k)*toDecimal(b, k);
return 0;
}