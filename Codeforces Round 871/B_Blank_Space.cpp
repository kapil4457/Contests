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
int T;
cin>>T;
while(T--){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int j = 0;
    int currCount =0 ;
    int ans = 0;
    while(j < n){

        if(v[j]==0){

            while(v[j]==0 && j<n){
                currCount++;
                j++;
            }
            ans = max(ans  , currCount);
            currCount=0;

        }else{
            j++;
        }
    }

    cout<<ans<<endl;
}
 return 0;
}