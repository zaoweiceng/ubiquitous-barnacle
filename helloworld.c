#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
	FILE *fp;
	char buf[500];
	if  (fp = fopen("/usr/src/test/abc.txt", "r")) {
		fscanf(fp, "%s", buf);
		printf("%s", buf);
	}else{
		printf("can't find the file\n");
	}
	printf("\n当前文件目录：%s;\n目录下的内容：\n", argv[0]);
	DIR    *dir;
    struct    dirent    *ptr;
    dir = opendir("/usr/src/test");
    
    while((ptr = readdir(dir)) != NULL)
        printf("%s\n", ptr->d_name);
    closedir(dir);
	return 0;
}
