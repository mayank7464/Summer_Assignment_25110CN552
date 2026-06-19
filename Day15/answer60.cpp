# include <iostream>
using namespace std;
int main(){
    int n,j=0;
    int arr[1000];
    int b[1000];
    cout <<"Enter size of array : " ;
    cin >> n;
    cout << "Enter array " << endl ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    } 
     for(int i=0 ; i<n ; i++){
        if (arr[i] != 0){
            b[j]=arr[i];
            j++;
        }
    }
    for(int i=0 ; i<n ; i++){
        cout <<  b[i] << " ";
    } 
    return 0;
} 