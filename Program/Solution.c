#include <stdio.h>
#include "Function.h" // int data;

#define SIZE 100
 
int level; // 전역 변수
		   // 전역 변수는 직접 초기화하지 않으면 0 이라는 값으로 초기화 된다.

int stage = 1; // 전역 변수 ( 초가화가 이루어진 메모리 영역 ) 

void Stage()
{
	stage++;
}

void Increase()
{
	// 정적 변수는 단 한번만 초기화가 이루어진다.
	static int score = 0;

	score++;

	printf("score 변수의 값 : %d\n", score);
}

int main()
{
#pragma region 전처리기
	// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전처리를 하는 과정.

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해서 처리되는 문장이기 때문에
	// 명령문 끝에 ";" 을 사용하지 않는다.



	//data = 100;

	//printf("Function.h에서 생성한 data 변수의 값 : %d\n", data);

	//return 0;



#pragma endregion

#pragma region 변수의 범위

#pragma region 지역 변수
	// 블록 내에서 선언된 변수로 블록 내에서만 유효하며,
	// 블록이 종료되면 메모리에서 사라지는 특징을 갖고 있다.

	// {  } 바깥에 있는 data 변수
	//int data = 100;

	//{
	//	// {  } 안에 있는 data 변수
	//	int data = 999;
	//	printf("{  } 안에 있는 data의 값 : %d\n", data);

	//}

	//printf("{  } 바깥에 있는 data의 값 : %d\n", data);




#pragma endregion

#pragma region 전역 변수

	// 프로그램 어디에서나 접근할 수 있으며
	// 프로그램이 종료되어야만 메모리에서 사라지는 특징을 갖고 있다.

	//Stage();

	//printf("전역 변수 stage의 값 : %d\n", stage);
	//
	//stage = 10;

	//printf("전역 변수 stage의 값 : %d\n", stage);


#pragma endregion

#pragma region 정적 변수
	// 프로그램이 실행될 때 메모리에 올라가게 되며, 지역변수의 특징과
	// 전역변수의 특징을 가지고 있는 변수이다.

	//Increase();
	//Increase();
	//Increase();
	//Increase();

#pragma endregion



#pragma endregion

#pragma region 소수

	// 1. 입력할 수 있는 변수를 선언한다.
	//int number = 0;
	//int flag = 0;

	//// 2. 값을 입력한다.
	//scanf_s("%d", &number);

	//// 3. 반복문을 이용하여 소수를 판별한다.
	//for (int i = 2; i < number; i++)
	//{
	//	if (number % i == 0)
	//	{
	//		flag++;
	//		break;
	//	}
	//}
	//// 4. 내가 입력한 값이 소수인지 아닌지 판별한다.
	//if (flag == 0)
	//{
	//	printf("소수");
	//}
	//else
	//{
	//	printf("소수가 아닙니다");
	//}

#pragma endregion

#pragma region 매크로

	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정.

	printf("SIZE 매크로의 값 :%d\n", SIZE);	

	// 매크로의 과정은 컴파일 이전에 실행 되며, 각 매크로가 실행될 때
	// 매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 된다.

#pragma endregion


	return 0;

}
