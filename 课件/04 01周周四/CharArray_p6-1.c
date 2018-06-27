#include <STDIO.H>

int main()
{
    char *p="I love china!"; 
    for(; *p!='\0'; p++) 
		printf("%c", *p);
	return 0;
}
