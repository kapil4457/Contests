#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

void solve(){
    int n =5, q=5;
    cin>>n>>q;

    vector<int>v(n) ;
    // vector<int>v={2,2,1,3,2} ;
    int currSum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        currSum+=v[i];
    }
    //     cout<<"currSum = "<<currSum<<endl;
    // cout<<"Original Array  : ";
    // for(int i =0 ; i < n ; i ++){
    //     cout<<v[i]<<" ";
    // }
    //     cout<<endl;
        // Calculate suffix sum
        vector<int>suffix(n,0);
        suffix[n-1]=v[n-1];
        for(int i=n-2; i>=0; i--){
            suffix[i] = v[i]+suffix[i+1];
        }
// Printing suffix sum
// cout<<"Prefix Sum : ";
// for(int i =0 ; i  < n ; i ++){
//     cout<<suffix[i]<<" ";
// }
// cout<<endl;

// vector<vector<int>>queries = {{2,2,3} , {2,3,4} , {1,5,5} , {1,4,9} , {2,4,3} };
    for(int i =0 ; i < q ; i ++){
        // cout<<"Query "<<i+1<<" : " <<endl;
        // int l = queries[i][0] , r  = queries[i][1], k=queries[i][2];
        // int l = queries[i][0] , r  = queries[i][1], k=queries[i][2];
        // cout<<"l : "<<l<<" r : "<<r<<" k : "+k<<endl;
        int l,r,k;
        cin>>l>>r>>k;
        int sumToAdd;

        int sumToRemove;
        if(l==r){
        sumToAdd = k;
                sumToRemove = v[i];
        }else{

        sumToAdd = (r-l)*k + k;
        sumToRemove = suffix[l-1] - suffix[r-1] - v[r-1];
        }
        int tempSum = currSum+sumToAdd-sumToRemove;

        // cout<<"SumToAdd = "<<sumToAdd<<endl;
        // cout<<"SumToRemove = "<<sumToRemove<<endl;
        // cout<<"tempSum = "<<tempSum<<endl;

        if(tempSum%2!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
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