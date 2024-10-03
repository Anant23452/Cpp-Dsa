#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factorial=1;
    for (int i =1; i <=n; i++)
    {
        factorial = factorial*i;
    }
    if(n==0)cout<<1;
    else cout<<"Facorial of "<<n<<" = "<<factorial<<endl;
    
}