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
    struct person X = {"ȫ�浿", 30, 'M'};
    struct person Y;
    strcpy(Y.name, "�Ӳ���"); // ����ü ����� ���� ������ ��, ���ڿ� ó���� ��쿡�� ���ڿ������Լ� strcpy() �� ����Ѵ�.
    Y.age = 35;
    Y.sex = 'F';
    printf("X�� ����: %s, %d, %c\n", X.name, X.age, X.sex);
    printf("Y�� ����: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}