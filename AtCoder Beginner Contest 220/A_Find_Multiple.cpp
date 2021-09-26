//                     A - Find Multiple
// Link - https://atcoder.jp/contests/abc220/tasks/abc220_a


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    fora(a, b+1){
        if(i % c == 0) {
            cout << i;
            flag = false;
            break;
        }
    }if(flag) cout << "-1";
return 0;
}