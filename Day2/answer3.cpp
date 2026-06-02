#include<iostream>
using namespace std;
int main()
{
    int n,a,pro=1;
    cout<<"enter number :";
    cin>>n;
    for(;n>0;n=n/10){
        a=n%10;
        pro*=a;
    }
    cout<<"product of digits of given number is "<<pro;
    return 0;
}