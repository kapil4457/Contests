#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main()
{
int firstB = -1;
int SecondB = -1;
int firstR = -1;
int SecondR = -1;
int Kpos = -1;

string s;
cin>>s;
int n = 8;
for(int i =0 ; i < n ; i ++){
if(s[i]=='B' && firstB==-1){
    firstB = i+1;
}else if(s[i]=='B' && firstB!=-1){
SecondB =i+1;
}else if(s[i]=='K' && Kpos==-1){
    Kpos = i+1;
}else if(s[i]=='R' && firstR == -1){
    
}
}

 return 0;
}