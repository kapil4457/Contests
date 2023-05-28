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
   


//    Calculating the top-left diagonal


// 1) traversing the bottom half 

int diagonalNo = 1;

for(int k =0 ; k < diagonalNo ;  k ++){


    set<int>ref;
int tempNo = diagonalNo;
int row = n-diagonalNo;
int col = 0;


// for each diagonal
    while(tempNo >=1)
{
    ans[row][col] =ref.size();
    ref.insert(ans[row][col]);
    row++;
    col++;
    tempNo--;


}
diagonalNo++;

}

// 2) traversing the center diagonal


int centerDiagX = 0;
int centerDiagY =0;
set<int>temp;
while(centerDiagX <= n-1 && centerDiagY <= m-1){
ans[centerDiagX][centerDiagY] = temp.size();
temp.insert(ans[centerDiagX][centerDiagY]);
centerDiagX++;
centerDiagY++;
}


// 3) traversing the top half
  



int diagonalNo = 1;

for(int k =0 ; k < diagonalNo ;  k ++){


    set<int>ref;
int tempNo = diagonalNo;
int row = 0;
int col = diagonalNo;


// for each diagonal
    while(tempNo <=m-1)
{
    ans[row][col] =ref.size();
    ref.insert(ans[row][col]);
    row++;
    col++;


}



diagonalNo++;

}





//   Calculating the bottom-right




// 1) traversing the bottom half 

int diagonalNo = 1;

for(int k =0 ; k < diagonalNo ;  k ++){


    set<int>ref;
int tempNo = diagonalNo;
int row = n-1;
int col = diagonalNo;


// for each diagonal
    while(row>=0 && col>=0)
{
    ans[row][col] =ref.size();
    ref.insert(ans[row][col]);
    row--;
    col--;
    tempNo--;


}
diagonalNo++;

}

// 2) traversing the center diagonal


int centerDiagX = n-1;
int centerDiagY =m-1;
set<int>temp;
while(centerDiagX >=0 && centerDiagY >=0){
ans[centerDiagX][centerDiagY] = temp.size();
temp.insert(ans[centerDiagX][centerDiagY]);
centerDiagX--;
centerDiagY--;
}


// 3) traversing the top half
  



int diagonalNo = 1;

for(int k =0 ; k < diagonalNo ;  k ++){


    set<int>ref;
int tempNo = diagonalNo;
int row = (n/2) - diagonalNo+1;
int col = m-1;


// for each diagonal
    while(row>=0 && col>=0)
{
    ans[row][col] =ref.size();
    ref.insert(ans[row][col]);
    row++;
    col++;


}
diagonalNo++;

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