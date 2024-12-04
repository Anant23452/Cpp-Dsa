#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ="anant";
    int count = 0;
    int i = 0;
    while (str[i]!='\0')
    if (str[i]=='a'||str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u')
    {
        
        count++;
        i++;
    }
    
  
    cout<<"Number of vowels in the string: "<<count;
    
}