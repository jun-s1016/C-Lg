#include <stdio.h>
#include "Function.h" // int data;

#define SIZE 100
 
int level; // ���� ����
		   // ���� ������ ���� �ʱ�ȭ���� ������ 0 �̶�� ������ �ʱ�ȭ �ȴ�.

int stage = 1; // ���� ���� ( �ʰ�ȭ�� �̷���� �޸� ���� ) 

void Stage()
{
	stage++;
}

void Increase()
{
	// ���� ������ �� �ѹ��� �ʱ�ȭ�� �̷������.
	static int score = 0;

	score++;

	printf("score ������ �� : %d\n", score);
}

int main()
{
#pragma region ��ó����
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ����ó���� �ϴ� ����.

	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ� ó���Ǵ� �����̱� ������
	// ��ɹ� ���� ";" �� ������� �ʴ´�.



	//data = 100;

	//printf("Function.h���� ������ data ������ �� : %d\n", data);

	//return 0;



#pragma endregion

#pragma region ������ ����

#pragma region ���� ����
	// ��� ������ ����� ������ ��� �������� ��ȿ�ϸ�,
	// ����� ����Ǹ� �޸𸮿��� ������� Ư¡�� ���� �ִ�.

	// {  } �ٱ��� �ִ� data ����
	//int data = 100;

	//{
	//	// {  } �ȿ� �ִ� data ����
	//	int data = 999;
	//	printf("{  } �ȿ� �ִ� data�� �� : %d\n", data);

	//}

	//printf("{  } �ٱ��� �ִ� data�� �� : %d\n", data);




#pragma endregion

#pragma region ���� ����

	// ���α׷� ��𿡼��� ������ �� ������
	// ���α׷��� ����Ǿ�߸� �޸𸮿��� ������� Ư¡�� ���� �ִ�.

	//Stage();

	//printf("���� ���� stage�� �� : %d\n", stage);
	//
	//stage = 10;

	//printf("���� ���� stage�� �� : %d\n", stage);


#pragma endregion

#pragma region ���� ����
	// ���α׷��� ����� �� �޸𸮿� �ö󰡰� �Ǹ�, ���������� Ư¡��
	// ���������� Ư¡�� ������ �ִ� �����̴�.

	//Increase();
	//Increase();
	//Increase();
	//Increase();

#pragma endregion



#pragma endregion

#pragma region �Ҽ�

	// 1. �Է��� �� �ִ� ������ �����Ѵ�.
	//int number = 0;
	//int flag = 0;

	//// 2. ���� �Է��Ѵ�.
	//scanf_s("%d", &number);

	//// 3. �ݺ����� �̿��Ͽ� �Ҽ��� �Ǻ��Ѵ�.
	//for (int i = 2; i < number; i++)
	//{
	//	if (number % i == 0)
	//	{
	//		flag++;
	//		break;
	//	}
	//}
	//// 4. ���� �Է��� ���� �Ҽ����� �ƴ��� �Ǻ��Ѵ�.
	//if (flag == 0)
	//{
	//	printf("�Ҽ�");
	//}
	//else
	//{
	//	printf("�Ҽ��� �ƴմϴ�");
	//}

#pragma endregion

#pragma region ��ũ��

	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����.

	printf("SIZE ��ũ���� �� :%d\n", SIZE);	

	// ��ũ���� ������ ������ ������ ���� �Ǹ�, �� ��ũ�ΰ� ����� ��
	// ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷��� ũ�Ⱑ Ŀ���� �ȴ�.

#pragma endregion


	return 0;

}
