#include <stdio.h>
#include <math.h>

struct Player
{
	// 구조체 크기의 경우 멤버 변수의 순서에 따라 
	// 메모리의 크기가 다르게 설정될 수 있다.
	short blood;  //1byte
	int health;   //4byte
	float attack; //4byte
	double defense; //8byte
	// 구조체를 선언하기 전에 구조체는 메모리공간이 생성되지 않으므로
	// 구조체 내부에 있는 데이터를 초기화 할 수 없다.
};

struct Character
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

int main()
	{
#pragma region 구조체
	// 여러개의 변수를 하나의 집합으로 구조화 한 다음
	// 하나의 객체를 생성하는 것

	//struct Player player = {'B',75,5.5f.15}; // 순서가 위의 구조체랑 같아야함

	////player.attack = 10.5f;
	////player.blood = 'O';
	////player.health = 100;

	//printf("player.blood 의 값 : %c\n", player.blood);
	//printf("player.health 의 값 : %d\n", player.health);
	//printf("player.attack 의 값 : %f\n", player.attack);

	//printf("Player 구조체의 크기 : %d\n", sizeof(struct Player));

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한번에 읽을 수 있도록
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업

	//printf("Player 구조체의 크기 : %d\n", sizeof(struct Player));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 가장 크기가 큰
	// 자료형의 배수가 되도록 정렬한다.

#pragma endregion

#pragma endregion

#pragma region 두 점 사이의 거리
	// 거리가 5.0 이하라면 공격범위 입니다/ 공격범위 아닙니다.
	//printf("Root 25 : %f\n", sqrt(25));
	//printf("pow 2의 3승 : %lf\n", pow(2, 3));


	struct Player player;
	printf("player의 좌표를 입력하세요");
	scanf_s("%d %d", &player.x & player.y);

	struct Monster monster;

	printf("monster의 좌표를 입력하세요");
	scanf_s("%d %d", &monster.x &monster.y);

	int a = (&player.x - &monster.x);

	distance = sqrt(pow(monster.x, 2) + pow(monster.y, 2));
	
	if (distance<  5.0)
		printf("공격범위 입니다");
	else
		printf("공격범위가 아닙니다");



#pragma endregion


		return 0;
	
}