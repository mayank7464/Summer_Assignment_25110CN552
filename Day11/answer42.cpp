# include <iostream>
using namespace std;
int max( int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if (b>a && b>c){ 
    return b;
   }
   else {
    return c;
   }
}
int main(){
    int a,b,c,d;
    cout<<"enter two numbers :";
    cin>>a >> b >> d;
    c=max(a,b,d);
    cout<<"Maximum  numbers is "<<c;
    return 0;
}