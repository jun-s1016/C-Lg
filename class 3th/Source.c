#include <stdio.h>

void main()
{

#pragma region �����÷ο�
	//Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ 
	//�Ѿ ������ �����ϴ� ����.

	/*
	char data = 127 + 3;

	printf("data������ ���� : %d", data);
	*/

	// �����÷���� �ִ񰪺��� �� ���� ���� �����ϰ� �Ǹ�
	// �ּڰ����� �ִ��� �Ѿ ��ŭ �ٽ� ����Ѵ�.
#pragma endregion

#pragma region ����÷ο�

	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּҰ��� ������
	// �Ѿ ������ �����ϴ� ����.

	/*
	char alphabet = -128 - 1;
	--> 127 ���
	printf("alphabet ������ ���� : %d", alphabet);
	*/

	// ����÷���� �ּڰ����� �� ���� ���� �����ϰ� �Ǹ�
	// �ִ񰪺��� �ּڰ��� �Ѿ ��ŭ �ٽ� ����Ѵ�.
#pragma endregion

#pragma region �Ǽ��� �����ϴ� ���

	//�ε��Ҽ���?
	// �Ҽ����� ��ġ�� �������� �ʰ�, �Ҽ����� ��ġ�� ��Ÿ���� ���.

	/*
		float attack = 6.13f;
	printf("attack ������ �� : %.16f\n", attack);

	//�����ο� �ִ� ��Ʈ �߿��� ���� ���ʿ� �ִ� ���� ǥ������ �ʴ´�.
	double health = 6.1333333333333333;
	printf("health ������ �� : %.16lf\n", health);
	*/

	//<�Ǽ� ������ 10 ������ 2 ������ ��ȯ�ϴ� ����>
	// 10���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ���Ѵ���
	// ���� ����� ���� �κ��� ������ �Ʒ��� ������� �����Ѵ�.

#pragma endregion

#pragma region ���ǹ�

	// � ������ �־��� �� �ش� ���ǿ� ���� ������
	// �����ϵ��� �����ϴ� ��ɹ�.
	//ex) �� hp�� 0���� �۰ų� ��������? -> �� �ı�.

#pragma region ���� ������

	// �� ���� �ǿ������� ���� ���Ͽ� �� �����
	// 0 �Ǵ� 1 �̶�� ������ ��Ÿ���� ������.

	//int result1 = 10 > 5; // 10 �� 5���� ũ��. (��) 1
	//int result2 = 10 < 5; // 10 �� 5���� �۴�. (����) 0
	//int result3 = 10 >= 5; // 10 �� 5���� ũ�ų� ����. (��) 1
	//int result4 = 10 <= 5; // 10 �� 5���� �۰ų� ����. (����) 0
	//int result5 = 10 == 5; // 10 �� 5�� ����. (����) 0
	//int result6 = 10 != 5; // 10 �� 5�� �����ʴ�. (��) 1

	//printf("result1 ������ �� : %d\n", result1);
	//printf("result2 ������ �� : %d\n", result2);
	//printf("result3 ������ �� : %d\n", result3);
	//printf("result4 ������ �� : %d\n", result4);
	//printf("result5 ������ �� : %d\n", result5);
	//printf("result6 ������ �� : %d\n", result6);
	//==> 101001 �� ���.
#pragma endregion

#pragma region if��

	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ�.

	//int monsterHP = 0;

	//if (monsterHP <= 0)
	//{
	//	printf("Monster destroy\n");
	//}

	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� �ʴ´�.


#pragma endregion

#pragma region else if ��

	// if���� ������ Ʋ�� ��, else if���� ������ �´ٸ� ����Ǵ� ��ɹ�.
	/*
	int level = 98;

	if (level == 99)
	{
		printf("�±ް���");
	}
	else if (level != 99)
	{
		printf("�±� �Ұ���");
	}
	*/
	// else if���� ��� �������� �� �߰��ؼ� ����� �� �ִ�.


#pragma endregion

#pragma region else ��

	// if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ�.
		/*
	char grade = 'C';

	if (grade == 'A')
	{
		printf("A ���");
	}
	else if (grade == 'B')
	{
		printf("B ���");
	}
	else
	{
		printf("���� ���");
	}
		*/

		// if���� ����� ��� ���ǹ��� ������ ���� ��,
		// ���� ���� �ִ� ���ǹ��� ����ȴ�.
#pragma endregion

#pragma region ��и�
	/*
	int x = 0;
	int y = 0;

	if (x > 0 && y > 0)
	{
		printf("��1 ��и�");
	}
	else if (x < 0 && y > 0)
	{
		printf("��2 ��и�");
	}
	else if (x < 0 && y < 0)
	{
		printf("��3 ��и�");
	}
	else if (x > 0 && y < 0)
	{
		printf("��4 ��и�");
	}
	else if (x == 0 && y != 0) //else if ( x == 0 && y) -> y�� ȥ������ : 0 �� �ƴϸ� �� ���� ��.
	{
		printf("y���� : %d\n", y);
	}
	else if (y == 0 && x !=0)
	{
		printf("x���� : %d\n", x);
	}
	else
	{
		printf("����");
	}
		*/
#pragma endregion

#pragma region Switch ��
		// � ����� ���� �� ������� ����Ǵ� ��ɹ�.

		//int select = 1;
		//
		//// break���̶�?
		//
		//// Ư���� �������� �б⸦ Ż���ϴ� ���. 

		//switch (select)
		//{
		//case 0: printf("Ÿ��Ʋ �̵�\n");
		//	break;
		//case 1: printf("���� �̵�\n");
		//	break;
		//case 2: printf("���� �̵�\n");
		//	break;
		//
		//default: printf("�߸��� ���� ���Խ��ϴ�.\n");
		//
		//	// switch���� �ش� ������ �Ϸ� �Ǿ��� ��, break ���� ������
		//	// ������ �ؿ� �ִ� case�� ���� ��� �����Ű�ٰ� ����ȴ�.

		//}
		//switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵��մϴ�.

	//
	//float time = 5.75f;
	//
	//switch (time)
	//{
	//case 5.75: printf("time : %d", time);
	//}

	// switch ������ ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ����� �� ����.

#pragma endregion

#pragma endregion


}

