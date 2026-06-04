# include<iostream>
# include<cmath>
using namespace std;
int main()
{ 
    int n,a,d,b=0,c=0,temp;
    cout<<"enter number to check:";
    cin>>n;
    temp=n;

    for (;temp!=0;temp=temp/10){
        c+=1;
    }
    cout<<c<<endl;
    d=n;
    for(;d!=0;d=d/10){
        a=d%10;
        b=b+round(pow(a,c));
    }
    cout<<b<<endl;
    if (b==n){
        cout<<"Given number is a armstrong number";
    }
    else {
        cout<<"Given number is not a armstrong number";
    }

    return 0;
}