# include<iostream>
using namespace std;
int main()
{
    int n , sum=0 ;
    cout << "enter the order of matrix : ";
    cin >> n ;
    int a[10][10];
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
        if (i==j) 
         sum += a[i][j];
       }
    }
    cout << "Diagonal sum of matrix = " << sum << endl;
      
    return 0;
  }