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
    struct person X = {"ȫ�浿", 30, 'M'};
    struct person Y;
    strcpy(Y.name, "�Ӳ���"); // ����ü ����� ���� ������ ��, ���ڿ� ó���� ��쿡�� ���ڿ������Լ� strcpy() �� ����Ѵ�.
    Y.age = 35;
    Y.sex = 'F';
    printf("X�� ����: %s, %d, %c\n", X.name, X.age, X.sex);
    printf("Y�� ����: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}
*/

/*
// ����ü ����
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
    number1 = calc(number1); // -> ����ü ��ü�� �Ű������� �Ѱ���
    printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
    getchar();
}

struct num calc(struct num number2) { // ���� ����ü�� �����, struct num �� int �� char ���� ������ �ڷ����̴�.
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
    calc(&number1); // ����ȣ���� �̿���

    printf("x: %d, y: %d, sum: %d, mul: %d\n", number1.x, number1.y, number1.sum, number1.mul);
    getchar();
}

struct num calc(struct num *number2) {  // ����ü�����͸� �Ű������� �Ѱܹ���
    number2 -> sum = number2 -> x + number2 -> y;
    number2 -> mul = number2 -> x * number2 -> y;
}
*/