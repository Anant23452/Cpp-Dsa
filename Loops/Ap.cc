#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    // an=a+(n-1)d;
    // d=2
    // an =1+2*(n-1)
    // an=2n-1;
    for (int i = 1; i <=2*n-1; i+=2)
    {
      cout<<i<<endl;
    }
    

// 100 97 94 ...
for( int a=100; a>0;a-=3){
    cout<<a<<endl;
}


}