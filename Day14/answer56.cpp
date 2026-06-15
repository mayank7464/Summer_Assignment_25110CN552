# include <iostream>
using namespace std;
void  count(int arr[] , int size ){
    for (int i=0 ; i<size ; i++){
        int c=1;
          if ( arr[i] == -1){
              continue;
          }
          for (int j=i+1;j<size;j++){
              if (arr[i] == arr[j]){
                  c++;
                  arr[j]==-1;
              }
          }
          if (c>1){
            cout << arr[i] <<" ";
          }
        }
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
    cout << "Duplicate elements present in array =  " ; 
    count ( arr , n );
    return 0;
}