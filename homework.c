//
// Created by Lee-joungwoo on 2023-04-11.
//
//#include <stdio.h>          // ������ �Ǳ� ���� ó��(��ó��)
//void main() {               // main �Լ� ���� return ���� ����
//    printf("Hello~ \n");    // Hello ���ڿ� ���, �׸��� �ٹٲ�
//}                           // main �Լ� ����

/*
#include <stdio.h>                      // printf, scanf ������� ����
#pragma warning(disable:4996)           // ��� ����� ���� �ʱ� ���ؼ� �߰�
int a, b, c;                            // main �Լ� ���� ���� ���� ����
int product(int x, int y);              // product �Լ��� main ���Ŀ� �ۼ��ϱ� ���� ���� �س���
void main() {                           // main �Լ� ���� return ���� ����
    printf("Enter a number between 1 and 100: "); // �ȳ����� ��������� printf ���
    scanf("%d", &a);                              // 10���� �������� �ޱ� ���� %d ���, a ���� �ּҸ� �˷��ֱ����� & ���
    printf("Enter another number between 1 and 100: "); // �ٸ� �ȳ����� ��������� printf ���
    scanf("%d", &b);                                    // 10���� �������� �ޱ� ���� %d ���, b ���� �ּҸ� �˷��ֱ����� & ���
    c = product(a, b);                                  // c �� ���� product �Լ� ���� ������ �ʱ�ȭ
    printf("%d * %d = %d \n", a, b, c);                 // a, b, c ���� ������� ���
}
int product(int x, int y) { // int x �� y �� �Ķ���ͷ� �޾� int �� ���Ͻ�Ű�� �Լ� ����
    return (x * y);         // x �� y �� �������� �� �� ����
}                           // product �Լ� ����
 */

/*
#include <stdio.h>  // printf ������� ����
void main() {       // ���� ���� ���� main �Լ� ����
    printf("char �ڷ��� ũ��: %d byte\n", sizeof(char));                                     // ����� ���� ��� ��� ������ 8bit �ڷ���
    printf("signed char �ڷ��� ũ��: %d byte\n", sizeof(signed char));                       // ����� ���� ��� ��� ������ 8bit �ڷ���
    printf("unsigned char �ڷ��� ũ��: %d byte\n", sizeof(unsigned char));                   // ����� ��밡���� 8bit �ڷ���
    printf("short �ڷ��� ũ��: %d byte\n", sizeof(short));                                   // ����� ���� ��� ��� ������ 16bit �ڷ���
    printf("short int �ڷ��� ũ��: %d byte\n", sizeof(short int));                           // ����� ���� ��� ��� ������ 16bit �ڷ���
    printf("signed short �ڷ��� ũ��: %d byte\n", sizeof(signed short));                     // ����� ���� ��� ��� ������ 16bit �ڷ���
    printf("signed short int �ڷ��� ũ��: %d byte\n", sizeof(signed short int));             // ����� ���� ��� ��� ������ 16bit �ڷ���
    printf("unsigned short �ڷ��� ũ��: %d byte\n", sizeof(unsigned short));                 // ����� ��� ������ 16bit �ڷ���
    printf("unsigned short int �ڷ��� ũ��: %d byte\n", sizeof(unsigned short int));         // ����� ��� ������ 16bit �ڷ���
    printf("int �ڷ��� ũ��: %d byte\n", sizeof(int));                                       // ����� ���� ��� ��� ������ 32bit �ڷ���
    printf("signed int �ڷ��� ũ��: %d byte\n", sizeof(signed int));                         // ����� ���� ��� ��� ������ 32bit �ڷ���
    printf("unsigned �ڷ��� ũ��: %d byte\n", sizeof(unsigned));                             // ����� ��� ������ 32bit �ڷ���
    printf("unsigned int �ڷ��� ũ��: %d byte\n", sizeof(unsigned int));                     // ����� ��� ������ 32bit �ڷ���
    printf("long �ڷ��� ũ��: %d byte\n", sizeof(long));                                     // ����� ���� ��� ��� ������ 32bit �ڷ���
    printf("long int �ڷ��� ũ��: %d byte\n", sizeof(long int));                             // ����� ���� ��� ��� ������ 32bit �ڷ���
    printf("signed long �ڷ��� ũ��: %d byte\n", sizeof(signed long));                       // ����� ���� ��� ��� ������ 32bit �ڷ���
    printf("signed long int �ڷ��� ũ��: %d byte\n", sizeof(signed long int));               // ����� ���� ��� ��� ������ 32bit �ڷ���(long �� ����)
    printf("unsigned long �ڷ��� ũ��: %d byte\n", sizeof(unsigned long));                   // ����� ����� ������ 32bit �ڷ���
    printf("unsigned long int �ڷ��� ũ��: %d byte\n", sizeof(unsigned long int));           // ����� ����� ������ 32bit �ڷ��� (long �� ����)
    printf("long long �ڷ��� ũ��: %d byte\n", sizeof(long long));                           // ����� ���� ��� ��� ������ 64bit �ڷ���
    printf("long long int �ڷ��� ũ��: %d byte\n", sizeof(long long int));                   // ����� ���� ��� ��� ������ 64bit �ڷ���
    printf("signed long long �ڷ��� ũ��: %d byte\n", sizeof(signed long long));             // ����� ���� ��� ��� ������ 64bit �ڷ���
    printf("signed long long int �ڷ��� ũ��: %d byte\n", sizeof(signed long long int));     // ����� ���� ��� ��� ������ 64bit �ڷ���
    printf("unsigned long long �ڷ��� ũ��: %d byte\n", sizeof(unsigned long long));         // ����� ����� ������ 64bit �ڷ���
    printf("unsigned long long int �ڷ��� ũ��: %d byte\n", sizeof(unsigned long long int)); // ����� ����� ������ 64bit �ڷ���
    printf("float �ڷ��� ũ��: %d byte\n", sizeof(float));                                   // �Ǽ��� ǥ�� ������ 32bit �ڷ���
    printf("double �ڷ��� ũ��: %d byte\n", sizeof(double));                                 // �Ǽ��� ǥ�� ������ 64bit �ڷ���
    printf("long double �ڷ��� ũ��: %d byte\n", sizeof(long double));                       // �Ǽ��� ǥ�� ������ 64bit �̻��� ǥ�������� ������.
}
 */

