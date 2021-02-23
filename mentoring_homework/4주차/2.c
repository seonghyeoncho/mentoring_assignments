#include <stdio.h>

int main() {
    int age;
    printf("당신의 나이를 입력하세요 : ");
    scanf("%d",&age);
    printf("당신은 %d년에 태어났습니다.", 2021 - age + 1);
    return 0;
}