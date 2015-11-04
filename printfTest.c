#include <stdio.h>

void main(void)
{
	int Int = 10;
	char Char = '{';
	float Float = 4.356;
	double Double = 234.3453453;
	char string[] = "this is a string\n";

	printf("%d\n", Int);
	printf("%c\n", Char);
	printf("%f\n", Float);
	printf("%+4.4f\n", Double);
	printf("%s", string);
}
