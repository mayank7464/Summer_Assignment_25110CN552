# include <iostream>
using namespace std;
int  count(int arr[] , int size , int key){
    int c=0;
    for (int i=0 ; i<size ; i++){
        if ( key == arr[i]){
            c++;
        }
    }
    return c;
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
    cout << " Enter elements to count frequency : ";
    cin >> key;
    int c = count ( arr , n , key);
    cout << " Frequency of given element is "<< c ;
    return 0;
}