#include <stdio.h>

void main()
{

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� ����.

	/*
	int data = 10;
	double pi = 3.14;

	// 8 byte
	// [ NULL ]
	int * ptr = NULL;

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ �����ּҸ� ����Ű�� �ȴ�.

	//       ptr
	// [ data�� �����ּ� ] <------data�� ���� �ּ�

	ptr = &data;

	// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�
	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	// �����Ͱ� ����Ű�� �޸��� �ڷ������� �������־�� �Ѵ�.

	printf("data ������ �޸� �ּ� :%p\n", &data);
	printf("ptr ������ �� : %p\n" , ptr);
	printf("ptr ������ �޸� �ּ� : %p\n", &ptr);

	printf("data ������ �� : %d\n", data);
	printf("ptr ������ ����Ű�� �� : %d\n", *ptr);


	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	// ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	ptr = &pi;

	printf("pi ������ �� : %lf\n", pi);
	printf("ptr ������ ����Ű�� �� : %lf\n", *ptr);
	*/

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �ѹ��� ó���� �� �ִ� ũ��� ��������,
	// �� ���� ó���� �� �ִ� ũ��� �ü�翡 ���� ũ�Ⱑ �����ȴ�.

#pragma endregion

#pragma region sizeof ������
	// �ǿ������� ũ�⸦ byte ������ ��ȯ�ϴ� ������.

	//int* pointer = NULL;

	//printf("char    �ڷ����� ũ�� : %d\n", sizeof(char));
	//printf("short   �ڷ����� ũ�� : %d\n", sizeof(short));
	//printf("int     �ڷ����� ũ�� : %d\n", sizeof(int));
	//printf("long    �ڷ����� ũ�� : %d\n", sizeof(long));
	//printf("float   �ڷ����� ũ�� : %d\n", sizeof(float));
	//printf("double  �ڷ����� ũ�� : %d\n", sizeof(double));
	//printf("pointer �ڷ����� ũ�� : %d\n", sizeof(pointer));

#pragma endregion

#pragma region ��� ���� ������

	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ�
	// �����ϴ� ���� �����Ҽ� ������ ������ �� �ִ�.
	/*
	const int* ptr;

	int a = 10;

	int b = 10;

	ptr = &a;
	printf("ptr�� �� : %p\n", ptr);
	a = 45;
	//*ptr = 100;
	ptr = &b;
	printf("ptr�� �� : %p\n", ptr);
	*/
	// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������,
	// �ٸ� ������ �ּҴ� ����ų �� �ִ�.


#pragma endregion

#pragma region ������ ���
	/*
	int* const cptr;

	int x = 100;
	int y = 200;

	int* const cptr = &x;

	*cptr = 999;

	printf("x�� �� : %d", x);
	*/

#pragma endregion

#pragma region ���

	// ���� �Է��� ������ ����� ���ض�.
	//ex) 81 �Է� -> 1 3 9 27 81 

	// 1.�Է��� ���� 2.���� �Է� �ް� 3.�ݺ����� �̿��ؼ� ���� �Է��� ����ŭ �ݺ�
	// 4.���� �Է��� ���� ���ķ��� ���� 0 �� ��� -> �״�� ���.
/*
	int num = 0; //1

	scanf_s("%d", &num); //2

	for (int i = 1; i <= num; i++) //3
	{
		if ( num % i == 0) //4

			printf("%d\n",i); //4
	}
	*/


#pragma endregion


}