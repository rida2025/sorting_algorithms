#include <stdio.h>

int ft_size(int* arr){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    } 
    return i;
}

void print(int* arr) {
	int i=0;
    while(arr[i]!= '\0') {
        printf("%d ", arr[i++]);
    }
    printf("\n");
}

void selectionsort(int* arr) {
    int size = ft_size(arr);
    int lowestvalue;
    print(arr);
    for (int i = 0; i < size; i++) {
        lowestvalue = arr[i];
        for (int j = i + 1; j < size; j++) {
            if (lowestvalue >= arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                lowestvalue = arr[i];
            }
            print(arr);
        }
    }
    print(arr);
}

int main() {
    int arry[10] = {3, 1, 4, 9, 7, 2, 8, 6, 5};
    selectionsort(arry);
    
    return 0;
}