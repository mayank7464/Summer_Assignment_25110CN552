# include <iostream>
using namespace std;
int main()
{ 
    int n=5;
    for (int i=1;i<=n;i++){
        char a='A';
        for (int j=1;j<=n;j++){
            if (i+j<6){
                cout<<" ";
            }
            else   {
                cout<<a;
                a=a+1;
            }
        }
         
        for (int m=i-2;m>=0;m--){
            cout<<char('A'+m);
        }
        cout<<endl;
    }
    return 0;
}