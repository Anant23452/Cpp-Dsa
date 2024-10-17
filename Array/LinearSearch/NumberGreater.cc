#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array :";
    int arr[n];
    cout<<"Enter the elements :";
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int x;
    cout<<"Enter the number to be greater :";
    cin>>x;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] >x) 
        {
            count++;
        }

        
    }
    cout<<"Number of elements"<<count;
    
}