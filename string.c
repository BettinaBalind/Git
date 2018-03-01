#include <stdio.h>

int my_strlen(char *s)

{
	 char *p = s;
	while(*p){
		++p;
	}
	return (p-s);
}

int main(void)
{
	int i;
	char *s[] = {"Git tutorials","Tutorials Point"};
	for(i=0;i<2;++i){
		printf("string length os %s=%d\n", s[i], my_strlen(s[i]));
	}
	return 0;
}