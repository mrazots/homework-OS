#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>


int main() {
	DIR *dp = opendir("tmp");
	struct dirent *direntry;

	long inode[256];
	char files[256][30][256];
	int c = 0;
	int cs[256];
	memset(cs, 0, 256);

	while((direntry = readdir(dp)) != NULL) {
		int i;
		for (i = 0; i < c; ++i)
			if(direntry->d_ino == inode[i]) break;
		if (i == c)
			inode[c++] = direntry->d_ino;
		strcpy(files[i][cs[i]++], direntry->d_name);
	}

	for (int i = 0; i < c; ++i)
		if (cs[i] > 1) {
			printf("inode number: %ld\n", inode[i]);
			for (int j = 0; j < cs[i]; ++j)
				printf("%s\n", files[i][j]);
		}
}
