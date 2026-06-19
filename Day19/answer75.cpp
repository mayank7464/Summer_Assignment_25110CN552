# include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "enter the order of matrix : ";
    cin >> n ;
    int a[10][10];
    int b[10][10];
   cout << "enter first matrix " << endl;
    for (int i=0 ; i<n ; i++)
    { 
        for(int j=0 ; j<n ; j++)
        {  
        cin >> a[i][j] ;
        }
    }
    for (int i=0 ; i<n ; i++)
     {
     for(int j=0 ; j<n ; j++)
       { 
         b[i][j]=a[j][i];
       }
    }
    cout << "result matrix " << endl;
       for (int i=0 ; i<n ; i++)
       {
         for(int j=0 ; j<n ; j++)
       {
        cout << b[i][j] <<" ";
       }
        cout<<endl ;
       }

    return 0;
  }