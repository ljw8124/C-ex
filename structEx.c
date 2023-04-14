//
// Created by asoosoft10 on 2023-04-14.
//

#include <stdio.h>
#include <string.h>
struct person {
    char name[8];
    int age;
    char sex;
};
void main() {
    struct person X = {"홍길동", 30, 'M'};
    struct person Y;
    strcpy(Y.name, "임꺽정"); // 구조체 멤버에 값을 대입할 때, 문자열 처리의 경우에는 문자열복사함수 strcpy() 를 사용한다.
    Y.age = 35;
    Y.sex = 'F';
    printf("X의 정보: %s, %d, %c\n", X.name, X.age, X.sex);
    printf("Y의 정보: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}