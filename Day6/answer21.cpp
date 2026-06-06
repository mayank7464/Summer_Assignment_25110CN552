# include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,ans=0,i=0;
    cout<<"enter binary number : ";
    cin>>n;
    for(;n!=0;n/=10){
        a=n%10;
        ans=ans+a*(pow(2,i));
        i++;
     }
     cout<<"Number in decimal is : "<<ans;
    return 0;
}