#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 40
#define MAX 41

int main (int argc, char ** argv) {
	
	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
	
	/*
	
	int ch;
	FILE * fp;
	fp = fopen ("karma.txt", "r");
	while ((ch = getc(fp)) != EOF)
		putchar (ch);
	
	int res = fclose (fp);
	
	if (res == 0)
		puts ("���� ��� ������� ������!");
	
	
	
	
	
	
	
	
	FILE *in, *out; // ��� ��������� �� ����.
	int ch, count = 0;
	char name[LEN];
	
	if (argc < 2) { // �������� ���������� ��������� ������
		fprintf (stderr, "�������������: %s ���_�����\n", argv[0]);
		exit (1);
	}
	
	if ((in = fopen(argv[1], "r")) == NULL) {
		fprintf (stderr, "�� ������ ������� ���� \"%s \"\n", argv[1]);
		exit (1);
	}
	
	strncpy (name, argv[1], LEN);
	name[LEN - 5] = '\0';
	strcat (name, ".red");
	if ((out = fopen (name, "w")) == NULL) {
		fprintf (stderr, "�� ������� ������� �������� ����");
		exit (3);
	}
	
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc (ch, out);
	fclose (in);
	fclose (out);
	
	
	
	
	
	
	
	
	
	
	int ch;
	FILE * fp;
	char text[50];
	
	
	fp = fopen ("karma.txt", "a+");
	
	if (fp == NULL)
		exit (1);
	
	puts ("���� ������ ���-�� �������� � ����, ������� ��� �����:");
	
	while ((fscanf (stdin, "%s\n", text) == 1) && text[0] != '#')
		fprintf (fp, "%s\n", text);
			
	fclose (fp);
	
	
	
	
	
	
	
	
	
	long count, last;
	char ch;
	
	FILE * fp;
	fp = fopen ("karma.txt", "rb");
	fseek (fp, 0, SEEK_END);
	last = ftell (fp);
	
	long i;
	for (i = 1L; i <= last; i++) {
		fseek (fp, -i, SEEK_END);
		ch = getc (fp);
		if (ch != '\032' && ch != '\r')
			putchar(ch);
	}
	putchar (ch);
	fclose (fp);
	
	*/
	
	
	
	
	
	
	
	
	// �������� ������ �� �����: char ch;
	//							 ch = getc (fp); // fp - ��������� �� ����
	// putc (ch, fp); // fp - ��������� �� ����. ��������� ������ � ����.
	
	
	
	
	
	
	
	
	/*
	
	FILE* fp;
	char ch;
	
	fp = fopen ("karma.txt", "r");
	
	fseek(fp, 4, SEEK_SET); //������� ������ � ��������� �������. 
	
	// SEEK_SET - �������� ������������� �� ������ �����.
	// SEEK_CUR - �������� ������������� �� ������� �������.
	// SEEK_END - �������� ������������� �� ����� �����.
	
	ch = getc(fp);
	putchar(ch);
	fclose (fp);
	
	*/
	
	
	
	
	
	
	/*
	
	FILE * fp;
	fp = fopen ("karma.txt", "r");
	fseek (fp, 2, SEEK_SET);
	
	int n = ftell (fp); // ftell (fp) - ���������� �������� �������, ����� �������� ����� ������. �������� ��������� � fseek(), �.�.
						// �������� ��������� � fseek(), �.�. �������� 1 �������� (fp).
	fclose (fp);
	printf ("%d", n);
	
	*/
	
	
	
	
	
	
	// ��������� ���������
	
	/*
	
	FILE* fp;
	fp = fopen ("karma.txt", "r");
	char ch;
	int amount = 0, i;
	
	while ((ch = getc(fp)) != EOF)
		amount++;
	fseek (fp, 0, SEEK_SET);
	for (i = amount-1; i >= 0; i--) {
		fseek (fp, i, SEEK_SET);
		ch = getc (fp);
		putchar (ch);
	}
	
	
	
	
	
	
	   int i=0;
  
   while (1)
   {    
      printf ("\r%d",i);
      //fflush (stdout);
      sleep (1);
      i++;
   }
   
   
   
   
   

	FILE * fp = fopen ("karma.txt", "r");
	char ch;	
	int i = 0;
	while ((ch = getc(fp)) != EOF) {
		
		ungetc ('Z', fp); // ������������ ������� �� ������� �����. ������� ch ���������� �� Z.
		i++;
		
		
		putchar(ch);
		sleep (1);
	}
	
	fclose (fp);


	
	
	
	
	
	
	FILE * in = fopen ("karma.txt", "a");
	//FILE * out = fopen ("tokarma.txt", "r");
	char out[128] = "";
	setvbuf(in, out, _IOFBF, 128); //������ ���� �� � ����, � � ����� out[128];
	char ch;
	int i = 0;
	
	while ((ch = getchar()) != '#') {
		putc (ch, in);
	}	
	
	puts ("DATA IN FILE:");
	while (getc(in) != EOF)
		putchar(ch);
	putchar('\n');
	puts ("DATA IN BUFFER:");
	puts (out);
	fclose (in);
	
	
	
	
	
	
	
	
	
	FILE * in = fopen ("karma.txt", "r");
	//FILE * out = fopen ("tokarma.txt", "a");
	char out[20] = "";
	fread (out, sizeof (char), 20, in); // - ������ � ��������� ���� ������! 
// fread ((������, � ������� ������� ������), ��� ������ ��������, ���������� ���������, (��������� �� ����, �� �������� ������� ������));
// fwrite (�� �� ���������, ��� � � fread);	
	
	fclose (in);
	puts (out);
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}
