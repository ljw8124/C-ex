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
//    // �� �� ������ �ȿ��� ��찡 ���� �� �����Ƿ� ������ ���α׷��� �����Ű�� �Լ��� �ʿ��ϴ�.
//
//    fclose(fp1);
//    fclose(fp2);
    FILE *fp;
    char c;
    fp = fopen("smaple1.dat", "w");         // ������� ����
    if(fp == NULL) {                        // ���ϰ��� ����üũ
        printf("������ ������ �� �����ϴ�.");   // �����޽������
        exit(1);
    }
    while((c = getchar()) != EOF) {         // ��������� ���� �Ǻ�
        putc(c, fp);                        // ���ڸ� �Ŀ��� ���
        fclose(fp);
    }

    char name[64];

    if((fp = fopen("sample2.dat", "w")) == NULL) {
        puts("������ ������ �� �����ϴ�.");
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

