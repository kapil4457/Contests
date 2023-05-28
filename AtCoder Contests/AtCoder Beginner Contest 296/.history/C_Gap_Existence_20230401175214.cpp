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
int n , x;
cin>>n>>x;
vector<int>v(n);

map<int,int>ref;
for(int i =0 ; i < n ; i ++){
    cin>>v[i];
    ref[v[i]]++;
}

bool check = false;
for(int i = 0 ; i < n ; i ++){
    int diff = x - v[i];
    
    if(diff == v[i]){
if(ref[v[i]] == 2){
    cout<<"Yes"<<endl;
    check = true;
    break;
}
    }else{

        if(ref.find(diff)!=ref.end()){
            cout<<"Yes"<<endl;
            check = true;
            break;
        }
    }


}

if(check==false){
    cout<<"No"<<endl;
}

 return 0;
}