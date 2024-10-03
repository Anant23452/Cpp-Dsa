#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=n;
    cout<<"Enter the number:";
    cin>>n;
   while(n>0){
    n/=10;
    a++;
   }
   if(a==0)cout<<1;
   else  cout<<"number of digits :" <<a<<endl;

    
}