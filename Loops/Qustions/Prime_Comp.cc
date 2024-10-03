#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    bool flag = true;
    for (int  i = 2; i <n; i++)
    {
     if (n%i == 0)
      flag = false;
      break; 
    }
    if(n==1)cout<<n <<"Neither prime nor composite number";
   else if (flag==true)   
   {
    cout<< n <<" prime number";

   }
   else{
    cout<<n << " composite number";
   }
   
    
}