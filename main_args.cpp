#include <stdio.h>
#include <windows.h>

int main (int argc, char *argv[]) { // можно также примен€ть форму вида: int main (int argc, char **argv) {...}
	
	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
	
	
	
	int count;
	printf (" оличество аргументов, указанных в командной строке: %d\n", argc - 1); 
	for (count = 1; count < argc; count++)
		printf ("%d: %s\n", count, argv[count]);
	printf ("\n");
	
	return 0;
	
}
