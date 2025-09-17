#include<iostream>
using namespace std;
void print(int i,int n){
    cout<<i<<endl;
    // base case
    if(i>>n)return;
    //recursive case
    cout<<i;
    print(i+1,n);
}
int main(){
    cout<<"Enter the number n: ";
    int n;
    cin>>n;
    print(1,n);
}