#include<iostream>
using namespace std;
int main(){
    int a=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 1; i<=10; i++)
    {
        cout<<i*n<<" ";
        cout<<a*n<<" ";
        a++;
    }
    
}