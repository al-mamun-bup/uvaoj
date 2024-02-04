/**
* Problem : UVa 156 Anagrams
* Author  : Abdullah Al Mamun
* From    : BUP(CSE)
**/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0);
#define ll long long
#define nl "\n"
#define db double
#define pb push_back
#define F first
#define S second
#define precision(x) cout.setf(ios::fixed); cout.precision(x);
#define all(v) v.begin(),v.end()
#define inf LLONG_MAX
using namespace std;
int main(){
    fast;
    string s;
    vector<string> v,ans;
    map<string,ll>mp;
    while(cin >> s){
        if(s == "#") break;
        v.pb(s);
        transform(all(s),s.begin(), ::tolower);
        sort(all(s));
        mp[s]++;
    }
    for(auto it : v){
        string str = it;
        transform(all(str),str.begin(), ::tolower);

        sort(all(str));
        if(mp[str]==1){

            ans.pb(it);
        }
    }
    sort(all(ans));

    for(auto it : ans){
        cout << it << nl;
    }
    return 0;
}
