#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

void helper( vector<vector<map<string,int>>>&v , string s , int currIdx , int currMiss , string currStr , map<string,int>&dict,vector<int>&ans){
if(currIdx==s.length()){

    if(dict.find(currStr)==dict.end()){
        currMiss+=currStr.length();
    }
        ans[0] = min(ans[0] , currMiss);
    return;
}



// This means that we have already done this path , thus no need to visit again
if(v[currIdx][currMiss].find(currStr)!=v[currIdx][currMiss].end()){
return;
}else{
v[currIdx][currMiss][currStr]++;

    // If the currStr matches any of the dictionary string

    if(dict.find(currStr)!=dict.end()){
        // Accept this string as it is
        string temp = "";
        temp.push_back(s[currIdx]);
        helper(v , s , currIdx+1  , currMiss , temp , dict , ans );
    }
    // If the currStr does not matches any of the dictionary string
    else{
    
    // We don not add new char to the currStr
      string temp = "";
        temp.push_back(s[currIdx]);
        helper(v , s , currIdx+1  , currMiss+currStr.length() , temp , dict , ans );
    
    }

        // Add the new element to it
       helper(v , s , currIdx+1  , currMiss , currStr+s[currIdx] , dict , ans );
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
        map<string ,int>ref;

        for(auto it : dictionary){
            ref[it]++;
        }
                helper(v , s , currIdx , currMiss , currStr , ref,ans);
                return ans[0];
    }
void Solve(){

string s;
cin>>s;
int n;
cin>>s;
vector<string>v(n);
for(int i =0 ; i < n ; i ++){
    cin>v[i];
}
}
int main()
{
TEST {
Solve();
}
 return 0;
}