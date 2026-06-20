# include<iostream>
using namespace std;
int main()
{
    int n,m,flag=0;
    cout << "enter the number of rows and coloumns of matrix : ";
    cin >> n >> m ;
    int a[100][100];
   cout << "enter  matrix " << endl;
    for (int i=0 ; i<n ; i++)
    { 
        for(int j=0 ; j<m ; j++)
        {  
        cin >> a[i][j] ;
        }
    }
    cout << "Row wise sum of given matrix " << endl;
    for (int i=0 ; i<n ; i++)
     { int sum=0;
     for(int j=0 ; j<m ; j++)
       { 
         sum += a[i][j];
       }
        cout << i+1<<"th row = " << sum << endl;
    }
    return 0;
  }