#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
int main(){

int t;
cin>>t;

while(t--){
    string str;
    cin>>str;

    int num1  = str[0]-48, num2 = str[2]-48;
   
    cout<<num1+num2<<endl;

    
}
return 0;
}