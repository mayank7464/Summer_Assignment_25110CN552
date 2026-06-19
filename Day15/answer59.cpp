# include <iostream>
using namespace std;
int main(){
    int n,m;
    int arr[1000];
    cout <<"Enter size of array : " ;
    cin >> n;
    cout << "Enter array " << endl ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    } 
    cout << "Enter number of position to rotate right : ";
    cin >>  m ;
    for(int i=1 ; i<=m ;i++){
    int start = n-2 ;
    int end = n-1 ;
    while(end>0){
       swap(arr[start],arr[end]);
       start--;
       end--;
    }
}
    cout << "Result Array" << endl ;
    for(int i=0 ; i<n ; i++){
        cout <<  arr[i] << " ";
    } 
    return 0;
} 