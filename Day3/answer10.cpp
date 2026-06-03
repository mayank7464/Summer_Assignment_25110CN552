# include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter lower limit of range of prime numbers :";
    cin>>a;
    cout<<"enter upper limit of range of prime numbers :";
    cin>>b;
    for (i=a;i<=b;i++){
        int count=0;
        for (j=2;j<i;j++){
            if (i%j==0){
                count+=1;
            }
        }
     if (count==0){
        cout<<i;
     }
     cout<<" ";
    }
    return 0;
}