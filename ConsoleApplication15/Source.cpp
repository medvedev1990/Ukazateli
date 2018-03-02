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
		printf("Введите номер задания: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.	Напишите программу, чтобы вычислить сумму всех элементов в массиве с помощью указателей*/
			int mass[10];
			int val = 10;
			int summa = 0;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			SummaMass(mass, &val, &summa);
			printf("Сумма всех элементов массива = %d\n", summa);
		}
		break;
		case 2:
		{
			/*2.	Напишите программу, чтобы напечатать элементы массива в обратном порядке*/
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
			/*3.	Напишите программу, которая сортирует список целых чисел в порядке возрастания.
			Однако, если в командной строке присутствует отрицательное число,
			ваша программа должна сортировать список в порядке убывания.
			(Вы можете использовать любую процедуру сортировки, которую вы хотите)*/
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
			/*4.	Пользуясь двумя указателями на массив целых чисел,
			скопировать один массив в другой.
			Использовать в программе арифметику указателей для продвижения по массиву,
			а также оператор разыменования.*/
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
			/*5.	Пользуясь указателем на массив целых чисел,
			изменить порядок следования элементов массива на противоположный.
			Использовать в программе арифметику указателей для продвижения по массиву,
			а также оператор разыменования.*/
			int mass[10];
			int val = 10;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
			printMassObr(mass, &val);
		}
		break;
		case 6:
		{
			/*6.	Написать функцию, которая получает указатель на массив 
			и его размер, и возвращает количество отрицательных, 
			положительных и нулевых элементов массива.*/
			int mass[10];
			int val = 10;
			ZapolnenieMass(mass, &val);
			printMass(mass, &val);
		}
		break;
		default:printf("Нет такого задания\n");
			break;
		}
		printf("продолжить? 1-Да 2 - Нет: ");
		scanf("%d", &exit);

	} while (exit == 1);

}
