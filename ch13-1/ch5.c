// **************************************************
// 제목: 실습과제 5 (교재 300p 문제 2 - 포인터 덧셈 연산 및 5가지 표현)
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
        scanf("%lf", ptr + i);
    }

    for (i = 0; i < 5; i++)
    {
        *(ptr + i) += 2.0;
    }

    printf("\n========================================\n");
    printf("  5가지 방식에 의한 배열 요소 출력\n");
    printf("========================================\n");

    printf("[1. 배열표현 (arr[i])]\n");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", arr[i]);
    }
    printf("\n\n");

    printf("[2. 배열명 주소표현 (*(arr + i))]\n");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", *(arr + i));
    }
    printf("\n\n");

    printf("[3. 포인터 배열표현 (ptr[i])]\n");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", ptr[i]);
    }
    printf("\n\n");

    printf("[4. 포인터 주소표현 (*(ptr + i))]\n");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", *(ptr + i));
    }
    printf("\n\n");

    printf("[5. 증감연산자 사용 (*ptr++)]\n");
    for (i = 0; i < 5; i++)
    {
        printf("%g ", *ptr++);
    }
    printf("\n");

    return 0;
}
