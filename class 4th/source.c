#include <stdio.h>

void main()
{
#pragma region 반복문

	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문.

#pragma region 증감 연산자

// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자

/*
int data = 0;
int result = 0;

result = ++data; // result : 1 <- data : 1
result = data--; // result : 1 <- data : 0

printf("data의 값 : %d\n", data);
printf("result의 값 : %d\n", result);

result = data++; // result : 0 <- data : 1
result = --data; // result : 0 <- data : 0

printf("data의 값 : %d\n", data);
printf("result의 값 : %d\n", result);
*/

// 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을 수행하고,
// 후위 증감 연산자는 연산을 수행한 다음에 값을 증감시킨다.

#pragma endregion

#pragma region for 문

// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 명령문.

/*for(int i = 0; i < 5; i++)
	{
		printf("Hello World\n");
		}
		*/

		// for문의 경우 조건이 끝나는 형태와 반대로 초기식을 연산하게 되면
		// 조건이 일치하지 않아 계속 반복적으로 실행되는 문제가 발생한다.

#pragma endregion

#pragma region for문 응용 문제
// 1 ~ 5 사이의 값을 순서대로 출력하기.

//for (int data = 5; data >= 1; data--) // 5 4 3 2 1
//{
//	printf("%d", data);
//}

// 1 ~ 10 까지의 합 

//int value = 0;

//for (int data = 1; data <= 10; data++)
//{
//	value = data + value; //코드를 읽을 때 오른쪽부터 계산 후 왼쪽에 넣음.

//	//printf("%d\n", value); // 각 계산된 값 계속 출력 1 3 6 10 15 ...
//} 
//
//printf("value 의 값 : %d\n", value); // 마지막 계산값 만 출력

#pragma endregion


#pragma region '2'중 for 문 (중첩 반복문)

//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		printf("안쪽에 있는 반복문 \n");
//	}
//	printf("바깥쪽에 있는 반복문 \n");
//}

#pragma endregion

#pragma region 구구단

// 1 ~ 9

// 1 x 1 = 1 
// 2 x 3 = 6 .... 

/*
for (int i = 1; i <= 9; i++)
{
	printf("%d의 배수\n", i);
	for (int j = 1; j <= 9; j++)
	{
		printf(" %d * %d = %d\n",i,j, i*j);
	}
}
*/



#pragma endregion

#pragma region While 문
//특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문.
/*
int count = 5;

while (count > 0)
{
	printf("Excution\n");
	count--;
}*/

// while 문의 경우 위에서 아래로 실행되며
// 아래에 있는 명령문의 실행이 다 끝나면 
//다시 위에있는 명령문으로 돌아가서 반복하는 구조이다.
#pragma endregion

#pragma region do-while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문.

	//int count = 0;

	//do
	//{
	//	printf("Login\n");
	//} 
	//while (count > 3);


#pragma endregion

#pragma region Continue문

	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문.
	/*
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;

		printf("%d\n", i);
	}
	*/
	// 반복문에서 continue 문을 만나게 되면 다시 위에서부터 차례대로 동작한다.
#pragma endregion

#pragma endregion
}