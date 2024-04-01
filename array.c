#include <stdio.h>

void printArray (int arr[], int n) {

    for (int i = 0; i < n; i++)
    {
        printf("Nilai array ke %d adalah %d \n", i, arr[i]);
    }
}

void printPointerArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Nilai pointer array ke %d adalah %d \n", i, arr[i]);
    }
}

void main () {
    // Create an array in c 
    int myNewArray[3] = {7,9,5};

    int *myPointerArray = myNewArray; 

    printArray(myNewArray, 3);
    printPointerArray(myPointerArray, 3);
    

}
