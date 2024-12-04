#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int n =str.length();
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if (n==1)
        {
            break;
        }
        //first string increase only in right direction
        if (i==0)
        {
            if(str[i] !=str[n+1]) count++;
        }
        //last string have no any string at right 
        if (i==n-1)
        {
            if(str[i] !=str[n-1]) count++;
        }

        //middle string increase only in left and right direction
        else if (str[i] !=str[i+1] && str[i] !=str[i-1])
        {
            count++;
        }
        
        
    }
    cout<<count<<endl;
    
  
}