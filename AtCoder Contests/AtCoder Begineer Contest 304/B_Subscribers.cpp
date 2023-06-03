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

long long n;
cin>>n;


if(n <1000){
    cout<<n<<endl;
    return;
}else if(n>=1000 && n < 10000){
// truncate the ones digit of N and print the result.
n/=10;
n*=10;

}else if(n >=10000 && n < 100000){
    //  truncate the tens digit and all digits below it of N and print the result.
    n/=100;
    n*=100;

}else if(n>=100000 && n<1000000)
{
// inclusive, truncate the hundreds digit and all digits below it of N and print the result.
   n/=1000;
    n*=1000;
}else if(n>=1000000 && n < 10000000){
    //  inclusive, truncate the thousands digit and all digits below it of N and print the result.
       n/=10000;
    n*=10000;
}
else if(n >= 10000000 && n < 100000000){
    // inclusive, truncate the ten-thousands digit and all digits below it of N and print the result.
       n/=100000;
    n*=100000;
}else if(n >= 100000000 && n < 1000000000){
    n/=1000000;
    n*=1000000;
}

cout<<n<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}