#include <stdio.h>

void Function()
{  
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

 
void Swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
	printf("a ������ �� : %d\n", a);
	printf("b ������ �� : %d\n", b);

	// �Լ��� ȣ���� �� ������ ���� �μ��� �����ϰ� �Ǹ� �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
	// �μ��� ������ ������ �Լ� ������ �Ͼ ���꿡 ���� ������ ���� �ʴ´�.
}

void main()
{
#pragma region �Լ�
	
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����.

	//Function();

	// �Լ��� ȣ��� �� �Լ��� ȣ��Ǵ� ���� �������� �Ѿ�� �ȴ�.
#pragma region �Ű� ����

	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� ����.
	
	/*printf("Add �Լ��� ��� : %d\n", Add(10, 20));
	*/printf("Minus �Լ��� ��� : %d\n", Minus(10, 20));

	// �Ű� ������ �Լ� ���ο����� ������ �̷������
	// �Լ��� ����Ǹ� �޸𸮿��� ������� Ư¡�� ������.	

	//printf("Multiple �Լ��� ��� : %d\n", Multiple(5.75f, 7.65f));
	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������ ���ϴ� ���� ������ ����.


#pragma endregion

#pragma region �μ�

	// �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ���Դϴ�.

	//a(10) ~ b(20) --> a=20 b=10

	int temp = 0;
	int a = 10;
	int b = 20;

	temp = b;
	b = a;
	a = temp;

	printf("a ������ �� : %d\n", a);
	printf("b ������ �� : %d\n", b);

	Swap(a, b);
	printf("a ������ �� : %d\n", a);
	printf("b ������ �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�
	// ���� �����ϴ� �μ��� ���� ���޹޴� �Ű������� �ڷ����� ���� ��ġ�ؾ� �Ѵ�.
#pragma endregion



#pragma endregion


}