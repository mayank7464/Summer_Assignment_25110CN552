# include <iostream>
using namespace std;
 int a=0;
int reverse(int n)
{  
   // Base case
    if (n==0){
        return 0;
    }
    //Recursive case
      int digit=n%10;
      a=a*10+digit;
      reverse(n/10);
      return a;
}



int main(){
    int n,b;
    cout<<"Enter number :";
    cin>>n;
    b=reverse(n);
    cout<<"Reversed number is "<<b;
    return 0;

}