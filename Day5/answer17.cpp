# include <iostream>
using namespace std;
int main()
{
    int n,i,a=0;
    cout<<"Enter number to check ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0)
        {
            a+=i;
        }

    }
    if (a==n){
        cout<<"Entered number is a perfect number ";
    }
    else{
        cout<<"Entered number is not a perfect number";
    }
    return 0;

}