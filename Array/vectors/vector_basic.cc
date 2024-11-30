#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention the size of the vector
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v[1]=1;//cant't be use 
    v.push_back(0);
    cout<<v.size()<<endl; 
    //if you want to update the vector
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}