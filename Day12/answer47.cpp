# include <iostream>
# include<cmath>
using namespace std;
void fibonacci(int n){
    int a=0,b=1,temp;
    cout<<"Fibonacci series :"<<endl;
    for(int i=1;i<=n;i++){
        cout<< a <<" ";
        temp=a+b;
        a=b;
        b=temp;
       }
    }
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    fibonacci(n);
    
    return 0;
}