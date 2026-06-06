# include <iostream>
using namespace std;
int main()
{
    int n,bit,c=0;
    cout<<"Enter a decimal number:";
    cin>>n;
    while(n!=0){
        bit=n & 1;
        n=n>>1;
        if (bit==1){
            c++;
        }

}
  cout<<"There are "<<c<<" set bits in given number";
    return 0;
}