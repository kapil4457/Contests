#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;



void helper(string s , int currIdx  , int currMiss , string currStr , map<string,int >&dict  , vector<int>&ans){

    if(currIdx==s.length()){

        if(dict.find(currStr)!=dict.end()){
            ans[0] = min(ans[0] , currMiss);
        }
        return;
    }

    // take
    currStr.push_back(s[currIdx]);

    // not take


}
  


 int minExtraChar(string s, vector<string>& dictionary) {
        vector<int>ans(1);
        ans[0] = INT_MAX;

        map<string,int>ref;


    helper(s , 0 , 0 ,"" , ref ,ans);
    return ans[0];


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