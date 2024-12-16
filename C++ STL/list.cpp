#include<bits/stdc++.h>
using namespace std;

void P_queue(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.emplace(30);
    cout<<pq.top()<<endl;

    priority_queue<int ,vector<int>,greater<int>>p;
    p.push(10);
    p.push(2);
    p.push(20);
    cout<<p.top();
}

int main(){
    P_queue();
    return 0;
}
//push,pop - log(n)
//


