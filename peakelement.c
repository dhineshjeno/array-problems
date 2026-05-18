#include <stdio.h>
int main(){
    int arr[]={1,2,8 ,5 ,3 ,7 ,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = size-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    printf("%d",low);
}