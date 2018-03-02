#include <stdio.h>
#include <locale.h>
#include<time.h>
#include<iostream>
#include"Header.h"


void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int n, exit;
	do
	{
		printf("������� ����� �������: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.	�������� ���������, ����� ��������� ����� ���� ��������� � ������� � ������� ����������*/
			int mass[10];
			int val = 10;
			int summa = 0;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			SummaMass(mass, &val, &summa);
			printf("����� ���� ��������� ������� = %d\n", summa);
		}
		break;
		case 2:
		{
			/*2.	�������� ���������, ����� ���������� �������� ������� � �������� �������*/
			int mass[10];
			int val = 10;
			int summa = 0;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			printMassObr(mass, &val);
		}
		break;
		case 3:
		{
			/*3.	�������� ���������, ������� ��������� ������ ����� ����� � ������� �����������.
			������, ���� � ��������� ������ ������������ ������������� �����,
			���� ��������� ������ ����������� ������ � ������� ��������.
			(�� ������ ������������ ����� ��������� ����������, ������� �� ������)*/
			int val = 10;
			int mass[10];
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			if (probegMass(mass, &val) == 0)
			{
				SortirovkaMassUvelichrnie(mass, &val);
				printMass(mass, &val);
			}
			else
			{
				SortirovkaMassUbivanie(mass, &val);
				printMass(mass, &val);
			}
		}
		break;
		case 4:
		{
			/*4.	��������� ����� ����������� �� ������ ����� �����,
			����������� ���� ������ � ������.
			������������ � ��������� ���������� ���������� ��� ����������� �� �������,
			� ����� �������� �������������.*/
			int mass[10];
			int copyMass1[10];
			int val = 10;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			copyMass(mass, &val, copyMass1);
			printMass(copyMass1, &val);
		}
		break;
		case 5:
		{
			/*5.	��������� ���������� �� ������ ����� �����,
			�������� ������� ���������� ��������� ������� �� ���������������.
			������������ � ��������� ���������� ���������� ��� ����������� �� �������,
			� ����� �������� �������������.*/
			int mass[10];
			int val = 10;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			printMassObr(mass, &val);
		}
		break;
		case 6:
		{
			/*6.	�������� �������, ������� �������� ��������� �� ������ 
			� ��� ������, � ���������� ���������� �������������, 
			������������� � ������� ��������� �������.*/
			int mass[10];
			int val = 10;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
		}
		break;
		default:printf("��� ������ �������\n");
			break;
		}
		printf("����������? 1-�� 2 - ���: ");
		scanf("%d", &exit);

	} while (exit == 1);

}
