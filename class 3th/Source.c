#include <stdio.h>

void main()
{

#pragma region 오버플로우
	//특정한 자료형이 표현할 수 있는 최댓값의 범위를 
	//넘어서 연산을 수행하는 과정.

	/*
	char data = 127 + 3;

	printf("data변수의 값은 : %d", data);
	*/

	// 오버플러우는 최댓값보다 더 많은 값을 저장하게 되면
	// 최솟값부터 최댓값을 넘어간 만큼 다시 계산한다.
#pragma endregion

#pragma region 언더플로우

	// 특정한 자료형이 표현할 수 있는 최소값의 범위를
	// 넘어서 연산을 수행하는 과정.

	/*
	char alphabet = -128 - 1;
	--> 127 출력
	printf("alphabet 변수의 값은 : %d", alphabet);
	*/

	// 언더플러우는 최솟값보다 더 많은 값을 저장하게 되면
	// 최댓값부터 최솟값을 넘어간 만큼 다시 계산한다.
#pragma endregion

#pragma region 실수를 저장하는 방법

	//부동소수점?
	// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법.

	/*
		float attack = 6.13f;
	printf("attack 변수의 값 : %.16f\n", attack);

	//가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않는다.
	double health = 6.1333333333333333;
	printf("health 변수의 값 : %.16lf\n", health);
	*/

	//<실수 형태의 10 진수를 2 진수로 변환하는 과정>
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한다음
	// 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬한다.

#pragma endregion

#pragma region 조건문

	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문.
	//ex) 몹 hp가 0보다 작거나 같아진다? -> 몹 파괴.

#pragma region 관계 연산자

	// 두 개의 피연산자의 값을 비교하여 그 결과를
	// 0 또는 1 이라는 값으로 나타내는 연산자.

	//int result1 = 10 > 5; // 10 이 5보다 크다. (참) 1
	//int result2 = 10 < 5; // 10 이 5보다 작다. (거짓) 0
	//int result3 = 10 >= 5; // 10 이 5보다 크거나 같다. (참) 1
	//int result4 = 10 <= 5; // 10 이 5보다 작거나 같다. (거짓) 0
	//int result5 = 10 == 5; // 10 이 5와 같다. (거짓) 0
	//int result6 = 10 != 5; // 10 이 5와 같지않다. (참) 1

	//printf("result1 변수의 값 : %d\n", result1);
	//printf("result2 변수의 값 : %d\n", result2);
	//printf("result3 변수의 값 : %d\n", result3);
	//printf("result4 변수의 값 : %d\n", result4);
	//printf("result5 변수의 값 : %d\n", result5);
	//printf("result6 변수의 값 : %d\n", result6);
	//==> 101001 로 출력.
#pragma endregion

#pragma region if문

	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문.

	//int monsterHP = 0;

	//if (monsterHP <= 0)
	//{
	//	printf("Monster destroy\n");
	//}

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않는다.


#pragma endregion

#pragma region else if 문

	// if문의 조건이 틀릴 때, else if문의 조건이 맞다면 실행되는 명령문.
	/*
	int level = 98;

	if (level == 99)
	{
		printf("승급가능");
	}
	else if (level != 99)
	{
		printf("승급 불가능");
	}
	*/
	// else if문의 경우 여러개를 더 추가해서 사용할 수 있다.


#pragma endregion

#pragma region else 문

	// if문과 else if문의 조건이 다 틀리면 실행되는 명령문.
		/*
	char grade = 'C';

	if (grade == 'A')
	{
		printf("A 등급");
	}
	else if (grade == 'B')
	{
		printf("B 등급");
	}
	else
	{
		printf("예외 등급");
	}
		*/

		// if문에 연결된 모든 조건문의 조건이 맞을 때,
		// 가장 위에 있는 조건문만 실행된다.
#pragma endregion

#pragma region 사분면
	/*
	int x = 0;
	int y = 0;

	if (x > 0 && y > 0)
	{
		printf("제1 사분면");
	}
	else if (x < 0 && y > 0)
	{
		printf("제2 사분면");
	}
	else if (x < 0 && y < 0)
	{
		printf("제3 사분면");
	}
	else if (x > 0 && y < 0)
	{
		printf("제4 사분면");
	}
	else if (x == 0 && y != 0) //else if ( x == 0 && y) -> y가 혼자있음 : 0 만 아니면 참 값이 들어감.
	{
		printf("y절편 : %d\n", y);
	}
	else if (y == 0 && x !=0)
	{
		printf("x절편 : %d\n", x);
	}
	else
	{
		printf("원점");
	}
		*/
#pragma endregion

#pragma region Switch 문
		// 어떤 결과에 따라 그 결과부터 실행되는 명령문.

		//int select = 1;
		//
		//// break문이란?
		//
		//// 특정한 지점에서 분기를 탈출하는 제어문. 

		//switch (select)
		//{
		//case 0: printf("타이틀 이동\n");
		//	break;
		//case 1: printf("마을 이동\n");
		//	break;
		//case 2: printf("던전 이동\n");
		//	break;
		//
		//default: printf("잘못된 값이 들어왔습니다.\n");
		//
		//	// switch문은 해당 조건이 완료 되었을 때, break 문이 없으면
		//	// 나머지 밑에 있는 case문 까지 계속 실행시키다가 종료된다.

		//}
		//switch문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동합니다.

	//
	//float time = 5.75f;
	//
	//switch (time)
	//{
	//case 5.75: printf("time : %d", time);
	//}

	// switch 문에는 조건식으로 실수형 변수와 실수형 상수를 사용할 수 없다.

#pragma endregion

#pragma endregion


}

