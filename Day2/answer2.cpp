#include<iostream>
using namespace std;
int main()
{
    int n,a,rev=0;
    cout<<"enter number :";
    cin>>n;
    for(;n>0;n=n/10){
     a=n%10;
     rev=rev*10+a;
    }
    cout<<"reversed number is "<<rev;
    return 0;
}
