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
    // ����ü ���� ����
    abc.a = 'A';
    abc.b = 133;
    abc.c = 1234.567;

    fit.digit = 23;         // 23�� ���� -> 2byte �� ���
    fit.big = 1234.567;     // 23�� �������� 1234.567 �� ���� -> 8byte �� ���
    fit.letter = 'b';       // 1234.5678 �� �������� 'b'�� ���� - > 1byte �� ���
}