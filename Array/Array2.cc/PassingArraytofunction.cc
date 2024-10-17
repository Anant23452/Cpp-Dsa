#include<iostream>
using namespace std;
void display(int a[],int size) //int *a bhi lekhe ge to sahe hai a[]ki jagah pe 
{
    for (int i = 0; i <=size-1; i++)
    {
        cout<<a[i]<<" ";
    };
    cout<<endl;
    return;
    
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[5] ={1,2,3,4,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
// arr ke first element ka hi adress pure  arrary ka adress hota hai 
// int * ptr = arr; correct way to represent adress 
int * ptr =&arr;