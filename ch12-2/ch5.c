// **************************************************
// 제목: 12-2장 포인터의 이해 실습과제 (문제 5)
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

    int score1 = 15;
    int score2 = 40;
    int score3 = 80;

    int* p1 = &score1;
    int* p2 = &score2;
    int* p3 = &score3;

    *p1 = *p1 + 10;
    *p2 = *p2 - 15;
    *p3 = *p3 / 2;

    int* temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

    printf("p1이 가리키는 값: %d\n", *p1);
    printf("p2가 가리키는 값: %d\n", *p2);
    printf("p3가 가리키는 값: %d\n", *p3);

    return 0;
}
