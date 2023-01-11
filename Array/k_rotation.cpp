#include <iostream>
using namespace std;
void rev(int arr[], int start, int end ){
    //start = 3, end =5;
    //i = 0; i<=1
    int temp,index1,index2;
    for(int i = 0; i < (end-start+1)/2 ; i++){
        index1 = start + i ;
        index2 = end - i - 1 ;
        temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        
        int size,k;
        cin >> size >> k;
        k=k%size;
        int arr[size];
        
        for(int i = 0; i < size; i++)cin>>arr[i];
        rev(arr,0,size-k);
        rev(arr,size-k,size);
        rev(arr,0,size);
        for(int i = 0; i < size; i++)cout<<arr[i]<<" ";
        cout << "\n";
    }
    return 0;
}