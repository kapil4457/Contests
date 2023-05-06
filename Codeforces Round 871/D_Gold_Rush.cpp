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
    int n=1,m=1;
    cin>>n>>m;
    if(n==m){
    cout<<"YES"<<endl;
    continue;
}
    queue<int>ref;
if(n%3!=0 || n < m){
    cout<<"NO"<<endl;
    continue;
}

ref.push(n);
bool check = false;
    while(!ref.empty()){
        int top = ref.front();
        ref.pop();
        int num1 = top/3;
        int num2 = (top/3)*2;

        if(num1==0 && num2==0)break;

        if(num1==m || num2==m){
            check = true;
            break;
        }
        if(num1 > m && num1%3==0){
            ref.push(num1);
        }
        if(num2 > m && num2%3==0){
            ref.push(num2);
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

 return 0;
}