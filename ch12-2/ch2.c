// **************************************************
// 제목: 12-2장 포인터의 이해 실습과제 (문제 2)
// 날짜: 2026년 9월 9일
// 작성자: 2600195 채민기
// **************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    int a = -100;
    char b = 'A';
    double c = 3.14;

    int* pa = &a;
    char* pb = &b;
    double* pc = &c;

    printf("int형 변수 a의 값은 : %d\n", *pa);
    printf("char형 변수 b의 값은 : %c\n", *pb);
    printf("double형 변수 c의 값은 : %lf\n", *pc);

    return 0;
}
