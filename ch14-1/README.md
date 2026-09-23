# C프로그래밍 14장 실습과제 보고서

- **학번**: 2600195
- **이름**: 채민기
- **날짜**: 2026년 9월 24일

---

## 1. 실습과제 1

### [이론 문제 풀이]

1. **함수의 인자(Argument)와 매개변수(Parameter)의 차이**
   - **인자 (Argument)**: 함수를 호출하는 쪽(예: `main` 함수)에서 함수로 전달하는 실체값 또는 변수입니다.
   - **매개변수 (Parameter)**: 호출된 함수 내부에서 전달받은 인자의 값을 받아 저장하기 위해 선언되는 지역 변수입니다.

2. **함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지**
   - ① **매개변수의 메모리 할당**: 호출된 함수에 필요한 매개변수 공간이 스택(Stack) 영역에 자동으로 할당됩니다.
   - ② **매개변수의 초기화**: 할당된 매개변수에 전달받은 인자(Argument)의 값이 복사되어 초기화됩니다.

3. **값에 의한 함수 호출방식(Call-by-value)의 문제점**
   - 인자의 복사본만 매개변수에 전달되므로, 호출된 함수 내부에서 매개변수의 값을 변경하더라도 호출한 원본 지역 변수의 값에는 영향을 주지 못합니다.

4. **주소에 의한 함수 호출방식(Call-by-pointer)이 필요한 이유**
   - 호출된 함수 내부에서 함수 외부에 선언된 원본 지역 변수의 값을 직접 변경해야 하는 경우(예: `swap`, `scanf` 등)에는 반드시 포인터 자료형(`int*`, `char*` 등)을 통한 주소 전달이 필요합니다.

---

## 2. 실습과제 2 (`ch14-1.c`)

### [원인 분석 및 해결 방안]
- 기존 `add2` 함수는 Call-by-value 방식으로 호출되어 `main` 함수의 `number` 값 대신 매개변수 `value` 값만 2 증가하고 소멸했습니다.
- 이를 해결하기 위해 매개변수 자료형을 포인터 `int*`로 선언하고, `main`에서 `number`의 주소(`&number`)를 전달하도록 작성했습니다.

### [실행 결과 (Ctrl+F5 실행)]
![ch14-2 실행결과]<img width="385" height="99" alt="image" src="https://github.com/user-attachments/assets/16d10408-7a39-46fc-9e94-68c7fa5a30e4" />


---

## 3. 실습과제 3 (`ch14-2.c`)

### [설명]
- Call-by-value 방식을 유지하되, `add2` 함수 내부에서 2를 증가시킨 값을 반환(`return`)하고, `main` 함수에서 `number = add2(number);` 형태로 받아 처리하도록 작성했습니다.

### [실행 결과 (Ctrl+F5 실행)]
![ch14-3 실행결과]<img width="385" height="88" alt="image" src="https://github.com/user-attachments/assets/501ff26f-7cf0-4a85-ba8b-92c7a4a80d01" />


---

## 4. 실습과제 4 (`ch14-3.c`)

### [세 정수의 교환 순서 및 메모리 변화]
- `swap(&x, &y, &z);` 호출을 통해 각 변수의 주소(`int*`)를 전달받습니다.
- 임시 변수 `tmp`에 `x`의 값(10)을 저장한 후, `x`에는 `y`값(20), `y`에는 `z`값(30), `z`에는 `tmp`값(10)을 순서대로 대입하여 교환합니다.

### [실행 결과 (Ctrl+F5 실행)]
![ch14-4 실행결과]<img width="390" height="177" alt="image" src="https://github.com/user-attachments/assets/a4450d60-b61f-45b4-86bb-721b869c7542" />


---

## 5. 실습과제 5 (`ch14-4.c`)

### [두 방식의 차이 및 결론]
- `MultiplyByValue`: 원본 변수의 값은 유지되며 계산된 100배 값은 반환값으로만 받을 수 있습니다.
- `MultiplyByReference`: 주소값(`&num`)을 전달받아 포인터(`int* ptr`)로 직접 메모리에 접근해 `main` 내의 원본 `num` 변수 값을 100배로 변경합니다.
- **결론**: 원본 변수의 값을 직접 변경해야 하므로 **Call-by-reference (`MultiplyByReference`)** 방식이 적절합니다.

### [실행 결과 (Ctrl+F5 실행)]
![ch14-5 실행결과]<img width="336" height="220" alt="image" src="https://github.com/user-attachments/assets/6a34ab4e-994d-4222-93ed-042f93b67ba0" />

