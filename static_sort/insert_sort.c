#include <stdio.h>

int ft_size(int* arr){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    } 
    return i;
}

void print(int *arr){
    int i=0;
    while(arr[i] != '\0'){
        printf("%d ",arr[i++]);
    }
    printf("\n");
}

void insertion_sort(int *arry){
	int size = ft_size(arry);
	int temp;
    for(int j=0; j<size-1;j++){
        if(arry[j] > arry[j+1]){
            temp = arry[j+1];
            arry[j+1] = arry[j];
            arry[j] = temp;
            for(int i=j;i>0;i--){
                if(arry[i] < arry[i-1]){
                    temp = arry[i-1];
                    arry[i-1] = arry[i];
                    arry[i] = temp;
                }
            }
        }
    }
    print(arry);
}

int main()
{
    int arry[7] = {8, 4, 2, 5, 1};
    insertion_sort(arry);
    return 0;
}