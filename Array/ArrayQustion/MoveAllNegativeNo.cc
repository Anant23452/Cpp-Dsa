// MOve all negative numbers to beginning and positive to end with constant extra space 
// array[1,-2,3,-4,-5,6,8]

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v=[1,-2,3,-4,-5,6,8];
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
}