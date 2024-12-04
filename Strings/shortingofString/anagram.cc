#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "physicswallah";
    string t ="phywallahsics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t)cout<<true;
    else cout<<false;
    return 0;
 
}