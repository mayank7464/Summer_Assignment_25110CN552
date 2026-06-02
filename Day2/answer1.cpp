#include<iostream>
using namespace std;
int main()
{
    int n,a,sum=0;
    cout<<"enter number :";
    cin>>n;
    for(;n>0;n=n/10){
        a=n%10;
        sum+=a;
    }
    cout<<"sumof digits of given number is "<<sum;
    return 0;
}