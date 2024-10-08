#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
         for (int k=n-i; k>0;k--)
        {
        cout<<" ";
        }
        for (int j =1; j <=i; j++)
        {
        cout<<"*";
        }
        for (int m =1; m <=i; m++)
        {
        cout<<"*";
        }
       
        cout<<endl;
        }

    for (int i = 1; i <=n; i++)
    {
        for (int m =1; m<=i; m++)
        {
            cout<<" ";
        }
        for (int j =1; j <=n+1-i; j++)
        {
            cout<<"*";
        }
        for (int k =1; k <=n+1-i; k++)
        {
            cout<<"*";
        }
        // for (int k = n/2; k <=i; k--)
        // {
        //     cout<<"#";
        // }
        cout<<endl;
        
        
    }
    
        
    }
    
