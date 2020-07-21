#include<stdio.h>
int main(){
    //int arr[5]={10,15,65,100,82};
    int arr[5], i,n;
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter Item \n");
    scanf("%d", &n);

    for(i = 0; i < 5; i++){
        if(arr[i] == n){
            printf("Number is found in index %d\n",i);
        }

    }


    return 0;
}

