#include <stdio.h>   // 입출력 함수를 처리하기 위한 헤더파일
#include <math.h>    // 수학 함수를 처리하기 위한 헤더파일
#include <string.h>  // 문자열 처리함수를 위한 헤더파일
#include <ctype.h>   // 문자형태 판별함수를 위한 헤더파일

// 함수의 원형선언 -> 본래 main() 보다 먼저 정의되어야 하지만, 이런식으로 원형선언을 하면 호출할 함수가 main() 뒤에 정의되어도됨
int exFunc_ex03(int a, int b);
// 숫자
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
    printf("pow(4, 2) = %d\n", c);  // 역승의 값을 출력
}

// 문자열
void exFunc_ex02() {
    int i, alp = 0, no = 0, et = 0;
    char s[20];
    printf("String");
    scanf("%s", s);
    for(i = 0; i < strlen(s); i++) {   // 문자열 길이를 구하는 함수
        if(isalpha(s[i])) {             // 영문자 여부를 구하는 함수
            alp++;
        } else if(isdigit(s[i])) {      // 숫자 여부를 구하는 함수
            no++;
        } else {
            et++;
        }
    }
    printf("alphabet = %d\n", alp);
    printf("number = %d\n", no);
    printf("etx = %d\n", et);
}


//void main() {
////    exFunc_01();
////    exFunc_ex02();
//    int ex = exFunc_ex03(1, 2);
//    printf("sum = %d\n", ex);
//}

// 사용자 정의함수 -> 합을 구해줌
int exFunc_ex03(int a, int b) {
    int d;
    d = a + b;
    return (d);
}
