#include<stdio.h>
int sorted (int arr[],int n,int i ){
    for (i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}