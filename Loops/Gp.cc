#include<iostream>
using namespace std;
int main(){
    // gp- 1,2,4,8,16
int n;
cout<<"Enter the number of terms:";
cin>>n;
int a = 1;
for(int i=1;i<=n;i++){
  cout<<a<<" ";
  a*=2; // multiplying by 2 each time
}


}