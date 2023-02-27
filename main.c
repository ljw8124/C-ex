#include <stdio.h>
#pragma warning(disable:4996)

void ex01() {
    char s[50];
    printf("문자열 입력?");
    gets(s);
    printf("gets()로 문자열 입력 = %s\n", s);
    printf("\n문자열 입력?");
    scanf("%s", s);
    // scanf() 는 공백문자를 기준으로 자료형을 나누기 때문에 공백이 있는 경우 공백 전 첫 번째 데이터만 출력한다.
    printf("scanf()로 문자열 입력= %s\n", s);
}

void ex02() {
    char s1[] = "Computer";
    char s2[] = "Science";
    puts(s1);
    puts(s2);
    printf("%s", s1);
    printf("%s", s2);
}

int main() {
//    printf("Hello, World!\n");

    ex02();

    return 0;
}




