#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	FILE *fp;
	char buf[500];
	if  (fp = fopen("abc.txt", "r")) {
		fscanf(fp, "%s", buf);
		printf("%s", buf);
	}
	return 0;
}
