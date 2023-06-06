#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
// #define TEST int t=1;while(t--)
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;

// 4 3 12
// 12 12 10 15
void Solve(){
int n=4,k=3,q=12;
cin>>n>>k>>q;
// vector<int>temp={12,12,10,15};
vector<int>temp(n);

for(int i =0 ; i < n  ; i ++){
    cin>>temp[i];
}


long long ans =0 ;

int i =0 ;

while(i < n){
    
    int continuousDays = 0;
    if(temp[i] <= q){

        while(i < n && temp[i] <= q){
            i++;
           continuousDays++;
        }
// This means he can go to vacation
            if(continuousDays >= k){

                    for(int j = k ; j <= continuousDays ; j ++ ){
                        // Number of possible ways with tahat many days slotting
                        ans+= (continuousDays-j+1);
                    }
            }





    }else{
        i++;
    }
}

cout<<ans<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}