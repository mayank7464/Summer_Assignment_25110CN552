# include <iostream>
using namespace std;
int sum(int n)
{  
    int a;
    // Base case
    if (n==0){
        return 0;
    }
    //Recursive case
      a=(n%10)+sum(n/10);
      return a;
}



int main(){
    int n,b;
    cout<<"Enter number :";
    cin>>n;
    b=sum(n);
    cout<<"Sum of digits of number is "<<b;
    return 0;

}