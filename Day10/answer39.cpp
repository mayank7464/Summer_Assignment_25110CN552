# include <iostream>
using namespace std;
int main()
{ 
    int n=5;
    for (int i=1;i<=n;i++){
        int a=1;
        for (int j=1;j<=n;j++){
            if (i+j<6){
                cout<<" ";
            }
            else   {
                cout<<a;
                a=a+1;
            }
        }
        for (int m=i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}