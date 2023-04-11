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

// 값에 의한 자료전달 방법구현 함수
// 함수 내에서는 바뀌지만, 실제 값은 변화하지 않는다 -> 실 매개변수 값의 전달은 영향이 없다.
void swap1(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("inFunc x = %d, y = %d\n", x, y);
}

// 참조에 의한 자료전달 방법구현 함수 -> 호출 함수의 표현방법이 달라진다. & 와 * 를 각각 추가됨
// 실 매개변수에 & 가 붙으면, 주소값을 전달하고, 형식 매개변수에 * 가 붙으면 해당 주소를 다룰 수 있다 => 포인터와 비슷
void swap2(int *x, int *y) {    // *변수는 포인터변수
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

// * 전역변수는 가급적 프로그램 선두에 위치하는 것이 좋고, 초기화 하지 않으면 0으로 자동 초기화 한다.