#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


 long long minimumCost(string s) {
        int ones =0  , zeros=0;
        int n = s.length();
        for(int i = 0 ; i < n ; i ++){

            if(s[i]=='1'){
ones++;
            }
            else{
                zeros++;
            }
        }
    }
int main()
{

cout<<minimumCost("1101001101001");
 return 0;
}