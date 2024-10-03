#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    for(int i=1; i<b; i++){
        a*=a;
    }
    cout<<a;
}