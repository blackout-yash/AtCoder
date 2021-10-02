// 					B - typo
// Link - https://atcoder.jp/contests/abc221/tasks/abc221_b	



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
ll find(string s, char c){
    fora(0,s.size()){
        if(s[i] == c) return i;
    }
return -1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s1, s2;
    cin >> s1 >> s2;
 
    bool flag = false, check = true;
    for (int i = 0; i < s1.size(); ++i){
        if(s1[i] != s2[i]){
            if(flag || i+1 == s1.size()){
                check = false;
                cout << "No";
                break;
            }else if(s1[i+1] != s2[i]){
                check = false;
                cout << "No";
                break;
            }else {
                swap(s1[i], s1[i+1]);
                flag = true;
            }
        }
    }if(check) cout << "Yes";
    return 0;
}