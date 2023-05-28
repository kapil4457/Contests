
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n=5;
    // cin>>n;
    // vector<int>boss(n);
    vector<int>boss= {};
    vector<int>spiritPower(n);
    // vector<int>spiritPower(n);
    priority_queue<int,vector<int>  , greater<int> > pq;

    for(int i =0 ; i < n ; i ++){
        cin>>boss[i];
    }
    for(int i =0 ; i < n ; i ++){
        cin>>spiritPower[i];
    }

    for(int i =0 ; i < n  ; i ++){
        int BossPower = boss[i];
        while(pq.empty()==false || pq.top() < BossPower){
            pq.pop();
        }

        pq.push(spiritPower[i]);

    }


    cout<<pq.size()<<endl;
    return 0;
}