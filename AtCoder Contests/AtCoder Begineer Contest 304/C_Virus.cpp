#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


bool isInfected(vector<pair<int,int>>&infected , int b1 , int b2 , int d , map<pair<int,int>,int>&uninfected , vector<int>&ans){


for(auto it : infected){

if((((it.first - b1)*(it.first - b1) )  +   ((it.second-b2)*(it.second-b2)) ) <= d*d ){


// check if any uninfected can be infected with this
vector<pair<int,int>>removed;
for(auto itr : uninfected){
pair<int,int>temp = itr.first;

if((((it.first - temp.first)*(it.first - temp.first) )  +   ((it.second-itr.second)*(it.second-itr.second)) ) <= d*d){

ans[itr.second]=1;
infected.push_back(temp);
removed.push_back(temp);
// uninfected.erase(temp);
}
}

for(auto t : removed)uninfected.erase(t);
   
    return true;
}
}

return false;
}
void Solve(){

int n =9, d=4;
cin>>n>>d;

// vector<pair<int,int>>ref = {{3,2} , {6,-1} , {1,6} , {6,5} , {-2,-3} , {5,3} , {2,-3} , {2,1} , {2,6}};
vector<pair<int,int>>ref(n);
for(int i =0 ; i < n ; i ++){
    cin>>ref[i].first>>ref[i].second;
}


vector<pair<int,int>>infected;
map<pair<int,int> , int>uninfected;


pair<int,int>temp = ref[0];
// cout<<"Yes"<<endl;

vector<int>ans(n);
ans[0]=1;

infected.push_back(temp);


for(int i =1 ; i < n ; i ++){
temp = ref[i];
if(isInfected(infected , temp.first , temp.second , d , uninfected,ans)){
ans[i] = 1;
    infected.push_back({temp.first , temp.second });
}else{
    ans[i]=0;
    uninfected[{temp.first , temp.second}] = i;
}
}


for(auto it:ans){
    if(it)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}
int main()
{
TEST {
Solve();
}
 return 0;
}