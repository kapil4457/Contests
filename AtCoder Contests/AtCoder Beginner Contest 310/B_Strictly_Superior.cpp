#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
bool Solve(){
int n=4,m=4;
cin>>n>>m;

vector<pair<pair<int,int> , map<int,int>>>v;
// vector<pair<pair<int,int> , map<int,int>>>v;
for(int i =0 ;i < n ; i ++){
    int p ,c;
    cin>>p>>c;

    map<int,int>temp;
    int tmp;
    for(int j = 0 ; j < c ; j++){
        cin>>tmp;
        temp[tmp]++;
    }
    v.push_back({{p , c} , temp});
   

}

// map<int,int>temp;
// temp[1]++;
// v.push_back({{3,1} , temp});

// temp.clear();

// temp[2]++;
// v.push_back({{3,1} , temp});
// temp.clear();


// temp[2]++;
// v.push_back({{3,1} , temp});
// temp.clear();

// temp[2]++;
// temp[3]++;
// v.push_back({{4,2} , temp});
// temp.clear();

 


for(int i= 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j ++){
        if(i==j)continue;;

        // P(i) >= P(j)
        if(v[i].first.first >= v[j].first.first){

            // The j-th product has all functions of the i-th product.
            bool check = false;
            for(auto it : v[i].second){
                if(v[j].second.find(it.first)==v[j].second.end()){
                    check = true;
                    break;
                }
            }
            if(check){
                continue;
            }

            // if P(i) > P(j)  || size(v[j]) > size(v[i])

            if(v[i].first.first > v[j].first.first || v[j].second.size() > v[i].second.size()){
                return true;
            }
        }
    }
}

return false;
}
int main()
{
TEST {
int ans = Solve();
if(ans){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}
}
 return 0;
}