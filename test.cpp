#include <stdio.h>


int main (void) {

	FILE * fp = fopen ("testfile.txt", "r");
	
	char bracket [100];
	char ch = '\0';
	//fscanf (fp, "%c", &ch);
	ungetc ('0', fp);
	fscanf (fp, "%s", bracket);

	printf ("STR: %s\n", bracket);

	return 0;
}