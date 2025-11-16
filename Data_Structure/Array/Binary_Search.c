#include<stdio.h>
int main(){
   
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
    int tar;
    scanf("%d",&tar);

    int st =0;
    int end= n-1;
    int mid;
    int found =0;

    while(st<=end){
         mid = st+(end-st)/2;
        if(tar >arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end = mid-1;
        }
        else{
            mid;
            found =1;
            printf(" Target = %d  %d", mid,tar);
            break;
        }
    }

    if(!found){
        printf("Not Found");
    }



}