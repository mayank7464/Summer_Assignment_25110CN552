# include <iostream>
# include<cmath>
using namespace std;
int count(int n){
    int c=0;
    for( ; n!=0 ; n=n/10 ){
        c++;
    }
    return c;
}
bool isArmstrong(int n){
    int c=count(n);
    int a,num=0;
    int t = n;
    if (n == 0){
        return 1;
    }
    for(; t != 0; t=t/10 ){
        a=t%10;
        num+= round( pow(a,c) );
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
    if (isArmstrong(n)){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
    return 0;
}