#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Given strings :"<<str<<endl;
    int s= str.length();
    cout<<str.substr(s/2);
   
}