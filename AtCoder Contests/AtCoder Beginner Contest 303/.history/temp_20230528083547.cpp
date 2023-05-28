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
        
    
int n = grid.size();
int m =  grid[0].size();
    vector<vector<int>>ans(  n , vector<int>(m));

    vector<vector<int>>leftmost(n , vector<int>(m));
    vector<vector<int>>rightmost(n , vector<int>(m));
   


//    Calculating the bottom-right diagonal


int i = n-1;
int j = 0;

// traversing the bottom half till n-3

int diagonalNo = 1;

for(int k =0 ; k < diagonalNo ;  k ++){


    set<int>ref;

int row = n-diagonalNo;
int col = 0;

    while(l)


}


// traversing the center diagonal


// traversing the top half
  

















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