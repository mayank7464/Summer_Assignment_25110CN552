# include<iostream>
# include<cmath>
using namespace std;
int main()
{ 
    int a,d,b,temp,m,i;
    cout<<"enter lower limit of range :";
    cin>>a;
    cout<<"enter upper limit of range :";
    cin>>b;
    cout<<"Armstrong numbers are "<<endl;
    for (i=a;i<=b;i++){
    int c=0,n=0;
    temp=i;
    for (;temp!=0;temp=temp/10){
        c++;
    }
    d=i;
    for(;d!=0;d=d/10){
        m=d%10;
        n=n+round(pow(m,c));
    }
    if (n==i){
        cout<<i<<" ";
    }
}

    return 0;
}