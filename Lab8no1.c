#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[]);
void addthree(int number[], int index[], int value[], int size);

int main() {
    int number[5] = {20,50,100,99,9};

    int index[3] = {0,2,4};
    int value[3] = {111,222,333};

    printf("Before Added\n");
    printAr(number);

    addthree(number, index, value, 3);

    printf("\nAfter Added\n");
    printAr(number);

    return 0;
}

void addthree(int number[], int index[], int value[], int size){
    for(int i=0 ; i<size ; i++){
        number[index[i]] += value[i];
    }
}

int findMax(int num[]){
    int maximum = num[0];
    for(int i=0;i<5;i++){
        if(num[i] > maximum)
            maximum = num[i];
    }
    return maximum;
}

void printAr(int myAr[]){
    for(int i=0;i<5;i++)
        printf("number[%d] : %d\n",i,myAr[i]);
}
