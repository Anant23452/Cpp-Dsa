#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //You need not mention the size of the vector
v.push_back(6);
v.push_back(5);
v.push_back(4);
v.push_back(3);
v.push_back(2);
v.push_back(1);
v.push_back(0);
v.push_back(4);
int x=4;
int idx=-1;
// first method 

// for (int i = 0; i<v.size(); i++)
// {
//    if (v[i]==x) 
//    {
//     idx=i;
  
//    }
   
// }
for (int i =v.size()-1; i>0; i--)
{
    if (v[i]==x)        
    {
        idx=i;
        break;
    }
    
}

cout<<v.size()<<endl;
cout<<idx;
}