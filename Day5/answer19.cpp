# include <iostream>
using namespace std;
int main()
{
    int n,i,a=0;
    cout<<"Enter number :";
    cin>>n;
    cout<<"factors of given number is "<<endl;
    for(i=1;i<=n;i++){
        if(n%i==0)
        {
           cout<<i<<" ";
        }
    }
    return 0;

}