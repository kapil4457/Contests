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
    int  num1 , num2 , num3 , num4;
    bool asc = false;
    bool ans = false;
    cin>>num1>>num2>>num3>>num4;



    if(num1 > num2){
        asc = true;
    }
    

    if(asc){
        if(num3 > num4){
            ans=true;
        }
    }else{
        if(num4>num3){
            ans=true;
        }
    }



    bool asc2 = false;
    int ans2 = false;
  if(num1 > num3){
        asc2 = true;
    }
    

    if(asc2){
        if(num2 > num4){
            ans2=true;
        }
    }else{
        if(num4>num2){
            ans2=true;
        }
    }

    if(ans && ans2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

return 0;
}