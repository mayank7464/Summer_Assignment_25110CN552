#include <iostream>
using namespace std;
int fibo(int n){
    // base case
    int a;
    if (n==0){
    return 0;
}
if (n==1){
    return 1;
}
// Recursive case
    a=fibo(n-1)+fibo(n-2);
    return a;
}
int main(){
    int n,i;
    cout<<"Enter number of terms :";
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}