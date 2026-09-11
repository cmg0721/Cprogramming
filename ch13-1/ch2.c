// **************************************************
// 제목: 실습과제 2 (배열 표현을 포인터 표현으로 변경)
// 날짜: 2026년 9월 11일
// 작성자 : 2600195 채민기
// **************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    int sum = 0, i;
    double average;
    int grade[5];

    for (i = 0; i < 5; i++)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", grade + i);
    }

    for (i = 0; i < 5; i++)
    {
        sum += *(grade + i);
    }

    average = sum / 5.0;
    printf("성적 평균= %.0f\n", average);

    return 0;
}
