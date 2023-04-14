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

/*
#include <stdio.h>  // printf 사용위해 선언
void main() {       // 리턴 값이 없는 main 함수 선언
    printf("char 자료형 크기: %d byte\n", sizeof(char));                                     // 양수와 정수 모두 사용 가능한 8bit 자료형
    printf("signed char 자료형 크기: %d byte\n", sizeof(signed char));                       // 양수와 정수 모두 사용 가능한 8bit 자료형
    printf("unsigned char 자료형 크기: %d byte\n", sizeof(unsigned char));                   // 양수만 사용가능한 8bit 자료형
    printf("short 자료형 크기: %d byte\n", sizeof(short));                                   // 양수와 정수 모두 사용 가능한 16bit 자료형
    printf("short int 자료형 크기: %d byte\n", sizeof(short int));                           // 양수와 정수 모두 사용 가능한 16bit 자료형
    printf("signed short 자료형 크기: %d byte\n", sizeof(signed short));                     // 양수와 정수 모두 사용 가능한 16bit 자료형
    printf("signed short int 자료형 크기: %d byte\n", sizeof(signed short int));             // 양수와 정수 모두 사용 가능한 16bit 자료형
    printf("unsigned short 자료형 크기: %d byte\n", sizeof(unsigned short));                 // 양수만 사용 가능한 16bit 자료형
    printf("unsigned short int 자료형 크기: %d byte\n", sizeof(unsigned short int));         // 양수만 사용 가능한 16bit 자료형
    printf("int 자료형 크기: %d byte\n", sizeof(int));                                       // 양수와 정수 모두 사용 가능한 32bit 자료형
    printf("signed int 자료형 크기: %d byte\n", sizeof(signed int));                         // 양수와 정수 모두 사용 가능한 32bit 자료형
    printf("unsigned 자료형 크기: %d byte\n", sizeof(unsigned));                             // 양수만 사용 가능한 32bit 자료형
    printf("unsigned int 자료형 크기: %d byte\n", sizeof(unsigned int));                     // 양수만 사용 가능한 32bit 자료형
    printf("long 자료형 크기: %d byte\n", sizeof(long));                                     // 양수와 정수 모두 사용 가능한 32bit 자로형
    printf("long int 자료형 크기: %d byte\n", sizeof(long int));                             // 양수와 정수 모두 사용 가능한 32bit 자로형
    printf("signed long 자료형 크기: %d byte\n", sizeof(signed long));                       // 양수와 정수 모두 사용 가능한 32bit 자로형
    printf("signed long int 자료형 크기: %d byte\n", sizeof(signed long int));               // 양수와 정수 모두 사용 가능한 32bit 자료형(long 과 동일)
    printf("unsigned long 자료형 크기: %d byte\n", sizeof(unsigned long));                   // 양수만 사용이 가능한 32bit 자료형
    printf("unsigned long int 자료형 크기: %d byte\n", sizeof(unsigned long int));           // 양수만 사용이 가능한 32bit 자료형 (long 과 동일)
    printf("long long 자료형 크기: %d byte\n", sizeof(long long));                           // 양수와 정수 모두 사용 가능한 64bit 자료형
    printf("long long int 자료형 크기: %d byte\n", sizeof(long long int));                   // 양수와 정수 모두 사용 가능한 64bit 자료형
    printf("signed long long 자료형 크기: %d byte\n", sizeof(signed long long));             // 양수와 정수 모두 사용 가능한 64bit 자료형
    printf("signed long long int 자료형 크기: %d byte\n", sizeof(signed long long int));     // 양수와 정수 모두 사용 가능한 64bit 자료형
    printf("unsigned long long 자료형 크기: %d byte\n", sizeof(unsigned long long));         // 양수만 사용이 가능한 64bit 자료형
    printf("unsigned long long int 자료형 크기: %d byte\n", sizeof(unsigned long long int)); // 양수만 사용이 가능한 64bit 자료형
    printf("float 자료형 크기: %d byte\n", sizeof(float));                                   // 실수로 표현 가능한 32bit 자료형
    printf("double 자료형 크기: %d byte\n", sizeof(double));                                 // 실수로 표현 가능한 64bit 자료형
    printf("long double 자료형 크기: %d byte\n", sizeof(long double));                       // 실수로 표현 가능한 64bit 이상의 표현범위를 가진다.
}
 */

/*
#include <stdio.h>                                            // printf 사용을 위해 선언
#define IN "원의 반지름은 100 입니다.\n"                         // define 을 이용하여 특정 문구를 출력하는 매크로 생성
#define PI 3.1415926535                                       // define 을 이용해 PI 를 고정값으로 지정함
#define AREA(X) (PI * (X) * (X))                              // define 을 이용하여 특정 값을 연산하는 매크로 생성
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.\n" )   // define 을 이용하여 특정 문구를 출력하는 매크로 생성
void main() {                                                 // 리턴 값이 없는 main 함수 선언
    printf("%s \n", IN);                                      // 매크로 IN 을 호출. 이때 s 는 문자열을 의미함
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(100));         // 매크로 AREA 를 이용하여 값을 계산함, 이 때 10.5f 는 실수 전체 자릿수 10자리, 소수점 이하 5자리 까지라는 의미
    OUT;                                                      // 매크로 out 을 호출하여 특정 문구 출력
}
 */
/*
#include "exam2-3.h"    // 헤더파일을 통해 앞서 계속 선언했던 #include <stdio.h> 를 작성하지 않아도 됨
void main() {           // 리턴값을 가지지 않는 main 함수 선언
    int add_result, sub_result;                     // 헤더파일에서 연산한 결과를 저장하기 위해 선언 -> 하지만 예제에서는 사용하지 않음
    printf("10과 5를 더하면 %d이다.\n", ADD(10, 5));   // 헤더파일에 정의된 ADD() 를 이용하여 + 연산을 함
    printf("10에서 5를 빼면 %d이다.\n", SUB(10, 5));   // 헤더파일에 정의된 SUB() 를 이용하여 - 연산을 함
}
*/