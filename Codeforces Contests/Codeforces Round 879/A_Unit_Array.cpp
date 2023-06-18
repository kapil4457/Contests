#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
// #define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
int n=5;
cin>>n;
vector<int>v(n);
// vector<int>v={-1,-1,-1,1,1};

int sum = 0;
int mul = 1;
int negatives = 0;
// int mul = -1;
// int sum = -2;
// int negatives = 3;
for(int i =0 ; i < n ; i ++){
    cin>>v[i];
    sum+=v[i];
    mul*=v[i];
    if(v[i] == -1){
        negatives++;
    }
}


int positives = n - negatives;
if(negatives%2==0 && negatives <= positives){
    cout<<0<<endl;
    return;
}

int ans =0 ;


// we satisfied the sum problem
if(negatives > positives){


    while(negatives > positives && negatives ){
        negatives--;

        positives++;
        ans++;
    }
}

//  we satisfied the negative problem
// number of negatives is even

if(negatives%2 !=0){
    positives--;
    negatives++;
    ans++;
}




cout<<ans<<endl;




// Main goals : 
// no.of negatives is positive
//  number of positives is atleast 1 greater than the negatives

}
int main()
{
TEST {
Solve();
}
 return 0;
}