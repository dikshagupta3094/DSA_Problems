#include<bits/stdc++.h>
using namespace std;
//Pairs
void explainPairs(){
    pair<int , int>p = {1,3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>p1 = {1,{2,3}};

    cout<<p.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
}
//Vectors

void explainVectors(){
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);//It is faster than push back

    vector<pair<int,int>>vec = {{1,2},{3,4}};

    vec.push_back({4,5});
    vec.emplace_back(6,7);

    vector<int>v1(5,100);
    vector<int>v2(v1);
}
// Accessing the vector

void explainTravVector(){
    vector<int>v;
    vector<int>::iterator it = v.begin();//v.begin will display the address that mean it will have address but by doing *it we can access the value at that position
       it++;
       cout<<*it;

       for(vector<int>::iterator it = v.begin(); it!= v.end();it++){
            cout<<*it;
       }
       //Instead of using (vector<int>::iterator it) this syntax we can use auto 

      for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
      }
       //for each

       for(auto it:v){
        cout<<it<<" ";
       }
}

int main(){

  explainPairs();

    return 0;
}