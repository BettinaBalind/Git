#include <stdio.h>

size_t my_strlen(char *s)

{
	 char *p = s;
	while(*p){
		++p;
	}
	return (p-s);
}
int factorial(int n){
	int i;
	int temp=1;
	for(i=n; i>0; i--){
		temp*=i;
	}
	return temp;
}

int main(void)
{
	int i;
	int n;	
	char *s[] = {"Git tutorials","Tutorials Point"};
	for(i=0;i<2;++i){
		printf("string length os %s=%d\n", s[i], my_strlen(s[i]));
	}
	scanf("%d", &n);
	factorial(n);
	return 0;
}