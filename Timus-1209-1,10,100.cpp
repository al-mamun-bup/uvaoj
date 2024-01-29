#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pb push_back
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<ll>v;
map<ll,ll>mp;
void init(){
    v.pb(1);
    ll cnt = 1;
    mp[1]++;
    for(ll i=0;i<65540;i++){
        ll x = cnt;
        x = x*(x+1)/2 + 1;
        mp[x]++;
        cnt++;
    }
}
int main(){
    fast;
    init();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        cout << mp[n] << " ";
    }
    return 0;
}
