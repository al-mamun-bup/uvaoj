#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    set<string>st;
    while(cin >> s){
        string str;
        for(ll i=0; i < s.size(); i++){
            char ch = tolower(s[i]);
            if(ch>='a' and ch <='z')
            str += ch;
            else if(!str.empty()){
                st.insert(str);
                str = "";
            }
        }
        if(str!="")
        st.insert(str);
    } 
    for(auto it : st){
        cout << it << nl;
    }
    return 0;
}
