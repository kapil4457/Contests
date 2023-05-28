#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


 long long minimumCost(string s) {
        int n = s.length();
        int i =0;
       long long ans =0;
      while(i < n/2){

            char temp = s[i];

            while(s[i]==temp && i < n/2){
                i++;
            }

                if(s[i]!=temp && i <n/2){

            ans+= (i+1);
                }
      }

        for(int i = n%2==0 ? n/2 : (n/2)+1 ; i < n ; i++){

        }


        
    }
int main()
{

cout<<minimumCost("1101001101001");
 return 0;
}