# include <iostream>
using namespace std;
int fact (int a){
    int f=1;
    for(int i=1;i<=a;i++){
      f=f*i;
}
    return f;
}
int main(){
    int a,b;
    cout<<"enter number :";
    cin>>a;
    b=fact(a);
    cout<<"Factorial of given number is "<<b;
    return 0;
}