#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
string s;
cin>>s;
int n = s.length();
bool isOneDetected = false;

for(int i =0 ; i < n ; i ++){

if(s[i]=='1'){
    isOneDetected = true;
}
else if(s[i]=='?'){
    if(isOneDetected){
        s[i]='1';
    }else{
        s[i]='0';
    }
}

}

cout<<s<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}