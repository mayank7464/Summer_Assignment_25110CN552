# include <iostream>
# include<cmath>
using namespace std;
bool isPerfect(int n){
    int sum=0;
    if (n==0){
        return 0;
    }
   for (int i=1;i<n;i++){
    if (n%i == 0){
        sum += i;
    }
   }
   if (sum == n){
    return 1;
   }
   return 0;
}
int main(){
    int  n;
    cout<<"Enter number to check : ";
    cin>> n;
    if (isPerfect(n)){
        cout<<"Given number is perfect number";
    }
    else{
        cout<<"Given number is not perfect number";
    }
    return 0;
}