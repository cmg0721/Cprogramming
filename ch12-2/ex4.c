// **************************************************
// 제목: 12-2장 포인터의 이해 실습과제 (문제 4)
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

    int a = 100, b = 200;
    int sum;

    int* p_a = &a;
    int* p_b = &b;
    int* p_sum = &sum;

    *p_sum = *p_a + *p_b;

    printf("두정수의 합 : %d\n", *p_sum);

    return 0;
}
