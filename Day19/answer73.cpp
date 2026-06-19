# include<iostream>
using namespace std;
int main()
{
    int n,m,l,o;
    cout << "enter the rows and coloumns of 1st matrix : ";
    cin >> n >> m ;
   cout << "enter the rows and coloumns of 2st matrix : ";
    cin >> l >> o ;
    int a[10][10];
    int b[10][10];
   cout << "Enter first matrix " << endl;
    for (int i=0 ; i<n ; i++)
    { 
        for(int j=0 ; j<m ; j++)
        {  
        cin >> a[i][j] ;
        }
    }
    cout << "Enter second matrix " << endl;;
    for (int i=0 ; i<l ; i++)
    {
        for(int j=0 ; j<o ; j++)
       {  cin >> b[i][j] ;
       } 
    }
    int c[n][m];
    for (int i=0 ; i<n ; i++)
     {
     for(int j=0 ; j<m ; j++)
       { 
         c[i][j]=a[i][j]+b[i][j];
       }
    }
    cout << " Result matrix " << endl;
       for (int i=0 ; i<n ; i++)
       {
         for(int j=0 ; j<m ; j++)
       {
        cout << c[i][j] <<" ";
       }
        cout<<endl ;
       }

    return 0;
  }