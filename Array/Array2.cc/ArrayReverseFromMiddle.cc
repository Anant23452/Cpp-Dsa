#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i <a.size()-1; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
// void reverse(vector<int>&a)
int main(){
    vector<int>v;
    cout<<"Given array:";
    v.push_back(1);
    v.push_back(19);
    v.push_back(91);
    v.push_back(17);
    v.push_back(9);
    v.push_back(23);
    display(v);
    // reverse(v);
    // int i=0;
    // int j = v.size()-1;
    // while (i<=j)
    // {
    //     //swap(v[i],v[j]);
    //     int temp = v[i];
    //     v[i] =v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
   
    for (int i=1,  j=v.size()-2; i<=j; i++,j--)
    {
         int temp = v[i];
     v[i] =v[j];
     v[j] = temp;

    }
    
    cout<<endl<<"Reversed array:";
  
    display(v);
     
}