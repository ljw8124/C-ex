//
// Created by asoosoft10 on 2023-04-19.
//
#include <stdio.h>
void main() {
    char ch;
    FILE *fp;
    fp = fopen("sample.txt", "w");
    for(ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, fp);
    }
    fclose(fp);

    FILE *fp1, *fp2;
    fp1 = fopen("d:\text.txt", "w");
    fp2 =  fopen("c:\source\text.c", "r");
    // �� �� ������ �ȿ��� ��찡 ���� �� �����Ƿ� ������ ���α׷��� �����Ű�� �Լ��� �ʿ��ϴ�.

    fclose(fp1);
    fclose(fp2);
}
