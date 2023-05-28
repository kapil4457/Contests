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
int h =2, w=3;
cin>>h>>w;
vector<string>v(h);

    string s ;
for(int i =0 ; i < h ; i ++){
    
    cin>>v[i];
    cout<<"string "<<i+1<<": "<<v[i]<<endl;
}

for(int i =0 ; i < h ; i ++){

    for(int  j =0 ; i < w ; j ++){
        cout<<v[i][j];
    }
    cout<<endl;

}
return 0;



for(int i =0 ; i < h ; i ++){
    for(int j =0 ; j < w-1 ; j ++){
        if(v[i][j]=='T' && v[i][j+1]=='T'){
            v[i][j] = 'P';
            v[i][j+1]='C';
        }
    }
}

for(int i=0 ; i < h ; i ++){
    for(int j =0 ; j < w ; j ++){
        cout<<v[i][j];
    }
    cout<<endl;
}

 return 0;
}