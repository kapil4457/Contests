#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

// n = col
//  m =  row
void Solve(){

int n , m;
cin>>n>>m;

vector<vector<int>>v(m , vector<int>(n));

for(int i =0 ; i <  m ; i ++){
    for(int j =0 ;  j < n ; j ++){
        cin>>v[i][j];
    }
}


map<pair<int,int> , int>ref;

for(int i =0 ; i <  m ; i ++){
    for(int  j =0 ; j < n-1 ; j ++){


        pair<int,int>temp  = {min(v[i][j]  , v[i][j+1]) , max(v[i][j]  , v[i][j+1])};
        ref[temp]++;
    }
}


int totalAvailablePairs = ref.size();

}
int main()
{
TEST {
Solve();
}
 return 0;
}