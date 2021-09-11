//                    D - Rectangles
// Link - https://atcoder.jp/contests/abc218/tasks/abc218_d


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)

int main(){
    ll n;  
    cin >> n;
    vector<pair<ll,ll>> v(n);
    fora(0,n) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    ll count = 0;
    fora(0,n)
        for(ll j = 0; j < n; j++) 
            if(v[i].first < v[j].first && v[i].second < v[j].second) {
                if(binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second)) && binary_search(v.begin(),v.end(), make_pair(v[j].first, v[i].second))) count++;
            }
    cout << count;
return 0;
}