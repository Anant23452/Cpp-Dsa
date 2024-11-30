#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for (int i = 0; i <a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void reversePart( int i, int j, vector<int> &a){
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    vector<int> v; //you need not mention the size of the vector
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    cout<<"Size of vector: "<<v.size()<<endl;
    display(v);
    // rotation value 
    int k =2;
    // size of array 
    int n =v.size();
    if (k>n)
    {
        k-=n;
    }
    
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}