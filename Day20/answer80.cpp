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
    cout << "Column wise sum of given matrix " << endl;
    for (int j=0 ; j<m ; j++)
     { int sum=0;
     for(int i=0 ; i<n ; i++)
       { 
         sum += a[i][j];
       }
        cout << j+1<<"th column = " << sum << endl;
    }
    return 0;
  }