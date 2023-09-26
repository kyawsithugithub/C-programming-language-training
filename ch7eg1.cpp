
#include <stdio.h>

int main(void)
{
	// Decision making,(or) selection
	int mark = 70;
	
	if (mark < 40)
	{
		printf("You fail\n");
	}
	
	if (mark < 40)
	{
		printf("You fail\n");
	} else
	{
		printf("You pass\n");
	}
	
	if (mark < 40)
	{
		printf("Your grade is D\n");
	} else if (mark < 60)
	{
		printf("Your grade is C\n");
	} else if (mark < 80)
	{
		printf("Your grade is B\n");
	} else
	{
		printf("Your grade is A\n");
	}
	
    return 0;
}
