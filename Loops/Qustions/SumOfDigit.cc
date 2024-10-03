#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int sum =0;
    while(n>0){
        int a= n%10;
        sum+=a;
        n/=10;
    }
    cout<<"sum of digits is "<<sum;
    return 0;
 
}