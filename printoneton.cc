#include<iostream>
using namespace std;
void calc(int n){
    //base case 
    if(n==0) return;
    //recursive case 
   cout<<n;
   calc(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    calc(n);
}