//
// Created by asoosoft10 on 2023-04-14.
//

#include <stdio.h>
#include <string.h>
/*
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
*/

/*
// 구조체 선언
struct num calc(struct num);
struct num {
    int x;
    int y;
    int sum;
    int mul;
};

void main() {
    struct num number1;
    number1.x = 10;
    number1.y = 20;
    number1 = calc(number1); // -> 구조체 자체가 매개변수로 넘겨줌
    printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
    getchar();
}

struct num calc(struct num number2) { // 받은 구조체를 계산함, struct num 도 int 나 char 같은 일종의 자료형이다.
    number2.sum = number2.x + number2.y;
    number2.mul = number2.x * number2.y;
    return(number2);
}
 */
/*
struct num calc(struct num *);
struct num {
    int x;
    int y;
    int sum;
    int mul;
};

void main() {
    struct num number1;
    number1.x = 10;
    number1.y = 20;
    calc(&number1); // 참조호출을 이용함

    printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
    getchar();
}

struct num calc(struct num *number2) {  // 구조체포인터를 매개변수로 넘겨받음
    number2 -> sum = number2 -> x + number2 -> y;
    number2 -> mul = number2 -> x * number2 -> y;
}
*/