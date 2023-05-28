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

int n , m;
cin>>n>>m;

int lo = 1  , hi = n;

while(lo <= hi){
    int mul = lo*hi;
    if(mul < m){
        lo++;
    }else if(mul > m){
        hi--;
    }
}
 return 0;
}