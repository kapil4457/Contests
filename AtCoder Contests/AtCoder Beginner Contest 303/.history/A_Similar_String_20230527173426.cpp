#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
string s1 , s2;
int n;

cin>>n;
cin>>s1>>s2;


for(int i =0 ; i < n ; i ++){
    if(s1[i]==s2[i]   ||     (s1[i]=='1' && s2[i]=='l') || (s1[i]=='0' && s2[i]=='o')  ||   (s1[i]=='l' && s2[i]=='1') || (s1[i]=='o' && s2[i]=='0')   ){
continue;
    }else{
        cout<<"No"<<endl;
        return;
    }
}

cout<<"Yes"<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}