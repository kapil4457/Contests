#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007ll //998244353ll
#define mii map<int, int>
#define pii pair<int, int>
#define TEST int t;cin >>t;while(t--)
int power(int a,int b){int result =1; while(b>0){if(b%2) result*=a; a*=a;b/=2;} return result;}
using namespace std;


bool isPalindrome(string s){
    int n = s.size();
    int  i =0 , j = n-1;

    while(i < j){
        if(s[i]!=s[j])return false;

        i++;

        j--;
    }

    return true;
}



void helper(vector<string>&ans , string str , int i ,  string curr)
{

    if(i==str.length()){
        if(!isPalindrome(curr) && curr!=str){

                if(ans[0].length() < curr.length()){

                    ans[0] = curr;
                }
        }


        return;
    }


    // take
    curr.push_back(str[i]);
    helper(ans , str , i+1 , curr);
    curr.pop_back();
    // not take
        helper(ans, str , i+1 , curr);

}

void Solve(){
string s;
cin>>s;

// string curr = "";
// vector<string>ans(1);
// ans[0]="";
//  helper(ans  ,s , 0 , curr );

// // cout<<ans[0]<<endl;
// if(ans[0].length()==0){

//     cout<<-1<<endl;
// }else{

// cout<<ans[0].length()<<endl;



// }
// cout<<endl;





// Second way

string ans = s;
ans.pop_back();

if(isPalindrome(ans)){
    cout<<-1<<endl;
}else{
    cout<<ans.length()<<endl;
}

}
int main()
{
TEST {
Solve();
}
 return 0;
}