#include<stdio.h>
int main(){
int arr[]={2,2,23,4,45,5,6,6,7,7,7,7,7};// 13 number of array
int i;
printf("%d \n",sizeof(arr[0])); //find the size of single array
printf("%d \n",sizeof(arr));// find the size of total array
int length=sizeof(arr)/sizeof(arr[0]); ///total size of the array is 52 bytes
//single array data size is 4 bytes the size of the array is 52/4=13
for(i=0;i<length;i++){ // for loop maximum length
    printf("%d \n",arr[i]);//printing all array
}
return 0;
}
