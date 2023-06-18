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
string s1="179",s2="239";
cin>>s1>>s2;


// Made both the strings equal
if(s1.length() < s2.length()){
    int diff = s2.length() - s1.length();

    for(int i =0 ; i < diff ; i ++){
        string temp = "0";
        temp+=s1;
        s1 = temp;
    }

}else if(s2.length() < s1.length()){
        int diff = s1.length() - s2.length();

    for(int i =0 ; i < diff ; i ++){
        string temp = "0";
        temp+=s2;
        s2 = temp;
    }

}



int n = s1.length();
int breakPoint = -1;
// finding the break point
for(int i =0 ; i < n ; i ++){
    if(s1[i]!=s2[i]){
        breakPoint = i;
        break;
    }
}

 string t1 = s1;
 string t2 = s2;



// This means that both the string are equal
if(breakPoint==-1){
    cout<<0<<endl;
    return;
}


int ptr = n-1;

while(ptr != breakPoint){

    if(s1[ptr]==s2[ptr]){
        if(ptr==breakPoint)break;

            s1[ptr] = '9';
            s2[ptr] = '0';


    }else if(s1[ptr] > s2[ptr]){

            s1[ptr] = '9';
            s2[ptr] = '0';
  
    }else if(s1[ptr] < s2[ptr]){
            s1[ptr] = '9';
            s2[ptr] = '0';
       
    }



    ptr--;
}

long long ans = 0;


for(int i =0 ; i < n ; i ++){
    ans+= abs(s1[i] - s2[i]);
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