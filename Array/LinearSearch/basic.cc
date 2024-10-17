#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be searched :";
    cin>>x;
    // agar bar bar ek number array me aye to kya karege 
    // check mark ka use karege 
    bool flag=true;
    for (int i = 0; i <n; i++)
    {
        if (arr[i] == x)
        {    
            flag ==true;
          
        }
      

        
    }
      if(flag==true)cout<<"element found";
        else cout<<"element not found";
        
    
    
}