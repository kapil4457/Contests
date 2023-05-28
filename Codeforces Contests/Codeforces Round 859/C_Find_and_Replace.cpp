#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

void solve(){
    int n=4;
    cin>>n;
    string s="bkpt";
    cin>>s;

vector<int>v(26,-1);

for(int i =0 ; i < n ;  i ++){

    //even index
    if(i%2==0){

        if(v[s[i]-97]==-1){
                 v[s[i]-97] = 0;
        }else{
            if(v[s[i]-97]==0){
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }else{
        //Odd index
         if(v[s[i]-97]==-1){
                 v[s[i]-97] = 1;
        }else{
            if(v[s[i]-97]==1){
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
}

cout<<"YES"<<endl;
   
}
int main()
{

int t=1;
cin>>t;
while(t--){
    solve();
}
 return 0;
}