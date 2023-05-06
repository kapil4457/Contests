#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


void helper(vector<vector<int>>&vis , vector<vector<int>>&v , int i , int j , int n , int m , vector<int>&tempAns){
    if(i >=n || j >=m || i<0 || j<0)return;
    if(vis[i][j] || v[i][j]==0)return;
    tempAns[0]+=v[i][j];
    vis[i][j]=1;
    vector<int> dir1 = {-1,1,0,0};
    vector<int> dir2 = {0 , 0 , -1 , 1};

    for(int k = 0 ; k < 4 ; k++){
       
            helper(vis,v,i+dir1[k] , j+dir2[k] , n , m , tempAns);
        
    }


}
int main()
{
int t=1;
cin>>t;
while(t--){
    int n=3,m=3;
    cin>>n>>m;
    // vector<vector<int>>v = {
    //     {1,2,0},
    //     {3,4,0},
    //     {0,0,5}
    // };
    vector<vector<int>>v(n,vector<int>(m));
    for(int i =0 ; i < n ; i ++){
        for(int j =0 ; j < m ; j ++){
            cin>>v[i][j];
        }
    }

    vector<vector<int>>vis(n , vector<int>(m , 0));
int ans = 0;
    for(int i =0 ; i < n ; i ++){
        for(int j =0  ; j < m ; j ++){

        if(v[i][j]!=0 && !vis[i][j]){
            vector<int>tempAns(1);
            tempAns[0]=0;
             helper(vis , v , i , j , n  ,m,tempAns);
            ans = max(ans , tempAns[0]);
        }
        }
    }



    cout<<ans<<endl;
}
 return 0;
}