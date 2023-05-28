#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

void helper( vector<vector<map<string,int>>>&v , string s , int currIdx , int currMiss , string currStr , map<string,int>&dict){
if(currIdx==s.length()){


    return;
}
}



 int minExtraChar(string s, vector<string>& dictionary) {

    // row will indicate the currIdx
    // col will indicate the currIdx
        vector<vector<map<string,int>>>v(s.length() , vector<map<string,int>>(s.length()));
        int currIdx = 0 , currMiss = 0;
        string currStr = "";
        vector<int>ans(1);
        ans[0]=INT_MAX;
                helper(v , s , currIdx , currMiss , currStr , dictionary);
                return ans[0];
    }
void Solve(){

}
int main()
{
TEST {
Solve();
}
 return 0;
}