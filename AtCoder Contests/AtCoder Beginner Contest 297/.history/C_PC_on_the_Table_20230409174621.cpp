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
int h , w;
cin>>h>>w;
vector<vector<char>>v(h,vector<char>(w));
    string s ;
    //  Taking input
for(int i =0 ; i < h ; i ++){
    cin>>s;

    for(int  j =0 ; i < w ; j ++){
        v[i][j] = s[j];
    }

}


 return 0;
}