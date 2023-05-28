#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;



void helper(string s , int currIdx  , int currMiss , string currStr , vector<string >&dict ){

}
  


 int minExtraChar(string s, vector<string>& dictionary) {
        vector<int>ans(1);
        ans[0] = INT_MAX;

    helper(s , 0 , 0 ,"");


    }
void Solve(){


string s;
vector<string>dictionary;
cout<<minExtraChar(s,dictionary)<<endl;;
}
int main()
{
TEST {
Solve();
}
 return 0;
}