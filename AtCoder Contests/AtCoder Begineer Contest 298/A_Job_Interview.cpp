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

bool good = false;
bool poor = false;


for(int i =0 ; i < n ; i ++){
    if(s[i]=='o')good=true;
    if(s[i]=='x')poor=true;
}

if(poor){
    cout<<"No"<<endl;
}else if(good){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

 return 0;
}