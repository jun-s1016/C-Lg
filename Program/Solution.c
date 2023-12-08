#include <stdio.h>

void main()
{
#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 값을 변경할 수 없는 메모리 공간.

	
	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며
	//// 한 번 저장된 값은 더 이상 변경할 수 없다.
	//
	//// ex) data = 999; -> 컴파일 에러 
	//
	//// 메모리 공간을 가지고 있지 않은 상수 : 리터럴 상수
	//// 메모리 공간을 가지고 있는 상수 : 심볼릭 상수
	//
	//const float pi = 3.14f;
	//
	//printf("pi의 값 : %f\n", pi);
	//
	//// "%c" : 하나의 문자를 표현하는 서식 지정자
	//// "%d" : 정수를 표현하는 서식 지정자
	//// "%f" : 실수(float)를 표현하는 서식 지정자
	//
	//
	//// 정수형 리터럴 상수는 저장하는 값의 범위가 크지 않으면 int 자료형으로 저장된다.
	//// 실수형 리터럴 상수는 double 자료형으로 저장된다.
	//// 문장 옮기는 단축기 : Alt + 위/아래 방향키 
	//
	//float value = 3.1415926535;
	//printf("value의 값 : %1lf\n", value);
	//
	//// "%lf" : 실수(double)를 표현하는 서식 지정자.
	//
	////printf( ) 함수로 소수를 출력할 때,
	//// 4 byte 크기의 실수형 자료형: 소수점 이하 6자리까지만 표기. (float)
	//// 8 byte 크기의 실수형 자료형: 소수점 이하 15자리까지만 표기. (double)


#pragma endregion

#pragma region bit
	//디지털논리회로 공부임.
	// 데이터를 나타내느 최소 단위, 0 또는 1 의 조합으로 논리 계산을 수행하는 단위이다.

	char character = 10;
	
	// 2진수 -> 10진수 , 10진수 -> 2진수

	// 10 --> [0][0][0][0][1][0][1][0] . . .

	// [0][0][0][0][1][0][1][0] => 2^3 + 2^1 = 10  

	// 메모리는 비트단위로 저장할 수 있으며, 1개의 bit에는 0 또는 1 의 값만 저장할 수 있다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자.

	// AND, OR, XOR 등등

	// AND : 모두 1 -> 1
	// OR : 하나라도 1 -> 1
	// XOR : 피연산자가 같을시 0 , 다를시 1
	// NOT : 0을1로 , 1을0으로.

	int x = 10; // 0000 1010
	int y = 6;  // 0000 0110
	
	// AND

	printf("x와y를 AND 연산한 결과 : %d\n", x & y);

	// OR

	printf("x와y를 OR 연산한 결과 : %d\n", x | y);

	// XOR
	printf("x와y를 XOR 연산한 결과 : %d\n", x ^ y);

	// NOT
	printf("x변수를 NOT 연산한 결과 : %d\n", ~x); //11110101

	// 위의 NOT연산값이 -11 인이유? -> 부호비트  0: (+) , 1: (-) 



#pragma endregion

}