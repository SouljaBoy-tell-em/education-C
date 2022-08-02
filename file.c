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
		puts ("Файл был успешно закрыт!");
	
	
	
	
	
	
	
	
	FILE *in, *out; // два указателя на файл.
	int ch, count = 0;
	char name[LEN];
	
	if (argc < 2) { // проверка аргументов командной строки
		fprintf (stderr, "Использование: %s имя_файла\n", argv[0]);
		exit (1);
	}
	
	if ((in = fopen(argv[1], "r")) == NULL) {
		fprintf (stderr, "Не удаётся открыть файл \"%s \"\n", argv[1]);
		exit (1);
	}
	
	strncpy (name, argv[1], LEN);
	name[LEN - 5] = '\0';
	strcat (name, ".red");
	if ((out = fopen (name, "w")) == NULL) {
		fprintf (stderr, "Не удается открыть выходной файл");
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
	
	puts ("Если хотите что-то добавить в файл, введите это здесь:");
	
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
	
	
	
	
	
	
	
	
	// получить символ из файла: char ch;
	//							 ch = getc (fp); // fp - указатель на файл
	// putc (ch, fp); // fp - указатель на файл. Поместить символ в файл.
	
	
	
	
	
	
	
	
	/*
	
	FILE* fp;
	char ch;
	
	fp = fopen ("karma.txt", "r");
	
	fseek(fp, 4, SEEK_SET); //смещает курсор в некоторую позицию. 
	
	// SEEK_SET - смещение отсчитывается от начала файла.
	// SEEK_CUR - смещение отсчитывается от текущей позиции.
	// SEEK_END - смещение отсчитывается от конца файла.
	
	ch = getc(fp);
	putchar(ch);
	fclose (fp);
	
	*/
	
	
	
	
	
	
	/*
	
	FILE * fp;
	fp = fopen ("karma.txt", "r");
	fseek (fp, 2, SEEK_SET);
	
	int n = ftell (fp); // ftell (fp) - возвращает значение символа, после которого стоит курсор. Работает совместно с fseek(), т.к.
						// Работает совместно с fseek(), т.к. получает 1 аргумент (fp).
	fclose (fp);
	printf ("%d", n);
	
	*/
	
	
	
	
	
	
	// ПЕРЕВОРОТ СООБЩЕНИЯ
	
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
		
		ungetc ('Z', fp); // заталкивание обратно во входной поток. Условно ch заменяется на Z.
		i++;
		
		
		putchar(ch);
		sleep (1);
	}
	
	fclose (fp);


	
	
	
	
	
	
	FILE * in = fopen ("karma.txt", "a");
	//FILE * out = fopen ("tokarma.txt", "r");
	char out[128] = "";
	setvbuf(in, out, _IOFBF, 128); //запись идет не в файл, а в буфер out[128];
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
	fread (out, sizeof (char), 20, in); // - запись в некоторый блок памяти! 
// fread ((массив, в который ведется запись), вес одного элемента, количество элементов, (указатель на файл, из которого ведется запись));
// fwrite (те же аргументы, что в и fread);	
	
	fclose (in);
	puts (out);
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}
