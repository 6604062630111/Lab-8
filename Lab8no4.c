#include <stdio.h>

int evaluate_exam(char student_ans[]);
void sort_top_three(int* arr_ptr);

int main() {
    int points_array[4];
    
    char exam_papers[4][10] = {
        {'A','B','A','C','C','D','E','E','A','D'}, //7
        {'D','B','A','B','C','A','E','E','A','D'}, //6
        {'C','B','A','E','D','C','E','E','A','D'}, //4
        {'A','B','D','C','C','D','E','E','A','D'}  //8
    };

    for(int index = 0; index < 4; index++) {
        points_array[index] = evaluate_exam(exam_papers[index]);
        printf("std %d => %d\n", (index + 1), points_array[index]);
    }
    
    sort_top_three(points_array);
    
    printf("\nTop 3 score : ");
    for(int k = 0; k < 3; k++) {
        printf("%d ", points_array[k]);
    }
    
    return 0;
}

int evaluate_exam(char student_ans[]) {
    char correct_ans[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int total = 0;
    
    for(int x = 0; x < 10; x++) {
        if(student_ans[x] == correct_ans[x]) {
            total++;
        }
    }
    return total;
}

void sort_top_three(int* arr_ptr) {
    int idx = 0, temp_val;
    
    while(idx < 3) {
