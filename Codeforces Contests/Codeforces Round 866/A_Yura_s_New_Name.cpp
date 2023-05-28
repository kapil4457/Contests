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

int t=1;
cin>>t;

while(t--){
    string s="^______^";
    cin>>s;


    int n = s.length();
    int cnt =0 ;

    for(int i = 1 ; i <n ; i++){
        if(s[i-1]=='_' && s[i]=='_'){
            cnt++;
        }


    }
    if(s[0]=='_')cnt++;
    if(s[n-1]=='_')cnt++;
    if(n==1  && s[0]=='^')cnt++;

    cout<<cnt<<endl;
}
 return 0;
}