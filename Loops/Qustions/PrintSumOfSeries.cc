//print sum of teh series ;
// 1-2+3-4+5-6..upto 'n'.
#include<iostream>
using namespace std;
int main(){
    // (1+3+5+7+9...upto n) -(2+4+6+8+10 ..upto n)
    int n;
    int sum =0;
    cout<<"Enter the element in series: ";
    cin>>n;
    // n/2(2a +an)d 
    // int an = a+ (n-1)*d
    // int an1= 1+(n-1)*2;
    // int an2 =2+(n-1)*2;
    // int sn1= n*(2*1 +an1);
    // int sn2= n*(2*2 +an2);
    // p= sn1-sn2;

    // cout<<p;
    for (int i = 1; i <=n; i++)
    {
        if(i%2==0) sum-=i;
        else sum+=i;
    }
    cout<<sum;

    
    

}