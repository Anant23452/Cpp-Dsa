#include<iostream>
using namespace std;
int main(){
    // loop ke andar loop chalao tb hot hai pattern print 
    int m;
    int n;
    cout<<"Enter the value of row: ";
    cin>>n;
    cout<<"Enter the value of column: ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=m; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
}