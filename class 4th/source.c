#include <stdio.h>

void main()
{
#pragma region �ݺ���

	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ�.

#pragma region ���� ������

// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� ������

/*
int data = 0;
int result = 0;

result = ++data; // result : 1 <- data : 1
result = data--; // result : 1 <- data : 0

printf("data�� �� : %d\n", data);
printf("result�� �� : %d\n", result);

result = data++; // result : 0 <- data : 1
result = --data; // result : 0 <- data : 0

printf("data�� �� : %d\n", data);
printf("result�� �� : %d\n", result);
*/

// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������ �����ϰ�,
// ���� ���� �����ڴ� ������ ������ ������ ���� ������Ų��.

#pragma endregion

#pragma region for ��

// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� ��ɹ�.

/*for(int i = 0; i < 5; i++)
	{
		printf("Hello World\n");
		}
		*/

		// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ���� �����ϰ� �Ǹ�
		// ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ������ �߻��Ѵ�.

#pragma endregion

#pragma region for�� ���� ����
// 1 ~ 5 ������ ���� ������� ����ϱ�.

//for (int data = 5; data >= 1; data--) // 5 4 3 2 1
//{
//	printf("%d", data);
//}

// 1 ~ 10 ������ �� 

//int value = 0;

//for (int data = 1; data <= 10; data++)
//{
//	value = data + value; //�ڵ带 ���� �� �����ʺ��� ��� �� ���ʿ� ����.

//	//printf("%d\n", value); // �� ���� �� ��� ��� 1 3 6 10 15 ...
//} 
//
//printf("value �� �� : %d\n", value); // ������ ��갪 �� ���

#pragma endregion


#pragma region '2'�� for �� (��ø �ݺ���)

//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		printf("���ʿ� �ִ� �ݺ��� \n");
//	}
//	printf("�ٱ��ʿ� �ִ� �ݺ��� \n");
//}

#pragma endregion

#pragma region ������

// 1 ~ 9

// 1 x 1 = 1 
// 2 x 3 = 6 .... 

/*
for (int i = 1; i <= 9; i++)
{
	printf("%d�� ���\n", i);
	for (int j = 1; j <= 9; j++)
	{
		printf(" %d * %d = %d\n",i,j, i*j);
	}
}
*/



#pragma endregion

#pragma region While ��
//Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���.
/*
int count = 5;

while (count > 0)
{
	printf("Excution\n");
	count--;
}*/

// while ���� ��� ������ �Ʒ��� ����Ǹ�
// �Ʒ��� �ִ� ��ɹ��� ������ �� ������ 
//�ٽ� �����ִ� ��ɹ����� ���ư��� �ݺ��ϴ� �����̴�.
#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ���.

	//int count = 0;

	//do
	//{
	//	printf("Login\n");
	//} 
	//while (count > 3);


#pragma endregion

#pragma region Continue��

	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���.
	/*
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;

		printf("%d\n", i);
	}
	*/
	// �ݺ������� continue ���� ������ �Ǹ� �ٽ� ���������� ���ʴ�� �����Ѵ�.
#pragma endregion

#pragma endregion
}