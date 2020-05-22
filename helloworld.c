#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	FILE *fp;
	char buf[500];
	if  (fp = fopen("d/abc.txt", "r")) {
		fscanf(fp, "%s", buf);
		printf("%s", buf);
	}else{
		printf("can't find the file");
	}
	printf("\nThis is the end;");
	return 0;
}
