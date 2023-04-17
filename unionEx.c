//
// Created by asoosoft10 on 2023-04-17.
//
union var {
    char a;
    int b;
    float c;
};

union var abc;

union hold {
    short int digit;
    double big;
    char letter;
};

union hold fit;

void main() {
    // 구조체 변수 참조
    abc.a = 'A';
    abc.b = 133;
    abc.c = 1234.567;

    fit.digit = 23;         // 23이 저장 -> 2byte 만 사용
    fit.big = 1234.567;     // 23이 지워지고 1234.567 이 저장 -> 8byte 만 사용
    fit.letter = 'b';       // 1234.5678 이 지워지고 'b'가 저장 - > 1byte 만 사용
}