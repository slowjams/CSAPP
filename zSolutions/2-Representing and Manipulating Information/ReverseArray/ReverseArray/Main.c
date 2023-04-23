#include <stdio.h>

void inplace_swap(int* x, int* y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    for (int first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    
    //int a = 3, b = 4;
    //inplace_swap(&a, &b);
    //printf("a is %d\nb is %d", a, b);
    int array[] = { 1, 2, 3, 4 };

    reverse_array(array, sizeof(array) / sizeof(array[0]));

   for(int loop = 0; loop < sizeof(array) / sizeof(array[0]); loop++)
       printf("%d ", array[loop]);
   
    return 0;
}


