#include<stdio.h>
int binarySearch(int arr,int n,int target){
    
    int st =0,end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(target==mid){
          
            return mid;
        }
        else if(target>mid){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    int c = binarySearch(arr[n],n,target);

    printf("%d  %d ",c,target);

    

}