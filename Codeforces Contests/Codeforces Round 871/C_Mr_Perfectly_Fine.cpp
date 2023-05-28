#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main()
{
int t=1;
cin>>t;
while(t--){
    int n=1;
    cin>>n;

    int zeroOne  = INT_MAX , oneZero = INT_MAX;
int num ;
string s;

// vector<string>v={"11"};
// vector<int>nums={9};
vector<string>v(n);
vector<int>nums(n);

    for(int i =0 ; i  < n ; i ++){
        cin>>nums[i];
cin>>v[i];
    }

int ans =INT_MAX;

    for(int i =0 ; i < n ; i ++){

        if(v[i]=="10"){
            oneZero = min(oneZero , nums[i]);
        }
        else    if(v[i]=="01"){
            zeroOne = min(zeroOne , nums[i]);
        }else if(v[i]=="11"){
            ans = min(ans , nums[i]);
        }
    }

if(ans != INT_MAX){
    if(zeroOne!=INT_MAX && oneZero!=INT_MAX){

    cout<<min(ans , zeroOne+oneZero)<<endl;
 
    }else{
        cout<<ans<<endl;
    }
}else{
    if(zeroOne!=INT_MAX && oneZero!=INT_MAX){
        cout<<zeroOne+oneZero<<endl;
    }else{
        cout<<-1<<endl;
    }
}
    
}
 return 0;
}