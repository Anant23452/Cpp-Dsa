#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    cout<<"Enter string for sorting :";
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<"Sorted string : "<<s<<endl;
    return 0;
    //ascii value ke number pe short karta hiai or space ka bhi sacii vlue hota hai 
}