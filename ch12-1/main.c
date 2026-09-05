#define _CRT_SECURE_NO_WARNINGS // scanf 보안 오류 방지[cite: 1]
#pragma warning(disable:6031)   // 리턴값 관련 경고 방지[cite: 1]
#include <stdio.h>

// ******************************************************
// 제목: 12장 포인터의 이해 실습과제 4[cite: 1]
// 날짜: 2026년 9월 5일
// 작성자 : 202612345 채민기  <-- 여기만 본인 학번/이름으로 수정!
// ******************************************************

int main(void)
{
    // 실습과제 4 조건에 맞춘 변수 선언 및 초기화[cite: 1]
    char a = 'A';[cite: 1]
    int b = 36;[cite: 1]
    double c = 3.141592;[cite: 1]

    // 주소 연산자(&)를 사용하여 각 변수의 시작 주소 출력[cite: 1]
    // %p는 메모리 주소를 16진수로 출력하는 포인터 전용 서식 지정자입니다.[cite: 1]
    printf("char형 변수 a의 주소 : %p\n", (void*)&a);[cite: 1]
    printf("int형 변수 b의 주소 : %p\n", (void*)&b);[cite: 1]
    printf("double형 변수 c의 주소 : %p\n", (void*)&c);[cite: 1]

    return 0;
}
