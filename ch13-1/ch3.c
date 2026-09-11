// **************************************************
// 제목: 실습과제 3 (증감 연산자 및 포인터 연산)
// 날짜: 2026년 9월 11일
// 작성자 : 2600195 채민기
// **************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    int a[] = { 10, 20, 30 }, i, sum = 0;
    int* ptr = a;

    for (i = 0; i < 3; i++)
    {
        sum += *ptr++;
    }

    printf("sum:%d\n", sum);

    return 0;
}
