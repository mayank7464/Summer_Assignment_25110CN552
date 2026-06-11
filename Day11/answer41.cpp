# include <iostream>
using namespace std;
int sum( int a,int b){
    int s=0;
    s=a+b;
    return s;
}
int main(){
    int a,b,c;
    cout<<"enter two numbers :"<<endl;
    cin>>a>>b;
    c=sum(a,b);
    cout<<"Sum of given numbers is "<<c;
    return 0;
}