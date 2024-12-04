#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello World";
    cout<<str<<endl;
   
//    Taking input
string s;
cout<<"Enter the string :";
// cin >> s;
//only if the given string has no spaces
// for that we use get line 
getline(cin,s);
cout<<s;
    return 0;
 
}