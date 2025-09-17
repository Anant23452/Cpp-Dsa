#include<iostream>
using namespace std;
void sumation(int sum,int n){
    //base case
    if(n==0){
        cout<<sum<<endl;
    }
    //call
    sumation(sum+n,n-1);
}
int main(){
    sumation(0,5);
}