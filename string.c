#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[1000];
	int l,i;
	gets(str);
	l=strlen(str);
	for(i=l-1;i>=0;i--)
	printf("%c",str[i]);
	return 0;
}
