// **********************************************
// 제목 : 실습과제 2 - 주소에 의한 호출을 이용한 값 증가
// 날짜 : 2026년 9월 24일
// 작성자 : 2600195 채민기
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)   // 리턴값관련 경고 방지

#include <stdio.h>

void add2(int* ptr); // 함수의 선언 (매개변수 자료형: int*)

int main(void)
{
    int number;

    printf("정수를 입력 하시오: ");
    scanf("%d", &number);

    add2(&number); // 주소 전달 (Call-by-pointer)

    printf("2만큼 증가한 값: %d\n", number);

    return 0;
}

void add2(int* ptr) // 함수의 정의
{
    *ptr += 2; // 간접 참조를 통해 main의 number 값 변경
}
