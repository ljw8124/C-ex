#include <stdio.h>   // ����� �Լ��� ó���ϱ� ���� �������
#include <math.h>    // ���� �Լ��� ó���ϱ� ���� �������
#include <string.h>  // ���ڿ� ó���Լ��� ���� �������
#include <ctype.h>   // �������� �Ǻ��Լ��� ���� �������

int exFunc_ex03(int a, int b);  // �Լ��� ��������
// ����
void exFunc_01() {
    double x = 12.34;
    int i = -5, j = 2;
    int a, b, c;

    a = ceil(x);
    b = floor(x);
    c = pow(4, j);
    printf("abs(-5) = %d\n", abs(i));
    printf("cos(10) = %f\n", cos(10));
    printf("ceil(12.34) = %f\n", a);
    printf("floor(12.34) = %d\n", b);
    printf("pow(4, 2) = %d\n", c);  // ������ ���� ���
}

// ���ڿ�
void exFunc_ex02() {
    int i, alp = 0, no = 0, et = 0;
    char s[20];
    printf("String");
    scanf("%s", s);
    for(i = 0; i < strlen(s); i++) {   // ���ڿ� ���̸� ���ϴ� �Լ�
        if(isalpha(s[i])) {             // ������ ���θ� ���ϴ� �Լ�
            alp++;
        } else if(isdigit(s[i])) {      // ���� ���θ� ���ϴ� �Լ�
            no++;
        } else {
            et++;
        }
    }
    printf("alphabet = %d\n", alp);
    printf("number = %d\n", no);
    printf("etx = %d\n", et);
}


void main() {
//    exFunc_01();
//    exFunc_ex02();
    int ex = exFunc_ex03(1, 2);
    printf("sum = %d\n", ex);
}

// ����� �����Լ� -> ���� ������
int exFunc_ex03(int a, int b) {
    int d;
    d = a + b;
    return (d);
}