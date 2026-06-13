# include <iostream>
using namespace std;
int main() {
    int size , avg , sum=0 ;
    cout<< " Enter size of array :" ; 
    cin >> size;
    cout << " Enter elements of array ";
    int arr[100] ;
    for (int i=0 ; i<size ; i++ ){
        cin>> arr[i] ;  
    }
    for (int i=0 ; i<size ; i++ ){
        sum += arr[i] ;  
    }
    avg = sum/size ;
    cout << " Sum of elements of array is " << sum << endl;
    cout << " Average of elements of array is " << avg << endl;

    return 0;
}