#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter teh number of row: ";
    cin >> n;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 65; j <65+i; j++)
        {
            cout<<(char)(j)<<" ";
        }
        cout<<endl;
        
    }
    
}