#include<stdio.h>
#include<stdlib.h>
char change(char);
int main()
{
	char input;
	char output;
	scanf_s("%c", &input);
	output = change(input);
	printf("%c\n", output);
	system("pause");
	return 0;
}

char change(char a)
{
	char QQ;
	QQ = a + 32;
}