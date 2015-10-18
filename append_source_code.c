#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	if(argc != 3) {
		printf("No specified files!\n");
		return 1;
	}

/*	char command[128] = "";
	strcat(command, "gcc ");
	strcat(command, argv[1]);
	strcat(command, " -o ");
	strcat(command, argv[2]);
	system(command);*/

	FILE *in = fopen(argv[1], "rb");
	FILE *out = fopen(argv[2], "ab");
	if(!in || !out) {
		printf("File open failed!\n");
		return 2;
	}

	int size = ftell(out);
	char ch;
	while((ch = fgetc(in)) != EOF)
		fputc(ch, out);
	fwrite(&size, 1, 4, out);
	fclose(out);
	fclose(in);
	return 0;
}
