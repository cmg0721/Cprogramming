// **************************************************
// 제목: 실습과제 4 (교재 299p 문제 1 - 포인터 증감 연산)
// 날짜: 2026년 9월 11일
// 작성자 : 2600195 채민기
// **************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    double arr[5];
    double* ptr = arr;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("실수 입력 (%d/5): ", i + 1);
        scanf("%lf", ptr++);
    }

    ptr = arr;

    for (i = 0; i < 5; i++)
    {
        *ptr += 2.0;
        ptr++;
    }

    ptr = arr;

    printf("\n--- 2씩 증가된 결과 ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d] = %g\n", i, *ptr++);
    }

    return 0;
}
