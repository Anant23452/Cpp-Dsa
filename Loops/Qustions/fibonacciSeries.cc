#include<iostream>
using namespace std;
int main(){
    // 1,1,2,3,5,8,13,21,34
    int n;
    cout<<"Enter the element in Fibonacci sequence: ";
    cin>>n;
    int a=1;
    int b=1;
    int c;
    for(int i=1;i<=n-2;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
}