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

    if(dict.find(currStr)!=dict.end()){

        
        helper(s,currIdx+1 , currMiss , "" , dict , ans);
    }
    currStr.push_back(s[currIdx]);
    helper(s , currIdx+1  , currMiss , currStr , dict , ans);
currStr.pop_back();
    // not take
    helper(s , currIdx+1  , currMiss+1 , currStr , dict , ans);


}
  


 int minExtraChar(string s, vector<string>& dictionary) {
        vector<int>ans(1);
        ans[0] = INT_MAX;


        map<string,int>ref;
for(auto it : dictionary)ref[it]++;


    helper(s , 0 , 0 ,"" , ref ,ans);
    return ans[0];


    }
void Solve(){


string s="leetscode";
vector<string>dictionary={"leet","code","leetcode"};
cout<<minExtraChar(s,dictionary)<<endl;
}
int main()
{
TEST {
Solve();
}
 return 0;
}