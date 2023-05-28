#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

// void solve(){

// int n;
// cin>>n;
// vector<int>odd , even;
// int a;
// for(int i=0;i<n;i++){
//     cin>>a;
//     if(a%2==0){
//         even.push_back(a);
//     }else{
//         odd.push_back(a);
//     }
// }

// sort(even.begin() , even.end() , greater<int>());
// sort(odd.begin() ,odd.end());

// // Sum1 for even
// // Sum2 for odd
// int sum1= 0  , sum2 = 0;


// int k = even.size();
// int j = odd.size();
// int mini = min(j,k);
// int i  ;
// for( i =0 ; i < mini ; i ++ ){
// sum1+=even[i];
// sum2+=odd[i];

// if(sum2 >= sum1){
//     cout<<"NO"<<endl;
//     return;
// }
// }


// if(j==k || k > j){
//     cout<<"YES"<<endl;
//     return;
// }

// for(int q = i ; q < j ; q++){
//     sum2+=odd[q];
//     if(sum2 >= sum1){
//     cout<<"NO"<<endl;
//     return;
// }
// }

// cout<<"YES"<<endl;

// }


void solve(){
    int n;
    cin>>n;
    int sum1 = 0;
    int sum2 = 0;
int a;
    for(int i=0 ; i  < n ; i ++){
cin>>a;
if(a%2==0){
sum1+=a;
}   else{
    sum2+=a;
}
}

if(sum1 > sum2){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

 return 0;
}