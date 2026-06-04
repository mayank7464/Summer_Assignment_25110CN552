
# include<iostream>
using namespace std;
int main()
{ 
    int a=0,b=1,n,i,c;
    cout<<"enter position of terms :";
    cin>>n;
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"The"<< n<<"th term of fibonacci series is "<<a; 
    return 0;
}