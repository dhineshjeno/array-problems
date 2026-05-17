#include<stdio.h>

int firstOccurrence(int arr[], int n, int target){
    int low=0, high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            ans=mid;
            high=mid-1;   
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target){
    int low=0, high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            ans=mid;
            low=mid+1;    
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans;
}

int main(){

    int arr[]={1,2,2,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=2;

    printf("First occurrence = %d\n",
            firstOccurrence(arr,n,target));

    printf("Last occurrence = %d\n",
            lastOccurrence(arr,n,target));

    return 0;
}