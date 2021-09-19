//                      B - Maritozzo
// Link - https://atcoder.jp/contests/abc219/tasks/abc219_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    string s[3], s1;
    cin >> s[0] >> s[1] >> s[2] >> s1;
    fora(0,s1.size()){
        cout << s[(s1[i]-'0')-1];
    }
return 0;
}