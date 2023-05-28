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
int x , k;
cin>>x>>k;





// This is for the positive numbers


if(x < k){
cout<<1<<endl;
cout<<x<<endl;
return;
}

if(x%k==0){
    cout<<2<<endl;
    cout<<x-1<<" "<<1<<endl;

}else{
    cout<<1<<endl;
    cout<<x<<endl;
}


}
int main()
{
TEST {
Solve();
}
 return 0;
}