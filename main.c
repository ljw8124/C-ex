#include <stdio.h>
#pragma warning(disable:4996)

void ex01() {
    char s[50];
    printf("문자열 입력?");
    gets(s);
    printf("gets()로 문자열 입력 = %s\n", s);
    printf("\n문자열 입력?");
    scanf("%s", s);
    // scanf() 는 공백문자를 기준으로 자료형을 나누기 때문에 공백이 있는 경우 공백 전 첫 번째 데이터만 출력한다.
    printf("scanf()로 문자열 입력= %s\n", s);
}

void ex02() {
    char s1[] = "Computer";
    char s2[] = "Science";
    puts(s1);
    puts(s2);
    printf("%s", s1);
    printf("%s", s2);
}

void ex_calc() {
    int x = 5, a, b;
    a = ++x * x--;  // x를 먼저 더해서 6 * 6 실행. 실행 이후 x - 1 를 수행하여 다음 라인에서는 x = 5
    b = x * 10;     // 50 예상
    printf("a=%d b=%d x=%d", a, b, x);
}

void ex_compare() {
    int a = 4, b, c, d;
    b = a > 2;
    printf("b=%d\n", b);    // 1(true)
    c = a < 2;
    printf("c=%d\n", c);    // 0(false)
    d = a == 4;
    printf("d=%d\n", d);    // 1(true)

    int e = 4, f = 7, g, h, i;
    g = e > 2 && f <= 7;
    printf("g=%d\n", g);    // true && true -> true, 곱은 둘다 true(1) 여야 함
    h = e < 2 || f <= 7;
    printf("h=%d\n", h);    // false || true -> true, 합은 둘 중 하나만 true 여도 true(1)
    i = !e;
    printf("i=%d\n", i);    // true 의 반대 값 false(0)
}

void ex_substitute() {
    // <<= 는 우항에 있는 값 만큼 bit 를 좌로 이동한 결과를 대입
    // >>= 는 우항에 있는 값 만큼 bit 를 우로 이동한 결과를 대입
    int a = 10, b = 3, c= 1;
    a *= (b - 1); // a = a * (b - 1)
    b /= 2 + 3;   // b = b / (2 + 3)
    c += 2;       // c = c + 2
    printf("a=%d b=%d c=%d\n", a, b, c);
}

void ex_bit() {
    //
    //
    //
    //
    //
    //
}

//int main() {
////    printf("Hello, World!\n");
//
////    ex01();
////    ex02();
////    ex_calc();
////    ex_compare();
//    ex_substitute();
//
//    return 0;
//}




