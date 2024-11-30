#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int>v(5);
    // cout<<v.size()<<endl;
    // cout<<"capacity of vectore:"<<v;
    vector<int> v(5,7);//initial size =5,and value is =7

    
    //intializing vector 
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<< v[i] <<" ";
    }
    
}