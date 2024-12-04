#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    char str[n];
    cout<<"Enter "<<n<<" strings: ";
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < n; i++){
        cout<<str[i]<<" ";
    }
    int k =0;
    int count = 0;
    while (str[k] !='\0')
    {
      if (str[k] == 'a' || str[k] == 'e' || str[k]=='i' || str[k]=='o' || str[k]=='u')
      {
        count++;
        k++;
      }
    }
      cout<<"Number of vovel :"<<count<<endl;
    
    
}