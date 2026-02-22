#include <stdio.h>

int calculate_score(char student_ans[]) {
    char answer_key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int points = 0;
    
    for(int x = 0; x < 10; x++) {
        if(answer_key[x] == student_ans[x]) {
            points += 1;
        }
    }
    return points;
}

int check_first_q(char student_data[][10]) {
    char answer_key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int student_count = 0;
    
    for(int r = 0; r < 8; r++) {
        if(answer_key[0] == student_data[r][0]) {
            student_count += 1;
        }
    }
    return student_count;
}

int main() {
    char exam_results[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    for(int index = 0; index < 8; index++) {
        printf("student %d -> %d\n", index, calculate_score(exam_results[index]));
    }
    
    printf("std_ansNO.1 -> %d\n", check_first_q(exam_results));
    
    return 0;
}
