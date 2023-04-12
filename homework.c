//
// Created by Lee-joungwoo on 2023-04-11.
//
//#include <stdio.h>          // 컴파일 되기 전에 처리(전처리)
//void main() {               // main 함수 정의 return 값은 없음
//    printf("Hello~ \n");    // Hello 문자열 출력, 그리고 줄바꿈
//}                           // main 함수 범위

/*
#include <stdio.h>                      // printf, scanf 사용위해 선언
#pragma warning(disable:4996)           // 경고 출력을 하지 않기 위해서 추가
int a, b, c;                            // main 함수 정의 전에 변수 선언
int product(int x, int y);              // product 함수를 main 이후에 작성하기 위해 선언만 해놓음
void main() {                           // main 함수 정의 return 값은 없음
    printf("Enter a number between 1 and 100: "); // 안내문구 출력을위해 printf 사용
    scanf("%d", &a);                              // 10진수 정수형을 받기 위해 %d 사용, a 변수 주소를 알려주기위해 & 사용

    printf("Enter another number between 1 and 100: "); // 다른 안내문구 출력을위해 printf 사용
    scanf("%d", &b);                                    // 10진수 정수형을 받기 위해 %d 사용, b 변수 주소를 알려주기위해 & 사용

    c = product(a, b);                                  // c 의 값을 product 함수 리턴 값으로 초기화
    printf("%d * %d = %d \n", a, b, c);                 // a, b, c 값을 순서대로 출력
}

int product(int x, int y) { // int x 와 y 를 파라미터로 받아 int 로 리턴시키는 함수 선언
    return (x * y);         // x 와 y 를 곱셈연산 한 후 리턴
}                           // product 함수 범위
 */