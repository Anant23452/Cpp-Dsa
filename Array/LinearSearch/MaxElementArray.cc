#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={4,5,66,43,33,88};
    int max=arr[0];
    int max =INT_MIN;
    for (int i = 1; i <6; i++)
    {
        if (max<arr[i]) max=arr[i];
        {
            /* code */
        }
        
    }
    cout<<"Maximum value in the array is: "<<max<<endl;
    return 0;
    
    
}