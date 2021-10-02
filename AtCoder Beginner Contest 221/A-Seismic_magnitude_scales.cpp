//             A - Seismic magnitude scales
// Link - https://atcoder.jp/contests/abc221/tasks/abc221_a



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll a, b;
    cin >> a >> b;
    cout << binpow(32, a-b);
 
    return 0;
}