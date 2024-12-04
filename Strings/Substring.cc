#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    cout<<s.substr(2);//2 ke index ke bad sab print hoga 
    cout<<endl;
    cout<<s.substr(4);//4 k index ke bad sab print hoga ;
    cout<<endl;
    // cd ko print karke dikhao 
    cout<<s.substr(2,2);
}