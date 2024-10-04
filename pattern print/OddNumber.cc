#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {   int a=1;
        for (int j = 0; j <i; j++)
        {
            cout<<a;
            a+=2;
        }
        cout<<endl;
        
    }
    
}