#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� ����.



	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.


	//array[0] = 100;
	/*
	int array[5];

	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 100 + 100;
		printf("array[%d]�� �� : [%d]\n", i, array[i]);
	}

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�.

	int list[] = { 10,20,30,45 };

	int size = sizeof(list) / sizeof(int);

	printf("�迭�� ������ : %d\n", size);
	*/

	// �迭�� ũ��� ������ �� ������
	// �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����ȴ�.
/*
	int* ptr = NULL;

	int intList[5] = { 1,2,3,4,5 };

	ptr = intList;
	// �迭�� �̸��� �迭�� �����ּҸ� �ǹ��մϴ�.

	printf("ptr������ ���� :%p\n", ptr);
	printf("intList �迭�� ���� �ּ�:%p\n", intList);

	ptr = ptr + 1;

	*ptr = 99;
	
	printf("ptr ������ ���� :%p\n", ptr);
	printf("ptr ������ ����Ű�� �� :%d\n", *ptr);
	printf("intList �迭[1]�� �ּ�: %p\n", &intList[1]);
	*/
	
	// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭�� �����ּҸ� �ǹ��Ѵ�.



#pragma endregion

#pragma region ���ڿ�

	// �������� �޸� ������ ����� ���� ������ ����
	/*
	const char* string = "Computer";

	// *string = 'A'; (ERROR) 

	// %s : ���ڿ��� ����ϴ� ���� ������
	printf("string ������ �� : %s\n", string);

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������,
	// ���ڿ��� ���� ������ �� ����.

	string = "Hello";	 

	printf("string ������ �� : %s\n", string);
*/
	// ���ڿ��� ���鵵 �Բ� �Ÿ� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�,
	// �������� ���ڿ��� ���� �˷��ִ� ���� ����(NULL)�� �߰��˴ϴ�.
	/*
	// [A] [L] [I] [S] [T] [A] [R] [\0] [] []

	char name[10] = { "Alistar" };

	printf("name ������ �� : %s\n", name);

	name[4] = '\0';

	// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ�� ���ڱ��� �޸� ������ ����ȴ�.

	printf("name ������ �� : %s\n", name);
	*/
	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������
	// ���� �迭���̿� ��ȿ�� ���ڸ� �ְԵǸ� ��ȿ�� ���ڱ����� ���ڿ��� ����Ѵ�.


#pragma endregion

#pragma region �ִ񰪰� �ּڰ�
	// 01234 �� �ڷ��ش��ϰ�, int �ӽú����� 10 �Է�. �ӽú����ǰ��� ����
	// ���� ���� ���Ͽ� ���� ���� �� Ŭ�� ������ ����. ��� �ݺ�. 
/*
int i = 0;
	int num[5] = { 10,22,35,2,5 };
	
	for (int i = 0; i < 5; i++)
	{
		if (num[i] < num[i + 1])
		{
			printf("%d\n", num[i + 1]);
		}
		if (num[i] > num[i + 1])
		{
			break;
		}
	}
	*/
	int dataList[] = { 17,35,42,11,76};

	int max = 0;
	int min = 0;
	int arraySize = sizeof(dataList) / sizeof(int); 
	// �迭�� ũ�⸦ ����� ����. �迭 ��ü�� ũ�� (4X5) = 20 / �ڱ��ڷ���ũ��(4) = 5 (�迭��ũ��) 

	max = dataList[0];
	min = dataList[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (max < dataList[i])
		{
			max = dataList[i];
		}
		if (min > dataList[i])
		{
			min = dataList[i];
		}
	}
	printf(" dataList�� �ִ� : %d\n", max); 
	printf(" dataList�� �ּڰ� : %d\n", min);



#pragma endregion

}