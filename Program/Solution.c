#include <stdio.h>

void main()
{

#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� ��
	// ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����.

#pragma region �Ϲ��� �� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����.

	/*
	int integer = 10;
	float decimal = 6.5f;

	printf("interger(������) + decimal(�Ǽ���) : %f", integer + decimal);

	// ǥ�� ������ ���� �����Ϳ� ǥ�������� ū �����͸� �����ϰ� �Ǹ�
	// �Ϲ������� ������ �ս��� �߻��ϰ� �ȴ�.

	integer = decimal;

	printf("interger������ �� : %d\n",integer);
	*/

#pragma endregion

#pragma region ����� �� ��ȯ
	
	// ������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� ����


	int x = 5;
	int y = 2;

	float result = (float)x / y;

	printf("result ������ �� : %f\n", result);

	// ������ �������� ������ �����ϰ� �Ǹ� ������ ������� ���� �� �ִ�.

#pragma endregion


#pragma endregion

}