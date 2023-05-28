#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;




  vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        
int n  =grid.size();
int m = grid[0].size();


vector<vector<int>>ans(n , vector<int>(m));

for(int i =0 ; i < n ; i ++){
    for(int j =0 ;  j < m ; j ++){

        ans[i][j]  = calculateValue(grid , i , j , n , m);
    }
}

    }













void Solve(){
vector<vector<int>>grid = {{1,2,3},{3,1,5},{3,2,1}};
vector<vector<int>>ans = differenceOfDistinctValues(grid);


int n = ans.size();
int m = ans[0].size();
                                                                                                                                                                      

for(int i =0 ; i < n ; i ++){
    for(int j =0  ; j < m ;  j ++){
        cout<<ans[i][j]<<" ";
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