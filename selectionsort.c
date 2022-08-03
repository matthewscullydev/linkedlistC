#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int array[30];
int size_a = sizeof(array) / sizeof(array[0]);



int main (){
    void setRand();
    void printArr();
    void selectSort();

    srand(time(NULL));



    setRand();
    printArr();

    printf("\n");

    selectSort();
    printArr();
    return 0;
}

void setRand(){

    for(int i = 0; i < size_a; i++){

        array[i] = rand() % 50;

    }

}

void printArr(){

    for(int i = 0; i < size_a; i++){

        printf("%d\n", array[i]);

    }

}

void selectSort(){

    void swap(int *ptr1, int *ptr2);
    int indexMin;

    for(int i = 0; i < size_a; i++){
        
         indexMin = i;

         for (int j = i+1; j < size_a; j++){     

            if (array[j] < array[indexMin]){
                
                indexMin = j;
                
            }
        }

        if(indexMin != i){

        int temp = array[indexMin];
         array[indexMin] = array[i];
         array[i] = temp;

        }

    }
}

void swap(int *ptr1, int *ptr2){

    float temp = *ptr2;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}