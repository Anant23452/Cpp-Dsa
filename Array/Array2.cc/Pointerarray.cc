#include<iostream>
using namespace std;
int main(){
int arr[] ={4,5,6,7,4,};
int* ptr =arr;
// ptr++;ptr is pointed to  2nd element 
//ptr--;ptr is pointed to 1st element of array;
cout<<ptr<<endl;
// int ptr = &arr[0];// agar pahle element ka adress mtlb pure array ko de diye 
// cout<<&arr[0]<<endl; 
// both print same address because both gave same addresss 

//  agar kisi pointer ko kisi array ka adress store kara de to pointer ke pass puri power a jati hai us array ki 

for (int i = 0; i <=4; i++)
{
    cout<<ptr[i]<<" "<<endl;
}
 *ptr =8 ;//lptr[0]=8;
 for (int i = 0; i <=4; i++)
{
    cout<<ptr[i]<<" ";
}
}
// agra pointer se array ke value ko change karna hai to 
// *ptr =8; index 0 change ho jayega 
// ptr++; ptr pointing ot 2nd element
// *ptr =9;index 1 chage ho jayega 
// ptr--;  ptr os pointing to 1st element
// print element of array by pointer 

for (int i = 0; i < 5; i++)
{
    cout<<*ptr<<" ";
    ptr++;
}
