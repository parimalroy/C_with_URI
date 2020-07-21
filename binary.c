#include<stdio.h>
int main(){
    int arr[]={10,20,25,27,30,35,50,60,65,70};
     int x;
     scanf("%d",&x);
        int left,right,mid;
        left = 0;
        right = 9;

        while(left<=right){
            mid = (left + right)/2;
            if(arr[mid] == x){
                printf("Item is Found in index: %d\n",mid);
            }
            if(arr[mid] < x){
                left = mid+1;
            }
            else{
                right = mid-1;
            }

        }
        printf("Item is not Found");


    return 0;
}
