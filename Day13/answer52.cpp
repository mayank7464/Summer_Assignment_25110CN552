# include <iostream>
using namespace std;
int main() {
    int size , even=0 , odd=0 ;
    cout<< " Enter size of array :" ; 
    cin >> size;
    cout << " Enter elements of array : ";
    int arr[100] ;
    for (int i=0 ; i<size ; i++ ){
        cin>> arr[i] ;  
    }
    for (int i=0 ; i<size ; i++ ){
        if ( arr[i]%2 == 0 ){
            even++;
        }  
        else{
            odd++;
        }
    }
    cout << " Number of even elements is array =  " << even << endl;
    cout << " Number of odd  elements is array =  " << odd << endl;

    return 0;
}