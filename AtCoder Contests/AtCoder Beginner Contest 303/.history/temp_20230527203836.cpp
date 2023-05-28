#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;



// Give TLE

void helper1(string s , int currIdx  , int currMiss , string currStr , map<string,int >&dict  , vector<int>&ans){

    if(currIdx==s.length()){

        if(dict.find(currStr)!=dict.end()){
            ans[0] = min(ans[0] , currMiss);
        }
        return;
    }

    // take

    if(dict.find(currStr)!=dict.end()){

        
        helper1(s,currIdx , currMiss , "" , dict , ans);
    helper1(s , currIdx+1  , currMiss+1 , currStr , dict , ans);
    }else{

    currStr.push_back(s[currIdx]);
    helper1(s , currIdx+1  , currMiss , currStr , dict , ans);
currStr.pop_back();
    // not take
    helper1(s , currIdx+1  , currMiss+1 , currStr , dict , ans);
    }


}
  


 int minExtraChar1(string s, vector<string>& dictionary) {
        vector<int>ans(1);
        ans[0] = INT_MAX;


        map<string,int>ref;
for(auto it : dictionary)ref[it]++;


    helper1(s , 0 , 0 ,"" , ref ,ans);
    return ans[0];


    }



    // Secondary Way



    void helper(string s , int currIdx  , int currMiss , string currStr ,map<char,int>charMap ,  map<string,int >&dict  , vector<int>&ans){

    if(currIdx==s.length()){

        if(dict.find(currStr)!=dict.end()){
            ans[0] = min(ans[0] , currMiss);
        }
        return;
    }

    // take

    if(dict.find(currStr)!=dict.end()){

        
        // We accept the currString and start with a new One
        if(charMap.find(s[currIdx])!=charMap.end()){
        helper(s,currIdx , currMiss , "" ,charMap, dict , ans);
        }

        // We donot accept the currStr and continue with it
    helper(s , currIdx+1  , currMiss+1 , currStr , charMap,dict , ans);
    }else{


//  We add new char to the currStr
    currStr.push_back(s[currIdx]);
    helper(s , currIdx+1  , currMiss , currStr ,charMap, dict , ans);
currStr.pop_back();

    // We don not add new char to the currStr


string temp = "";
temp.push_back(s[currIdx]);
    helper(s , currIdx+1  , currMiss+=currStr.length() , temp ,charMap, dict , ans);
    }


    }


  int minExtraChar(string s, vector<string>& dictionary) {
        map<char,int>ref;
        map<string , int>ref2;
        for(auto it : dictionary){
            ref[it[0]]++;
            ref2[it]++;
        }

                vector<int>ans(1);
        ans[0] = INT_MAX;

             helper(s , 0 , 0 ,"" ,ref, ref2 ,ans);
    return ans[0];

    }

void Solve(){


string s="sayhelloworld";
cin>>s;
// vector<string>dictionary={"hello","world"};
int n ;
cin>>n;

vector<string>dictionary;
string temp;
for(int i =0 ; i < n ; i ++){
    cin>>temp;
    dictionary.push_back(temp);
}
cout<<minExtraChar(s,dictionary)<<endl;


// cout<<minExtraChar1(s,dictionary)<<endl;
}
int main()
{
TEST {
Solve();
}
 return 0;
}