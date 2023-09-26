
#include <stdio.h>

int main(void)
{
	// escape charactors - \n \t \\ \' \"
	
	printf("Hello World\n");
	printf("\n");
	printf("Hello\nWorld");
	printf("\n");
	printf("Hello\tWorld");
	printf("\n");
	printf("\\Hello\\World\\");
	printf("\n");
	printf("\'Hello\' \"World\"");
	printf("\n");
	
    return 0;
}
