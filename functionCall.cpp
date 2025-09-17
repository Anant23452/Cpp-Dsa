#include<iostream>
using namespace std;
void good(int n){
    // base case 
    if (n ==0) return;
    cout<<"good morning" <<endl;
    good(n-1);
}
int main(){
    int n;
    cout<<"Enter the number you want :";
    cin>>n;
    good(n);

    
}