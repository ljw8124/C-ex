//
// Created by asoosoft10 on 2023-04-19.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
//    char ch;
//    FILE *fp;
//    fp = fopen("sample.txt", "w");
//    for(ch = 'A'; ch <= 'Z'; ch++) {
//        fputc(ch, fp);
//    }
//    fclose(fp);
//
//    FILE *fp1, *fp2;
//    fp1 = fopen("d:\text.txt", "w");
//    fp2 =  fopen("c:\source\text.c", "r");
//    // 이 때 파일이 안열릴 경우가 있을 수 있으므로 강제로 프로그램을 종료시키는 함수가 필요하다.
//
//    fclose(fp1);
//    fclose(fp2);
    FILE *fp;
    char c;
    fp = fopen("smaple1.dat", "w");         // 쓰기모드로 개방
    if(fp == NULL) {                        // 파일개방 에러체크
        printf("파일을 개방할 수 없습니다.");   // 에러메시지출력
        exit(1);
    }
    while((c = getchar()) != EOF) {         // 문자출력의 끝을 판별
        putc(c, fp);                        // 문자를 파열로 출력
        fclose(fp);
    }

    char name[64];

    if((fp = fopen("sample2.dat", "w")) == NULL) {
        puts("파일을 개방할 수 없습니다.");
        exit(1);
    }
    gets(name);
    while(strcmp(name, "end")) {
        strcat(name, "\n");
        fputs(name,fp);
        gets(name);
    }
    fclose(fp);
}

