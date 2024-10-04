#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int flip = 1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if (j%2==0)
            {
                 cout<<flip;
                 flip = 0;
            }
           else cout<<flip;
            
        }
        cout<<endl;

    }
    
}