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

int n;
cin>>n;
string s;
cin>>s;


if(n==1){
    cout<<"YES"<<endl;
    return 0;
}
char first  = s[0];
char second = s[1];

for(int i=0 ; i < n ; i  ++){
    if(i%2==0  && s[i]!=first   ||  i%2!=0 && s[i]!=second){
        cout<<"NO"<<endl;
        return 0;
    }
}

cout<<"YES"<<endl;
 return 0;
}