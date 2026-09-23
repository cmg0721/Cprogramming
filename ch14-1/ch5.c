// **********************************************
// 제목 : 실습과제 5 - 100배 계산 함수 (Call-by-value vs Call-by-reference)
// 날짜 : 2026년 9월 24일
// 작성자 : 2600195 채민기
// **********************************************

#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)   // 리턴값관련 경고 방지

#include <stdio.h>

int MultiplyByValue(int n);          // Call-by-value 방식
void MultiplyByReference(int* ptr);  // Call-by-reference 방식 (매개변수 자료형: int*)

int main(void)
{
    int num = 10;

    printf("원래 num 값: %d\n\n", num);

    // 1. Call-by-value 호출
    int result = MultiplyByValue(num);
    printf("[Call-by-value 호출 후]\n");
    printf("반환값: %d\n", result);
    printf("main의 num 값: %d (원래 값 유지)\n\n", num);

    // 2. Call-by-reference 호출
    MultiplyByReference(&num);
    printf("[Call-by-reference 호출 후]\n");
    printf("main의 num 값: %d (100배 변경 완료)\n", num);

    return 0;
}

int MultiplyByValue(int n)
{
    return n * 100;
}

void MultiplyByReference(int* ptr)
{
    *ptr = (*ptr) * 100;
}
