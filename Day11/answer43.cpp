# include <iostream>
using namespace std;
bool prime (int a){
    if (a<=1){
        return false;
    }
    for(int i=2;i<=a/2;i++){
      if(a%i==0){
        return false;
      }
      return true;
    }
}
int main(){
    int a;
    cout<<"enter number to check :";
    cin>>a;
     if (prime(a)){
        cout<<"Given number is a prime number";
     }
     else{
        cout<<"Given number is not a prime number";
     }
    return 0;
}