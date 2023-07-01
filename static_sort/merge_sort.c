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

void merge(int *arry,int start, int mid, int end){
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    
    while(i <= mid && j <= end){
        if(arry[i] <= arry[j])
            temp[k] = arry[i],k++, i++;
        else
            temp[k] = arry[j],k++, j++;
    }
    while(i <= mid)
        temp[k] = arry[i],k++, i++;
    
    while(j <= end)
        temp[k] = arry[j],k++, j++;

    for (int i = start; i <= end; ++i)
        arry[i] = temp[i-start];
}

void merge_sort(int *arry,int start, int end){
    if(start < end){
        int mid= (start+end)/2;
        merge_sort(arry,start,mid);
        merge_sort(arry,mid+1,end);
        merge(arry, start, mid, end);
    }
    
}

int main()
{
    int arry[8] = {8, 4, 2, 5, 1, 11, 3};
    int size = ft_size(arry);
    merge_sort(arry, 0, size-1);
    print(arry);
    return 0;
}