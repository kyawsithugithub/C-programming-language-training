
#include <stdio.h>

int main(void)
{
	// Looping
	// i = i+1; i++; ++i; i+=1;
	
	int num = 1;
	printf("num value: %d\n", num);
	num++;
	printf("num value: %d\n", num);
	
	for (int i = 1; i < 10; i++)
	{
		printf("Hello World\n");
	}
	
	printf("\n");
	for (int i = 1; i < 10; i = i+1)
	{
		printf("Hello Noble\n");
	}
	
	
	
    return 0;
}
