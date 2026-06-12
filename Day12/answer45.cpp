# include <iostream>
# include<cmath>
using namespace std;
bool isPalindrome(int n){
    int a,num=0;
    int t = n;
    if (n == 0){
        return 1;
    }
    for(; t!=0 ; t=t/10 ){
        a= t % 10;
        num =  num * 10 + a;
    }
    if (num == n){
        return 1;
    }
    else{
    return 0;
}}
int main(){
    int n;
    cout<<"Enter number to check : ";
    cin>> n;
    if ( isPalindrome (n) ){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;
}