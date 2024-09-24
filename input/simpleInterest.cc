#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the value of principle rate and time ";
    cin>>p>>r>>t;
    float si =(p*r*t)/100;
    cout<<"simple interest is "<< si<<endl;
}