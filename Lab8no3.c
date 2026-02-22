#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_rand_val();
void display_array(int data[], int len);
int generate_unique(int data[], int len);
int is_duplicate(int data[], int len, int target_val);

int main() {
    int size;
    int arr[100];
    
    scanf("%d", &size);
    
    size = (size > 100) ? 100 : size; 
    
    srand(time(NULL));
    
    for (int idx = 0; idx < size; idx++) {
        arr[idx] = generate_unique(arr, idx);
    }
       
    printf("\n********\n");
    display_array(arr, size);
    
    return 0;
}

void display_array(int data[], int len) {
    for (int k = 0; k < len; k++) {
        printf("%d ", data[k]);
    }
} 

int generate_unique(int data[], int len) {
    int new_val;
    do {
        new_val = get_rand_val();
    } while (is_duplicate(data, len, new_val));
    
    return new_val;
}

int is_duplicate(int data[], int len, int target_val) {
    int match = 0;
    for (int j = 0; j <= len; j += 2) {
        if (data[j] == target_val || data[j + 1] == target_val) {
            match = 1;
        }
    }
    return match;
}

int get_rand_val() {
    int val = (rand() % 100) + 1;
    printf("%d ", val);
    return val;
}
