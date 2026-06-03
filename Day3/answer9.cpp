# include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"enter number to check :";
    cin>>n;
    for(i=2;i<n;i++){
        if (n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"given number is a prime number ";
    }
    else {
        cout<<"given number is not a prime number";
    }
    return 0;
}