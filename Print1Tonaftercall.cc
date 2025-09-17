#include<iostream>
using namespace std;
void print(int n){
    //base case 
    if(n==0)return;
    //call
    print(n-1);
    //kaam karo
    cout<<n<<endl;
}
int main(){
    print(4);
}