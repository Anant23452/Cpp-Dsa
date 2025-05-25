#include <iostream>
using namespace std;
int main(){
    cout<<"Time Complexity of the code is O(n) "<<endl;
    int arr[]={1,2,3,4,5,6,7,1};
    int n = 8; // size of the array

    int arr2[]={0,0,0,0,0,0,0,0,0}; // to store the count of each number


    for(int i =0 ;i<n;i++){
      int m =  arr2[arr[i]]++; // increment the count of the number
      cout<<m;
      
        if(arr2[arr[i]]>1){ // if the count is greater than 1, then it is a duplicate
            printf("duplicate number is : %d\n", arr[i]);
            return 0;
        }
    }
}