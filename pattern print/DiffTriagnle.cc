#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    // main loop hai ye 
    for (int i = 0; i <=n; i++)
    { 
        // space ke liye 
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        // start print ke liye loop 
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}