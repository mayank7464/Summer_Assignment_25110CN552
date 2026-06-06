# include <iostream>
using namespace std;
int main()
{

    int n,b,i=1,c=1;
    cout<<"Enter base number:";
    cin>>n;
    cout<<"Enter power to be raised:";
    cin>>b;
    while(i<=b){
        c=c*n;
        i++;
    }
    cout<<"Answer of x^n is "<<c;
    return 0;
}

    
