#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}

using namespace std;

long long maxStrength(vector<int>& nums) {
        priority_queue<int , vector<int> , greater<int> >pq2;

bool isFound = false;
int ans =1;
        for(auto it : nums){
            if(it < 0){
                pq2.push(it);
            }else{
                if(it!=0){

                ans*=it;
                isFound=true;
                }
            }
        }


        while(pq2.size()>=2){
            isFound = true;
            int first = pq2.top();
            pq2.pop();
            int second = pq2.top();
            pq2.pop();

            ans*=first;
            ans*=second;
        }



        if(isFound){
            return ans;
        }else{
            return 0;
        }

    }

void Solve(){
    vector<int>nums;
cout<<maxStrength(nums)<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}