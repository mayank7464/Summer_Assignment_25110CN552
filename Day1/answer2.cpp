# include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"enter number :";
    cin>> n;
    cout<<"Multiplication table for given number "<<"\n";
    for(i=1;i<=10;i++)
    {
        a=n*i;
        cout<< n <<"*"<< i <<"="<< a <<"\n";
    }
    return 0;
}