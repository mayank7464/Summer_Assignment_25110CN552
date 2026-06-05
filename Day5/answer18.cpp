# include <iostream>
using namespace std;
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,b,temp,a=0;
    cout<<"Enter number to check :";
    cin>>n;
    temp=n;
    for(;temp!=0;temp/=10){
        b=temp%10;
        a= a + fact(b);
    }
    if (a==n){
        cout<<"Entered number is a strong number ";
    }
    else{
        cout<<"Entered number is not a strong number";
    }
    return 0;

}