// **********************************************
// 제목 : 실습과제 3 - Call-by-value와 반환값을 이용한 값 증가
// 날짜 : 2026년 9월 24일
// 작성자 : 2600195 채민기
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)   // 리턴값관련 경고 방지

#include <stdio.h>

int add2(int value); // 함수의 선언

int main(void)
{
    int number;

    printf("정수를 입력 하시오: ");
    scanf("%d", &number);

    number = add2(number); // Call-by-value 호출 후 반환값을 받아 저장

    printf("2만큼 증가한 값: %d\n", number);

    return 0;
}

int add2(int value) // 함수의 정의
{
    return value + 2; // 2 증가한 값 반환
}
