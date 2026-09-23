// **********************************************
// 제목 : 실습과제 4 - 세 정수의 값을 교환하는 swap 함수
// 날짜 : 2026년 9월 24일
// 작성자 : 2600195 채민기
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)   // 리턴값관련 경고 방지

#include <stdio.h>

void swap(int* px, int* py, int* pz); // 함수의 선언 (포인터 매개변수: int*)

int main(void)
{
    int x, y, z;

    printf("정수x를 입력 하시오: ");
    scanf("%d", &x);
    printf("정수y를 입력 하시오: ");
    scanf("%d", &y);
    printf("정수z를 입력 하시오: ");
    scanf("%d", &z);

    printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);

    swap(&x, &y, &z); // 주소 전달

    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}

void swap(int* px, int* py, int* pz) // 함수의 정의
{
    int tmp = *px; // tmp에 x의 값 보관
    *px = *py;     // x에 y의 값 저장
    *py = *pz;     // y에 z의 값 저장
    *pz = tmp;     // z에 tmp 저장
}
