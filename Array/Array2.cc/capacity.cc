#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention the size of the vector
    v.push_back(6);//1 1 
    v.push_back(1);//2,2
    v.push_back(9);//2,4
    v.push_back(0);//3,4
    v.push_back(6);//4,4,
    v.push_back(1);//5,8
    v.push_back(9);//6,8
    v.push_back(0);//7,8
    v.push_back(6);//8,8
    v.push_back(1);//9/16
    v.push_back(9);
    v.push_back(0);
    cout<<"size of array is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
     cout<<"size of array is "<<v.size()<<endl;
    cout<<"capacity of vector is "<<v.capacity()<<endl; 
   
    
  
   
} 