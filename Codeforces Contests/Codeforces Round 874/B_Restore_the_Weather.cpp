#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin>>t; while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){

int n,k;
cin>>n>>k;


vector<int>a(n);
vector<int>b(n);

for(int i =0 ; i < n ; i ++){
    cin>>a[i];
}

for(int i =0 ; i < n ; i ++){
cin>>b[i];
}


vector<int>c = a;
// Time Complexity of this Aproach : O(n*Logn(n));



sort(c.begin(),c.end());
sort(b.begin(),b.end());


    // for each element of a find the smallest number in b which satisfirs the following condition : |ai−bi|≤k


// In this we will map all the elements which we have already used
    map<int,int>vis;

vector<int>ans(n);
for(int i =0 ; i < n ; i ++){


// Brute Force : 

    // for(int j =0 ; j < n ; j ++){

    //     if(abs(b[j]-a[i]) <= k && vis.find(j)==vis.end()){
    //         vis[j]++;
    //         ans[i] = b[j];
    //         break;

    //     }
    // }

    // Using Binary Search

    int lo = 0 , hi = n-1;
int possibleAns = INT_MAX;
int possibleIIdx = -1;
    while(lo <= hi){
        int mid = (hi+lo)/2;

        // This might be a possible answer
        bool check = vis.find(mid) == vis.end();
        if(abs(c[i] - b[mid]) <= k && check){
            possibleIIdx = mid;
            possibleAns = min(possibleAns , b[mid]);
            hi = mid-1;

        }
        else if(abs(c[i]-b[mid]) <=k && !check){
                lo = mid+1;

        }else {

if(abs(c[i]-b[mid])  > k && check){
        hi = mid-1;
        

         }
else{
lo = mid+1;
}    

        }



    }





    ans[i] = possibleAns;
    vis[possibleIIdx]++;

  
}
map<int,stack<int>>ref;


for(int i =0 ; i < n ; i ++){
    ref[c[i]].push(ans[i]);
}


for(int i =0 ; i < n ; i ++){
    int topEle = ref[a[i]].top();
ref[a[i]].pop();

    ans[i] = topEle;
}
for(auto it : ans)cout<<it<<" ";

cout<<endl;


}




int main()
{
TEST {
Solve();
}
 return 0;
}


