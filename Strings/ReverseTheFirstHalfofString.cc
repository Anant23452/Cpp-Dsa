#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   //reverse first hlaft
   int len = s.length();
   reverse(s.begin()+0,s.begin()+len/2);
   cout<<s<<" ";

}