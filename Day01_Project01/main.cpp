//Hello World!

//�ܼ��������α׷�, ��������Ʈ, SDL X

//���α׷��� ����� ���� : ���� �ϱ� ������ �ϵ��� ��ǻ�Ϳ��� ��Ű�� ����
//��ǻ�Ͱ� ������ �����ϱ� ���� ����� �ۼ��� ��
// 2����, 2�������� 10������ ��ȯ

//������ -> ��ȯ�� ������� �������
//��ǻ�� ����, ������� ����� �����ڿ��� ����� �͵��� �� ������ �ִ�.
//���̴� ���൵ ��������.

//����ȭ�� ������ �ٸ��ٴ� �Ϳ��� ���� ����, �����Ϸ��� �ٸ��� ������� �ٸ���.

#include<stdio.h>
#include <stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80


// ""�� �����Ϸ��� ������ ���� ���� �͵鵵 �˻��ؼ� ����
// <>�� �����Ϸ��� ������ ���� �������� �˻��ؼ� ����(�����Ϸ� ǥ��)

//�˰����� �־��� ���ǿ��� ������ ã�°�

///& �ּ� ������
//�и�Ƽ üũ
//�Ŵ����� ���, ��Ŵ����� ���
//���α׷� ī����

//int main(int args, char* argv) //��Ʈ�� ����Ʈ, int args : �ܼ� �󿡼� Ư�� ���� �޾ƿ� / char argv :  �ܼ� �󿡼� �������� �޾ƿ�
//{
//	
//	//int : ������
//	//int* a =  (int*)malloc(sizeof(int)*3) ; //�������� ������ ���� �󸶳� �����ؼ� �޸𸮸� ����ϰڴٴ� ������ �ǹ�., (int*)�� ����ȯ ����
//	//int b = 1;
//
//	//scanf("%d", &a);
//	//scanf("%d", &b);
//
//	//printf("%d", a + b);
//	 
//	
//
//
//	return 0;
//
//	
//}


int PlayerX = 1;
int PlayerY = 1;

int map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int Input()
{
	int keyCode =  getch();

	return keyCode;

}

void Tick(int keyCode)
{
	switch (keyCode)
	{
	case RIGHT:
		PlayerX++;
		if (PlayerX >= 10)
		{
			printf("d", map[][9]);
		}
		break;
	case LEFT:
		PlayerX--;
		break;
	case UP:
		PlayerY--;
		break;
	case DOWN:
		PlayerY++;
		break;
	}

}

void Draw()
{
	system("cls");
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			if (x == PlayerX && y == PlayerY)
			{
				printf("@ ");
			}
			else
			{
				printf("%d ", map[y][x]);
			}

			
		}
		printf("\n");
	}
}







int main()
{
	while (1)
	{
		int keyCode = Input();
		Tick(keyCode);
		Draw();
	}
}