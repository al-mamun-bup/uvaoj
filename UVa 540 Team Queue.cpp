/**
* Problem : UVa 540 Team Queue
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
    int n;
    int kase = 1;
    while(cin >> n and n){
        queue<int>teamQ[n+1],mainQ;
        map<int,int>teamNo;
        for(int i = 0 ; i < n ; i++){
            int m,num;
            cin >> m;
            while(m--){
                cin >> num;
                teamNo[num] = i;
            }   
        }
        cout << "Scenario #" << kase++ << nl;
        string s;
        while(cin >> s){
            if(s[0]=='S') break;
            else if(s[0]=='E'){
                int id;
                cin >> id;
                int curr = teamNo[id];
                teamQ[curr].push(id);
                if(teamQ[curr].size()==1){
                    mainQ.push(curr);
                }
            }else{
                int curr = mainQ.front();
                cout << teamQ[curr].front() << nl;
                teamQ[curr].pop();
                if(!teamQ[curr].size()){
                    mainQ.pop();
                }
            }
        }
        cout << nl;
    }
    return 0;
}
