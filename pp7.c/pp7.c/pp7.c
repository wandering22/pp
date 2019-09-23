#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
		int A[] = { 1, 3, 5, 7, 9 };
		int B[] = { 3, 4, 5, 6, 7 };
		int tmp;
		int i = 0;
		for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
		{
			tmp = A[i];
		    A[i] = B[i];
			B[i] = tmp;
		}
		for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
		{
			printf("%d ", A[i]);
		}
		printf("\n");
		for (i = 0; i < sizeof(A) / sizeof(A[0]); i++)
		{
			printf("%d ", B[i]);
		}
		printf("\n");
		return 0;
	}

