# include<iostream>
using namespace std;
    int main ()
{
    int n,i,fact=1;
    cout<<"enter number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<< "factorial of given  number is "<< fact <<"\n";
    return 0; 
}