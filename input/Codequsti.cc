#include<iostream>
using namespace std;
int main(){
    int num1;
    int p=5,q = 10;
    p+=q -=p;
    // it start from right to left because of bodmas
    cout<<p <<" "<< q;
    return 0;
}