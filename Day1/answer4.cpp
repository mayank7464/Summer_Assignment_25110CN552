# include <iostream>
using namespace std;
int main()
{
    int n,b,i=0;
    cout<<"enter number :";
    cin>>n;
    while (n>0){
        b=n%10;
        i++;
        n=n/10;
    }
    cout<<"no of digits in given number is "<< i;
    return 0;
}