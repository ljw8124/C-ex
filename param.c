#include <stdio.h>
void swap1(int x, int y);
void swap2(int *x, int *y);
void fcn1();

/*
void main() {
//    int a = 3, b = 5;
//    printf("prev a = %d, b = %d\n", a, b);
//    swap1(a, b);
//    swap2(&a, &b);
//    printf("after a = %d, b = %d\n", a, b);
    int i = 10;
    printf("\n main i = %d", i);
    fcn1();
    printf("\n main i = %d", i);
}
 */

// ���� ���� �ڷ����� ������� �Լ�
// �Լ� �������� �ٲ�����, ���� ���� ��ȭ���� �ʴ´� -> �� �Ű����� ���� ������ ������ ����.
void swap1(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("inFunc x = %d, y = %d\n", x, y);
}

// ������ ���� �ڷ����� ������� �Լ� -> ȣ�� �Լ��� ǥ������� �޶�����. & �� * �� ���� �߰���
// �� �Ű������� & �� ������, �ּҰ��� �����ϰ�, ���� �Ű������� * �� ������ �ش� �ּҸ� �ٷ� �� �ִ� => �����Ϳ� ���
void swap2(int *x, int *y) {    // *������ �����ͺ���
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("inFunc x = %d, y = %d\n", *x, *y);
}

void fcn1() {
    int i;
    i = 20;
    printf("\n fcn1 i = %d", i);
}

// * ���������� ������ ���α׷� ���ο� ��ġ�ϴ� ���� ����, �ʱ�ȭ ���� ������ 0���� �ڵ� �ʱ�ȭ �Ѵ�.