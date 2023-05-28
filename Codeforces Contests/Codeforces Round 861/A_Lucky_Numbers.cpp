#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


char smallest(string s , int n){
    char ans = s[0];
    for(int i =1 ;  i < n ;  i ++){
ans = min(ans , s[i]);
    }
    return ans;
    
}
char biggest(string s , int n){
    char ans = s[0];
    for(int i =1 ;  i < n ;  i ++){
ans = max(ans , s[i]);
    }
    return ans;
    
}
void solve(){
    int l,r;
    cin>>l>>r;
    int ans = INT_MIN;
    int ansNum = -1;

    for(int i  = l ; i <=  r ; i ++){
        string temp = to_string(i);
        int length = temp.length();
        char small = smallest(temp , length);       
        char big = biggest(temp , length);       
        if(big-small > ans){
            ans = big-small;
            ansNum = i;
        }
    }

    cout<<ansNum<<endl;
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