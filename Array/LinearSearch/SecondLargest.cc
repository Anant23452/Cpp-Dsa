#include<iostream>
using namespace std;
int main(){
    // step-1 find largest 
    // step -2 travele through the arrray,  if smax<arr[i] && arr'i !=max 
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array :";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int max =arr[0];
    for (int i = 1; i <n; i++)
    {
        if (max<arr[i]) 
        {
            max = arr[i];
        }
        
    }
    int smax =arr[0];
    for (int i = 0; i <n; i++)
    {
        if (arr[i]!=max && smax<arr[i])
        {
            smax = arr[i];
        }
        
    } 
    cout<<max<<endl;
    cout<<smax;
    



}