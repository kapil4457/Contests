#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
// #define TEST int t;cin >>t;while(t--)
#define TEST int t=1;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;
void Solve(){

int people=91, goldCoins=2 , silverValue=13;
// cin>>people >>goldCoins >> silverValue;
int totalCoin = goldCoins * silverValue;

vector<int>v(people);
v[0] = totalCoin;
int currSave = INT_MIN;

int r = totalCoin % silverValue;

int given;
int save ;
if(r>= ceil(1.0 * silverValue/2)){
    given = totalCoin + (silverValue - r);
    save = totalCoin - given;
}else{
    given = totalCoin - r;
    save = r;
}


int i =1;
while(i < people){

while(true){
v[i]++;
v[0]--;


// For the first person , calculate the save for the current val
r = v[0]%silverValue;
int totalSave ;
if(r >= ceil(1.0 * silverValue/2)){
    given = v[0]+ (silverValue - r);
    save = v[0] - given;
}else{
    given = v[0] - r;
    save = r;
}
totalSave = save;



// For the second person , calculate the save for the current val
r = v[i]%silverValue;
if(r >= ceil(1.0 * silverValue/2)){
    given = v[i]+ (silverValue - r);
    save = v[i] - given;
}else{
    given = v[i] - r;
    save = r;
}
totalSave+= save;

// If the totalSave is less that means the graph has started the descend and we should break
if(totalSave < currSave){
v[0]++;
v[i]--;
i++;
break;
}
// else we make currSave equal to the totalSave
else{
currSave = totalSave;
}
}
}


cout<<currSave<<endl;

}
int main()
{
TEST {
Solve();
}
 return 0;
}