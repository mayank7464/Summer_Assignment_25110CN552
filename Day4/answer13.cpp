
# include<iostream>
using namespace std;
int main()
{ 
    int a=0,b=1,n,i,c;
    cout<<"enter no of terms :";
    cin>>n;
    cout<<"fibonacci series"<<endl;
    for(i=1;i<=n;i++){
        cout<<a;
        cout<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}