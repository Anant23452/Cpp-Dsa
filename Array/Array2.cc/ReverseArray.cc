#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    vector<int>v2(v.size());
    for (int i = 0; i < v.size(); i++){
        //i+j =size-1;
        int j = v.size() -1-i;
        v2[i] = v[j];
    }
    cout<<endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}
