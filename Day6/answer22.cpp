# include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,bit,i=0;
    float ans=0;
    cout<<"enter decimal number : ";
    cin>>n;
    while(n!=0){
        bit=n&1;
        n=n>>1;
        ans=ans + bit*(pow(10,i));
        i++;
    }
    cout<<"numner in binary is :"<<ans;
    return 0;
}