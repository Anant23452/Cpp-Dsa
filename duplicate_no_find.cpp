//Starting of time complexity 
// given a number of size n+1 consist of integer from 1 to n, one of the element is duplicate in the array. Find that duplicate number.
#include<iostream>
using namespace std;
int main(){
    cout<<"Time Complexity of the code is O(n^2) "<<endl;
    // Method -1: Brute force 
   int arr[]={1,2,3,4,5,6,7,1,};
    int n = 8; // size of the array
    for(int i =0 ;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"duplicate number is :" <<arr[i] << endl;
                return 0;
            }
        }
    }
}