#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row N: ";
    cin>>n;
    int j,i;
   for ( i = 1; i <=n; i++)
   {
    for ( j= 1; j<=n; j++)
    {
       if (j==n/2+1 || i==n/2+1)
       {
         cout<<"*";
       }
       else  cout<<" ";
       
    }
    cout<<endl;
    
   }
   
    
}