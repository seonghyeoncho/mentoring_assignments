#include <stdio.h>

struct info{
    char name[10];
    double score;
    int credit;
};
void input_data( struct info *student, int count) {
    for(int i=0 ; i<count ; i++){
        char name[20];
        double score;
        int credit;
        printf("%d번 학생 : ", i + 1);
        scanf("%s %lf %d", student[i].name, &student[i].score, &student[i].credit);
        getchar();
    }
};
void scholarship(struct info *student, int count) {
    for(int i=0 ; i<count ; i++){
        if(student[i].credit>=20 && student[i].score>=4.3 ) {
            printf("%s학생 %f점 %d학점으로 장학생입니다. \n", student[i].name, student[i].score, student[i].credit);
        }
    }
}
int main() {

    struct info students[5]; 
    input_data(students, 5); 
    scholarship(students, 5);

    return 0;
}
