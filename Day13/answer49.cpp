# include <iostream>
using namespace std;
int printArray(int arr[],int n){
    for (int i=0; i<n ; i++ ){
        cout << arr[i]<<" ";
    }
}
int main(){
    int n ;
    cout << "enter size of array :" ; 
    cin >> n;
    cout << " Enter elements of array ";
    int arr[100];
    for (int i=0 ; i<n ; i++ ){
        cin>> arr[i] ;  
    }
    cout << " Array = ";
    printArray( arr , n );
    return 0;
}