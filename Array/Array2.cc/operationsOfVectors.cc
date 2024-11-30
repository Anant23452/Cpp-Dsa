#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention the size of the vector
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    } 
    
  
   
} 