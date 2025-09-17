#include<iostream>
using namespace std;
void table(int n,int i=1){
    //base case 
    if(i>=10)return;

    //recursive case
    cout<<n*i<<endl;
    table(n,i+1);
   
 
}
int main(){
    cout<<"Enter the table you want to write :";
    int n;
    cin>>n;
    table(n);
}