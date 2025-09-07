#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];  //dynamically allocating memory for the array
    //input array
        cout<<"Enter element ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;
        
    }
    int sum =0;
    for (int i = 0; i < n; i++)
    
       {
         sum =sum +arr[i];
       } 
        cout<<"Sum of element of array :"<<sum <<" ";
    };
    
    
