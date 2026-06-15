# include <iostream>
using namespace std;
bool search(int arr[] , int size , int key){
    for (int i=0 ; i<size ; i++){
        if ( key == arr[i]){
            return 1;
        }
    }
    return 0;
}
int main () {
    int n , key ;
    int arr [1000];
    cout<< " Enter size of array : ";
    cin >> n;
    cout << " Enter elements of array : ";
    for( int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << "Enter elements to be searched : ";
    cin >> key;
    int Found = search ( arr , n , key);
    if (Found){
        cout << " Given element is present in array " << endl;
    }
    else {
        cout << " Given element is absent from array " << endl;
    }
    return 0;
}