#include<iostream>
using namespace std;
int main()
{
    int n,a,b,rev=0;
    cout<<"enter number :";
    cin>>n;
    b=n;
    for(;b>0;b=b/10){
     a=b%10;
     rev=rev*10+a;
    }
    if (n==rev){
        cout<<"given number is a palindrome number";
    }
    else{
        cout<<"given number is not a palindrome number";
    }
    return 0;
}
