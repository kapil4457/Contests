#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
// #define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

int calculateNodes(int currNode , vector<int>adj[] , vector<set<int>>&ref , int currNode1 ){
if(adj[currNode].size()==0)
{
ref[currNode1].insert(currNode);
return 1;
}

int ans = 0;

for(auto it : adj[currNode]){
    ans+= calculateNodes(it-1  ,adj , ref ,  currNode1);
}

return ans;


}
void Solve(){

int nodes =5;
cin>>nodes;

// adjacency list
// vector<int> adj[nodes] = {{2},{3} ,{4,5}};
vector<int> adj[nodes] ;

int a , b;
for(int i = 0 ; i < nodes ; i ++){
    cin>>a>>b;
    adj[min(a,b)-1].push_back(max(a,b));
}

// calculating the number of leaf node each node can reach;


vector<int>reach(nodes , 0);
vector<set<int>>ref(nodes);

for(int currNode =1 ;  currNode < nodes ; currNode++){
    if(adj[currNode-1].size()){

int temp = calculateNodes(currNode-1 , adj , ref , currNode-1);
reach[currNode-1] = temp;
    }
}
// for each of the queries calculate the total paths of reaching the leaf;

int q=4;
cin>>q;
// vector<pair<int,int>>queries = {{3,4} , {5,1} , {4,4} , {1,3}};
vector<pair<int,int>>queries ;


int c,d;
for(int i =0 ; i < q ; i ++){
cin>>c>>d;
queries.push_back({c,d});

}

for(int i= 0 ; i< q; i ++){
int a = queries[i].first-1;
int b = queries[i].second-1;

if(ref[a].size()==2 && ref[b].size()==2){
    cout<<4<<endl;
}else if(ref[a].size()==2 || ref[b].size()==2){
    cout<<2<<endl;
}else{
    cout<<1<<endl;
}

}


}
int main()
{
TEST {
Solve();
}
 return 0;
}