#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0 || n==1)return 1;
    //recursvie case 
    return n*fact(n-1);
};
int main(){

    cout<<"Factorial of  5 is :";
    cout<<fact(5);
}