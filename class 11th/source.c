#include <stdio.h>
#include <stdlib.h> // �޸� ���� ���̺귯��
int main()
{
#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� ������.
	/*
	int attack = 10;
	float health = 100.0f;

	void * vptr = NULL;

	vptr = &attack;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����.
	printf("vptr�� ����Ű�� �� :%d\n", *(int*)vptr);

	vptr = &health;

	printf("vptr�� ����Ű�� �� :%f\n", *(float*)vptr);
	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�ؾ� �Ѵ�.
	*/
#pragma endregion

#pragma region ���� �Ҵ�

	// ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�.

	//int * ptr = malloc(sizeof(int));

	//*ptr = 100;
	//// �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���������ͷ� ��ȯ�ϱ� ������
	//// �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �Ѵ�.

	//printf("*ptr�� ����Ű�� �� : %d\n", *ptr);

	//free(ptr);
	//// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	//// ����� ������ ���� ���� ���־�� �Ѵ�.

	//// ptr [] -----> [999] [333] [] [] []
	//ptr = malloc(sizeof(int) * 5);

	//// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ ���� ��ų�� ������,
	//// �������� �޸��� ũ�⸦ �Ҵ��� �� ���� Ʈ ������ �����Ѵ�.

	//ptr[0] = 999;
	//ptr[1] = 333;

	//printf("ptr[0]�� ����Ű�� �� : %d\n", ptr[0]);
	//printf("ptr[1]�� ����Ű�� �� : %d\n", ptr[1]);

	//free(ptr):
		// �޸𸮸� �������� �Ҵ��� ���¿��� �������� ������ �޸� ���� ������ �Ͼ��
		// �޸� ������ �Ͼ�� �Ǹ� �� �̻� �޸𸮸� �Ҵ��� �� ���� ���°� �ȴ�.

#pragma endregion

#pragma region ���� �� ���(short-circuit evaluation)
		// ���� ���꿡�� �� �ǿ����� �� ���ʿ� �ִ� ����� "����" �̸� 
		// ������ �ǿ������� ���� ������ �ʰ� �ٷ� ����� ���� ����̴�.
/*
		int x = 0;
		int y = 0;

		if (x < y && ++x)
		{
			printf("Short Curcuit\n");
		}

		printf("x ������ �� : %d\n", x);

		if (x < y || y++)
		{
			printf("Short Curcuit\n");
		}
		printf("y ������ �� : %d\n", y);
		*/

#pragma endregion

#pragma region ASCII �ڵ�
		// �̱� ���� ǥ�� ��ȸ���� ǥ��ȭ�� ������ȯ�� 7bit ��ȣ ü��

		//char alphabet = 'A';

		//// A ~ Z 

		//for (int i = 0; i < 26; i++)
		//{
		//	printf("%c ", alphabet + i);
		//}
		//
		//const char* hangeul = "��";

#pragma endregion

	return 0;
}