# include<iostream>
using namespace std;
int main()
{
    int n,m,flag=0;
    cout << "enter the order of matrix : ";
    cin >> n ;
    int a[100][100];
    int b[100][100];
   cout << "enter matrix " << endl;
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
    for (int i=0 ; i<n ; i++)
     {
     for(int j=0 ; j<n ; j++)
       { 
          if (a[i][j] != b[i][j]){
             flag=1;
             break;
          }
        }
      }
      if (flag==1){
        cout << "Given matrix is not a  symmetric matrix ";
      }
      else {
        cout << "Given matrix is symmetric matrix ";
      }
    return 0;
  }