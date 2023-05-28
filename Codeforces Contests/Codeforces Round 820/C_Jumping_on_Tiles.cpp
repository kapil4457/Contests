#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){

string s;
cin>>s;
map<char,vector<int>>ref;
for(int i=0;i<s.size();i++){
    ref[s[i]].push_back(i+1);
}
int n = s.size();
if(s[0] > s[n-1]){
int jmp =0 ;
int cst = abs(s[0]-s[n-1]);
vector<int>path;
for(int i =0 ; s[0]+i >= s[n-1] ; i--){
    char c = s[0]+i;
    if(ref.find(c)!=ref.end()){
        for(auto v  :ref[c]){
path.push_back(v);
        }

    }
}

cout<<cst<<" "<<path.size()<<endl;
for(auto it : path){
    cout<<it<<" ";
}

cout<<endl;
}else if(s[0] < s[n-1]){
    int jmp = 0;
    int cst = abs(s[0]-s[n-1]);
    vector<int>path;

    for(int i =0 ; s[0]+i <= s[n-1] ; i ++){
        char c = s[0]+i;
        if(ref.find(c)!=ref.end()){
            for(auto it : ref[c]){
                path.push_back(it);
            }

        }
    }

    cout<<cst<<" "<<path.size()<<endl;
 for(auto it : path){
    cout<<it<<" ";
}

cout<<endl;   
}else{
    cout<<0<<" "<<ref[s[0]].size()<<endl;
     for(auto it : ref[s[0]]){
    cout<<it<<" ";
}

cout<<endl;   
}
}
int main()
{
TEST {
Solve();
}
 return 0;
}