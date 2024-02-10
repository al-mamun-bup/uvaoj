/**
* Problem : UVa 136 Ugly Numbers
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
    set<ll>st;
    ll num;
    ll cnt = 0;
    ll op = 1;
    st.insert(1);
    while(op <= 1500){
        num = *st.begin();
        st.erase(num);
        st.insert(num*2),st.insert(num*3),st.insert(num*5);
        op++;
    }
    cout << "The 1500'th ugly number is " << num <<"." << nl;
    return 0;
}
