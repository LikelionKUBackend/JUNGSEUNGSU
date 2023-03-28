#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void sel_sort(int* arr)

{
	int temp = 0;
	temp = *arr;

	for (int k = 0; k < 50; k++)
	{
		temp = k;
		int T = { 0 };
		for (int p = k+1; p < 50; p++)
		{
			temp = (arr[temp] <= arr[p]) ? temp : p ;
		}
		
		T = arr[k];
		arr[k] = arr[temp];
		arr[temp] = T;
	}







}

int main(void)
{
	srand(time(NULL));
	int random = 0;
	int i = 0;
	int arr[100] = { 0 };
	

	for (i = 0; i < 100; i++)
	{
		random =rand() % 100;
		arr[i] = random;
		printf("%02d\t",arr[i]);

		if((i % 10 == 0) & i != 0)
		{
			printf("\n");
		}
	}

	sel_sort(arr);


	printf("\n\n=========================================================================================================\n\n");

	for (i = 0; i < 100; i++)
	{
		printf("%02d\t", arr[i]);
		if ((i % 10 == 0)&i!=0)
		{
			printf("\n");
		}
	}

}