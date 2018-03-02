#include <stdio.h>
#include <locale.h>
#include<time.h>
#include<iostream>
int i;
void ZapolnenieMass(int *m, int *val)
{
	for (i = 0; i < *val; i++)
	{
		m[i] = -30 + rand() % 100;
	}
}
void printMass(int *m, int *val)
{
	for (i = 0; i < *val; i++)
	{
		printf("%d\t", m[i]);
	}
	printf("\n");
}
void SummaMass(int *m, int *val, int*chek)
{
	for (i = 0; i < *val; i++)
	{
		*chek += m[i];
	}
}
void printMassObr(int *m, int *val)
{
	for (i = *val - 1; i >= 0; i--)
	{
		printf("%d\t", *(m + i));
	}
	printf("\n");
}
void SortirovkaMassUvelichrnie(int *m, int *val)
{
	int j,temp;
	for (i = 0; i < *val; i++)
	{
		for (j = *val - 1; j > i; j--)
		{
			if (m[j] < m[j - 1])
			{
				temp = m[j];
				m[j] = m[j - 1];
				m[j - 1] = temp;
			}
		}
	}
}
void SortirovkaMassUbivanie(int *m, int *val)
{
	int j, temp;
	for (i = 0; i < *val; i++)
	{
		for (j = *val - 1; j > i; j--)
		{
			if (m[j] > m[j - 1])
			{
				temp = m[j];
				m[j] = m[j - 1];
				m[j - 1] = temp;
			}
		}
	}
}
int probegMass(int *m, int *val)
{
	int f = 0;
	for (i = 0; i < *val; i++)
		if (m[i] < 0)
		{
			f++;
			break;
		}

	return (f > 0) ? 1 : 0;
}
void copyMass(int *m, int *val, int *copyM)
{
	for (i = 0; i < *val; i++)
	{
		*(copyM+i) = *(m+i);
	}
}
