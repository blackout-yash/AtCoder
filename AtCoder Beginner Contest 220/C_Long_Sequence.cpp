//                      C - Long Sequence
// Link - https://atcoder.jp/contests/abc220/tasks/abc220_c


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n;
    ll arr[n], sum[n], prev = 0;
    fora(0,n){
        cin >> arr[i];
        sum[i] = prev + arr[i];
        prev = sum[i];
    }cin >> k;
    ll max = sum[n-1];

    ll temp = 0;
    if(k > max){
        temp = (k/max)*n;
        k -= ((k/max)*max);
    }

    auto it = lower_bound(sum, sum + n, k);
    ll index = it-sum; 
    if(sum[index] == k) index++; index++;
    cout << temp + index << "\n";
return 0;
}