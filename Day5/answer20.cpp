# include <iostream>
using namespace std;
int prime (int n)
{
    int i,flag=0;
    for (i=2;i<n;i++)
    {
        if (n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return n;
    }
    else {
        return 0;

    }
}
int main()
{
    int n,i,a=0;
    cout<<"Enter number :";
    cin>>n;
    cout<<"factors of given number is "<<endl;
    for(i=2;i<=n;i++){
        if(n%i==0)
        {
            cout <<i<<" ";
            if(prime(i)){
                a=i;
            }
        }
    }
    cout<<endl;
    cout<<"Largest prime factor of given number is "<<a;
    return 0;

}