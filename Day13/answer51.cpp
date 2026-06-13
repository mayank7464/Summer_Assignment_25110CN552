# include <iostream>
using namespace std;
int maximum(int arr[],int n){

int  max=arr[0];
    for(int i=0 ; i<n ; i++){
        if( max<arr[i] ){
            max=arr[i] ;
        }
    }
    return max ;
}
int minimum(int arr[],int n){
    int min=arr[0] ;
    for(int i=0 ; i<n ; i++ ){
        if( min>arr[i] ){
            min=arr[i] ;
        }
    } 
    return min;
}
int main(){
    int n;
    cout << " Enter size of array : ";
    cin>>n;
    int a[1000];
    cout << " Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int max = maximum(a,n);
    int min = minimum(a,n);
   
    cout<<" Largest element of array = "<< max << endl;
    cout<<" Smallest element of array = "<< min << endl;
    return 0;
}