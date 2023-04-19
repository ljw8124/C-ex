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
    // 이 때 파일이 안열릴 경우가 있을 수 있으므로 강제로 프로그램을 종료시키는 함수가 필요하다.

    fclose(fp1);
    fclose(fp2);
}
