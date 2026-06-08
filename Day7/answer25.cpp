#include <iostream>
using namespace std;
int fact(int n){
    int d;
    // base case
    if (n==0){
    return 1;
}
   //Recursive case
    d=n*fact(n-1);
    return d;
}
int main(){
    int n,a;
    cout<<"Enter number :";
    cin>>n;
    a=fact(n);
    cout<<"Factorial of given number is "<<a;

    return 0;

}