#include <stdio.h>
#include <math.h>

struct Player
{
	// ����ü ũ���� ��� ��� ������ ������ ���� 
	// �޸��� ũ�Ⱑ �ٸ��� ������ �� �ִ�.
	short blood;  //1byte
	int health;   //4byte
	float attack; //4byte
	double defense; //8byte
	// ����ü�� �����ϱ� ���� ����ü�� �޸𸮰����� �������� �����Ƿ�
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� ����.
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
#pragma region ����ü
	// �������� ������ �ϳ��� �������� ����ȭ �� ����
	// �ϳ��� ��ü�� �����ϴ� ��

	//struct Player player = {'B',75,5.5f.15}; // ������ ���� ����ü�� ���ƾ���

	////player.attack = 10.5f;
	////player.blood = 'O';
	////player.health = 100;

	//printf("player.blood �� �� : %c\n", player.blood);
	//printf("player.health �� �� : %d\n", player.health);
	//printf("player.attack �� �� : %f\n", player.attack);

	//printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾�

	//printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ���� ũ�Ⱑ ū
	// �ڷ����� ����� �ǵ��� �����Ѵ�.

#pragma endregion

#pragma endregion

#pragma region �� �� ������ �Ÿ�
	// �Ÿ��� 5.0 ���϶�� ���ݹ��� �Դϴ�/ ���ݹ��� �ƴմϴ�.
	//printf("Root 25 : %f\n", sqrt(25));
	//printf("pow 2�� 3�� : %lf\n", pow(2, 3));


	struct Character character;
	struct Monster monster;

	printf("character�� ��ǥ�� �Է��ϼ���\n");
	scanf_s("%d %d", &character.x , &character.y);

	printf("monster�� ��ǥ�� �Է��ϼ���\n");
	scanf_s("%d %d", &monster.x, &monster.y);

	int distance;

	distance = sqrt(pow((monster.x - character.x), 2) + pow((monster.y - character.y), 2));
	
	if (distance <=  5.0)
		printf("���ݹ��� �Դϴ�");
	else
		printf("���ݹ����� �ƴմϴ�");

	struct Character character = { 0,0 };
	struct Monster monster = { 6,4 };





#pragma endregion


		return 0;
	
}