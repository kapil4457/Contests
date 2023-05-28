#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){
int n;
cin>>n;
vector<int>v(n);
map<int,int>even;
map<int,int>odd;

for(int i=0;i<n;i++){
    cin>>v[i];

    if(v[i]%2==0){
        even[v[i]]++;
    }else{
        odd[v[i]]++;
    }
}

//  Odd - Odd = even
// Even -Even = odd
// Odd - Even = Odd
// Even - Odd = Odd


// Case 1 : if all are even
            // It is already the answer
// Case 2 :  if all are odd
            //  It is already the answer
// Case 3 :  if some are odd and some are even
        // 3.1 :
        // Thus to make it odd parity if there are more than 1 odd element and the smallest odd number is smaller than the smallest even number

        // 3.2 : Else there is no answer


// Case 1 & Case 2 : 
if(odd.size()==0 || even.size()==0){
cout<<"YES"<<endl;
}
// Case 3 : 
else{
    // 3.1

int smallestOddNumber  , smallestEvenNumber;

for(auto it : odd){
    smallestOddNumber  = it.first;
    break;
}


for(auto it : even){
    smallestEvenNumber = it.first;
    break;
}

if(smallestOddNumber < smallestEvenNumber){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}




}




}
int main()
{
TEST {
Solve();
}
 return 0;
}