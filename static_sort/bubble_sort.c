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
    
void bubblesort(int* arr) {
	int size = ft_size(arr);
    print(arr);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
				printf("%d\n",arr[j]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            print(arr);
        }
    }
    print(arr);
}

int main() {
    int arry[10] = {3, 1, 4, 9, 7, 2, 8, 6, 5};
    int size = ft_size(arry);

    bubblesort(arry);
    
    return 0;
}