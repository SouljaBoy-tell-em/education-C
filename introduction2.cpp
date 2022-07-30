#include <stdio.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <iso646.h>
#include <stdlib.h>
#include <windows.h>
// #include <stdatomic.h>

#define PRAISE "Your name is the best!"
#define NAME value
#define BEEP '\a'
//#define LLONG_MAX
#define PAGES 931
#define SEC_PER_MIN 60
#define SPACE ' '
#define DOT '.'
#define COVERAGE 350
#define SIZE 4
#define SIZE1 10
#define SIZE2 5
#define ROWS 3
#define COLS 4
#define MSG "I'm the best!"



//int value = 24; // переменные можно объявлять вне функций.  Эту переменную можно использовать во всех файлах,
											// где подключен этот файл.

//static int value1 = 25; // эту переменную можно использовать только в этом файле.

long sum_squares (long start, long end);
long get_long (void);
double power (double x, int exp);
void paint (char ch, int height, int width);
bool detector (long MIN, long MAX, long start, long end);
char get_first(void);
char get_choise (void);
int imin (int n, int m);
int what_if (int n);
int test (int, int);
void pointer_traid (int*, int*);
int sum (int* ar, int size);
int sump (int* start, int* end);
void show_array(const double array[], int);
void sqr_array (double array[], int size);
void somefunction (int (*pt)[4]); // альтернативное объявдение: void somefunction (int pt [][4]);
void sum_rows (int ar[][COLS], int rows);
void sum_cols (int ar[][COLS], int cols);
int sum2d (int ar[][COLS]);
void put1 (const char * ar);
void fit (char * ar, int size);
void static_func (void);

int main (void) {
	
	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
	
	
	//char name[40];
	
	//const float a = 3852.99;
	
	//const int B = 6;
	
	//printf("what is your name?\n");
	
	//scanf("%s", name);
	
	/*
	printf("Hello, %s! %s\n", name, PRAISE);
	printf("Your name contains %d simbols and take in memory %d.\n", strlen(name), sizeof name);
	printf("Cool fraze contains %d simbols", strlen(PRAISE));
	printf("and take in memory %d.\n", sizeof(PRAISE));
	*/
	
	//printf("%s", NAME);
	
	//printf("%c", BEEP);
	
	//printf("%lld\n", LLONG_MAX);
	
	//printf("*%4.34f*\n", a);
	
	//printf("*%-4d*\n", PAGES);
	
	//printf("%20.10d", B);
	
	//int bph2o = 212;
	
	//int rv = printf("%d градусов по Фаренгейту соответствует точке кипения воды.\n", bph2o);
	
	//printf("%d", rv);
	
	/*
	
	printf("Один из способов ввода \
	длинных строк\n");
	
	printf("Ещё один из способов ввода"
	" длинных строк");
	
	
	
	int s;
	
	scanf("%d", &s);
	
	printf("%d", s);
	
	
	
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	
	//printf("Widht?\n");
	//scanf("%d", &width);
	//printf("Ecuation is: %*d:\n", width, number);	// вместо звездочки подставляется ширина поля для ввода. Т.е. вместо звездочек фактически идут числа.
	
	printf("Input width and precision: \n");
	scanf("%d %d", &width, &precision);
	
	printf("%*.*f", width, precision, weight);

	
	int num = 1;
	
	while (num < 20) {
		
		printf("%3d %10d\n", num, num * num);
		num = num + 1;
		
	}
	
	
	double num = 1;
	int cou = 1;
	double sum = 1;
	
	printf("number      square       add       all\n");
	printf("         of number    grains    grains\n");
	
	while (cou <= 64) {
		
		printf("%6d %11d %8.2e %6.2e \n", cou, cou * cou, num, sum);
				
		num = num * 2;
		sum = sum + num;
		cou = cou + 1;
		
	}
	
	
	
	//printf("%d", 12 / 3 * 2);
	
	char n = '0';
	size_t intsize = sizeof(char);
	
	
	printf("%c\n%zd\n%zd", n, sizeof n, intsize);

	*/
	
	//typedef double semen; // альтернативный тип. Чтобы создать альт.тип, нужно: typedef + (тип) + (название альт.типа);
	///typedef unsigned int size_t;
	
	//size_t lol = 22;
	
	//printf("%hd", lol);
	
	//semen alex = 228.228;
	
	//printf("%10.3lf", alex);
	
	/*
	
	int sec;
	bool a = 1;
	
	printf("Input some seconds:\n");
	
	scanf("%d", &sec);
	
	while (sec > 0) {
		
		printf("Minutes: %d\n", sec / SEC_PER_MIN);
		printf("Seconds: %d\n", sec % SEC_PER_MIN);
		printf("Input data again:\n");
		scanf("%d", &sec);
		
	}
	
	printf("Input value = 0");
	
	
	int a = 1, b = 1;
	int aplus, plusb;
	
	aplus = a++; // a++ - до того как произошло изменение а;
	plusb = ++b; // ++a - после того, как произошло изменение а;
	
	printf("a    aplus   b    plusb\n");
	printf("%d %6d %5d %6d\n", a, aplus, b, plusb);
	
	*/

	/*
		
	int y = 2;
	int n = 3;
	
	int res1 = (y + n++) * 6;
	int res2 = (y + ++n) * 6;
	
	printf("%d\n%d\n", res1, res2);
	printf("%d\n%d\n", (y + n++) * 6, (y + ++n) * 6);
	
	*/
	
	//int st;
	
	//printf("%d\n", st = 50);
	
	/*

	char ch;
	int i;
	float fl;
	
	fl = i = ch = 'C';
	
	printf("ch = %c \ni = %d \nfl = %2.2f\n", ch, i, fl);
	ch++;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c \ni = %d \nfl = %2.2f\n", ch, i, fl);
	
	ch = 521224;
	
	printf("%c", ch);
	
	long sum = 0;
	int status = 1;
	
	while (status == 1) {
	
		long num;
		sum += num;
		printf("Enter an integer for later summation:\n");
		status = scanf("%Ld", &num);
		
	}
	
	printf("Full sum: %Ld", sum);
	
	int equation;
	int flag = scanf("%d", &equation);
	
	printf("%d", flag);
	
	
	
	long num;
	
	while (scanf("%Ld", &num) == 1) {
		
		printf("Number entered! This number is: %d\n", num);
		
	}
	
	printf("Not number entered!");
	
	
	
	int n = 0;
	
	while (n < 5) // цикл while видит без фиг.скобок лишь код, заканчивающийся первой ';'
		printf("n = %d\n", n);
		n++;
	
	
	
	int n = 0;
	
	while (n++ < 3); // После цикла while() стоит ';' и цикл является пустым
		printf("n = %d\n", n);
	printf("It's all this program can do!");
	
	
	
	int n;
	
	while (scanf("%d", &n) == 1)
		continue;
		
	
	const double PI = 3.14159;
	double value;
	
	scanf("%lf", &value);
	
	while (fabs(value - PI) > 0.0001) {
		
		printf("Input return! \n");
		scanf("%lf", &value);
		
	}
	
	printf("It's OK, bro! ");
	
	
	
	int true_val, false_val;
	
	true_val = (10 > 2);
	false_val = (10 == 2);
	
	printf("True: %d\nFalse: %d\n", true_val, false_val);
		
	
		
	bool value;
	int n, sum = 0;
		
	printf("Input number for summation: \n");
	value = (scanf("%d", &n) == 1);
	
	while (value) {
		
		sum = sum + n;
		printf("Input number for summation: \n");
		value = scanf("%d", &n) == 1;
		
	}
	
	printf("Sum = %d", sum);
	
	*/
	
	// ЦИКЛ FOR // 
	
	/*
	
	int n = 0;
	
	for (printf("Input numbers: "); n != 8; )
		scanf("%d", &n);
	printf("You inputed the 8.");
	
	
	
	int a, b, end = 30;
	
	printf(" a     b\n");
	
	for (a = 0, b = 2; a < 30; ++a, b+=a) // 2 изменяющихся параметра допустимы.
		printf("%2d %5d\n", a, b);
	

	
	
	//ИНТЕРЕСНАЯ ФАКТ: 
	
	int c = (23, 34); 
	printf("%d\n", c);
	int x = 0, y = 1, z;
	
	z = (x, y); // выводит то, чему в итоге будет равен y. В качестве х может быть, например, аргумент, который например влияет на у.
	printf("%d\n", z);
	
	
	
	
	
	int a = 1;
	
	do { 
		a++;
		printf("Message output is %d\n", a);
		
	} while(a < -1);
	
	
	
	
	
	
	for(int i = 0; i < 6; i++) {
		
		for (int j = 'A' + i; j <= 'F'; j++) {
			
			printf("%c", j);
			
		}
		
		printf("\n");
		
	}
	
	
	
	
	int m, n, res_scanf;
	
	res_scanf = scanf("%d %d", &m, &n); // функция scanf возвращает число, равное числу правильно определенных переменных.
	
	printf("%d", res_scanf);
	
	*/
	
	
	
	//FOR FUNCTION POWER:
	
	/*
	
	double x;
	int exp;
	
	printf("Enter a number and it's degree: \n");
	
	while (scanf("%Lf %d", &x, &exp) == 2) {
		
		double xpow = power(x, exp);
		printf("Number %.2g and it's degree %d. OUTPUT: %.2g\nRepeat\n", x, exp, xpow);
		
	}
	
	printf("Input not number. THE END!");
	
	
	
	
	
	const int ZERO = 0;
	float temperature;
	int cold_days = 0, all_days = 0;
	
	printf("Input list of temperatures:\n");
	
	while (scanf("%f", &temperature) == 1) {
		
		all_days++;
		
		if (temperature < ZERO)
			cold_days++;
		
	}
	
	if (all_days == 0)
		printf("Data not get!\n");
	
	if (all_days > 0)
		printf("Cold days / all days: %.1f%%\n", 100 * (((float)cold_days/(float)all_days)));
	
	
	
	
	
	char ch;
	ch = getchar();
	
	while (ch != '\n') {
		
		if (ch == SPACE)
			putchar(ch);
			
		else
			putchar(ch + 1);	
		
		ch = getchar();
		
	}
	
	
	
	
	
	
	char ch;
	
	while ((ch = getchar()) != '\n') {
		
		if (isalpha(ch) == 1 or isalpha(ch) == 2) // isalpha - функция, которая возвращает ненулевое значение, если введена буква и нулевое - если не буква.
			putchar(ch + 1);					  // если введена буква в нижн.регистре - вернёт 1; если в верхнем - вернёт 2; 
		
		else
			putchar(ch);
		
	}
	
	
	
	
	
	
	
	char ch;
	int counter = 0;
	int counterQuotes = 0;
	
	while ((ch = getchar()) != DOT) {
		
		if (ch == '"')
			counterQuotes++;
		
		counter++;	
			
	}
	
	printf("Number of characters in a sentence: %d.\n" 
	"Number of characters in a sentence: without quotes: %d.", counter, counter - counterQuotes);
	
	
	
	
	
	
	// ПОДСЧЕТ СЛОВ В ПРЕДЛОЖЕНИИ:
	
	
	char ch, space;
	bool flag_space = true;
	bool flag_word = true;
	int counter_words = 0;
	
	printf("Input your sentence:\n");
	
	while ((ch = getchar()) != '.') {
		
		if (!isspace(ch))
			flag_space = false;
			
		if (flag_space == false && flag_word == true && !isspace(space)) {
			flag_word = false;
			counter_words++;
		}
		
		if (isspace(ch) && flag_word == false)
			flag_word = true;
		
		space = ch;
		
	}
	
	printf("Amount words in this sentence: %d.", counter_words);
	

	
	
	
	
	// УНАРНЫЙ ОПЕРАТОР: х = выражение 1? выражение 2: выражение 3; <=> 
	
	// if (выражение 1):
	// 		х = выражение 1;
	//	else:
	//		x = выражение 2;
	
	
	int x = 1, y = 2;
	
	x = (x < y) ? -y: y; // если x < y, то х = -у = -2; если это не так, то х = у = -2;
	
	printf("%d", x);
	
	
	
	
	
	
	//КОЛИЧЕСТВО БАНОК КРАСКИ ДЛЯ ПОКРАСКИ ОПРЕДЕЛЕННОГО ЧИСЛА ФУТОВ
	
	int sq_feet, cans;
	
	printf("How many does feet need to paint? Input, please:\n");
	
	while (scanf("%d", &sq_feet) == 1) {
		
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE > 0) ? 1 : 0);
		
		printf("For paint %d feet, you need %d %s\n", sq_feet, cans, (cans % 10 == 1)? "can": "cans");
		
	}
	


	
	
	// СЛОВАРЬ ЖИВОТНЫХ:
	
	char ch;
	
	printf("Give me first letter of pet and I can show you title this pet.\n"
		   "Input # for completion of work.\n");
		   
	while ((ch = getchar()) != '#') {
		
		if (ch == '\n')
			continue;
		
		if (islower(ch)) {
			
			switch(ch) {
				
				case 'a':
					printf("antelope\n");
					break;
				
				case 'b':
					printf("beaver\n");
					break;
					
				default:
					printf("XZ =)\n");
					
			}
			
		}
		
		else
			printf("No lower register!\n");
		
		while (getchar() != '\n') // пропуск всех символов после первого символа.
			continue;
		
		printf("Input next letter for continue of program "
				"or press # for end of programm\n");
		
	}
	
	printf("Bye-bye!");	
	
	*/
	
	
	
	
	
	
	// ОПЕРАТОР GOTO: (ПОЛНАЯ ФИГНЯ). Оператор goto нужен для того, чтобы пропустить какой-то блок кода
	// создание метки происходит посредством: goto part; то, откуда начинается чтение кода: part:.
	
	/*
	***КОД***  - этот код будет выполнен.
	
	goto part;
	
	***КОД*** - этот код не будет выполнен (пропущен из-за оператора goto).
	
	part:
	
	***КОД*** - этот код будет выполнен.
	
	
	
	
	printf("1\n");
	
	goto part;
	
	printf("2\n");
	printf("3\n");
	printf("4\n");
	
	part:
	
	printf("5\n");
	
	
	
	
	
	
	
	//End Of File (EOF): EOF = ctrl + Z; (^Z).
	
	 
	 
	int ch;
	
	while ((ch = getchar()) != EOF) //get
		putchar(ch);
	
	
	
	
	
	
	int ch;
	FILE *fp;
	char fname[50]; //для чтения имени файла
	
	printf("Input name of file:\n");
	scanf("%s", fname);
	
	fp = fopen(fname, "r"); //чтение из файла
	
	if (fp == NULL) { // если попытка завершилась неудачей
		
		printf("File not found!\n");
		exit(1);	//выход из программы
		
	}
	
	while ((ch = getc(fp)) != EOF) // функция getc(fp) получает символы из открытого ранее файла
		putchar(ch);
	
	fclose(fp); //закрыть файл
	
	*/
	
	
	
	
	
	/*
	
	char ch;
	int height, width;
	
	while((ch = getchar()) != '\n') {
		
		if (scanf("%d%d", &height, &width) != 2)
			break;
			
		paint(ch, height, width);
		printf("Input again: char int1 int2\n");
		
		while (getchar() != '\n')
			continue;
		
	}
	
	printf("The end!");
	
	*/
	
	
	
	
	
	
	/*
	
	const long MIN = -1000000;
	const long MAX = 1000000;
	
	long start, end;
	
	printf ("Input lower bound:\n");
	start = get_long();
	printf ("Input upper bound:\n");
	end = get_long();

	bool status = detector(MIN, MAX, start, end);
	
	
	while (status != true) {
		
		printf ("Input lower bound:\n");
		start = get_long();
		printf ("Input upper bound:\n");
		end = get_long();
		
		status = detector(MIN, MAX, start, end);
		
	}
	
	
	printf ("%Ld", sum_squares(start, end));
	
	
	
	
	
	
	
	int ch;
	
	while ((ch = get_choise()) != 'q') {
		
		switch (ch) {
			
			case 'a':
				printf("A\n");
				break;
			
			case 'b':
				printf("B\n");
				break;
			
			case 'c':
				printf("C\n");
				break;
			
			default:
				printf("ERROR\n");
				break;
			
		}
		
	}
	
	printf ("You got out!");
	
	
	
	
	
	
	
	int z;
	
	while (scanf("%d", &z) == 1) {
		
		printf ("Function check differens parameters: %d\n", what_if(z));
		
	}
	
	printf ("The end!");
	
	
	
	
	
	
	//!!! ВВОД СИМВОЛОВ С ПРОПУСКОМ СТРОКИ, ОТСЛЕЖИВАНИЕ ВВОДА ЦЕЛОГО ЧИСЛА
	
	int n;
	
	while (scanf("%d", &n) != 1) {
		
		scanf("%*s");
		printf("Not number!\n");
		
	}
	
	
	
	
	
	
	// УКАЗАТЕЛИ
	
	int pooh;
	pooh = 24;
	
	printf ("%d\n%p\n", pooh, &pooh); // %p - спецификатор адресов
	
	
	
	
	int k = 22; // k - некоторая переменная
	int* l = &k; // int* - тип указателя. В этот тип можно записать адрес переменной. 
	int m = *l; //  переменная m получает значение k. Всё потому, что: m = *(&k) = k, т.е. (*&) - тождественное преобразование
	
	printf ("%d", m);
	x
	
	
	
	
	
	printf("Input X and Y:\n");
	int x, y;
	
	while (scanf("%d %d", &x, &y) == 2) {
		
		pointer_traid(&x, &y);	// function (&x, &y,...) ---> void function (int *x, int *y, ...)
		printf("x = %d, y = %d\nInput X and Y again:\n", x, y);
		
	}
	
	
	
	
	// МАССИВЫ
	
	int arr[6] = {0, 0, 1, 2, 2, 2}; // инициализация массива
	
	int arr1[] = {1, 2, 3, 4}; // другой формат инициализации массива
	
	arr[5] = 47;
	
	for (int i = 0; i < 6; i++)
		printf ("%d\n", arr[i]);
	
	
	
	
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) // если мы не знаем количества элементов в массиве (например, оно не фиксируется),
		printf ("In month number %d contains %d days.\n", i + 1, arr[i]); // то можно пойти через sizeof. sizeof arr - сколько занимает памяти весь массив.
													// sizeof arr[0] - сколько занимает памяти одна ячейка. Делим друг на друга и получаем число элементов.
	
	
	
	
	
	int arr[6];
	arr == &arr[0]; // это выражение является истинным. И arr, и &arr[0] представляют адрес в памяти, где находится первый элемент массива
	
	
	
	
	
	short dates [SIZE];
	short* pti;
	short* pti1;
	short index;
	double bills[SIZE];
	double* ptf;
	
	pti = dates;
	pti1 = &dates[0];
	ptf = bills;
	
	printf ("%23s %23s %23s\n", "short", "double", "short &");
	for (int i = 0; i < SIZE; i++)  {
		
		printf("%Pointers + %d: %10p %10p %10p\n", i, pti + i, ptf + i, pti1 + i);
		
	}
	
	
	
	
	
	// ЛОГИЧЕСКИЕ РАВЕНСТВА:
	// *dates + 2 == &dates[2] - значение 3-го элемента массива dates[]
	// *(dates + 2) == dates[2] - добавление 2 к значению первого элемента
	
	
	
	
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (int i = 0; i < sizeof arr / sizeof arr[0]; i++)
		printf ("Month №%d have %d days\n", i + 1, *(arr + i)); // т.е. *(arr + i) - это то же самое, что и arr[i]
		
	
	
	
	
	
	int marbles[5];
	int total = 0;
	
	int size = sizeof marbles / sizeof marbles[0];
	
	for (int i = 0; i < size; i++) {
		scanf("%d", &marbles[i]);
	}
	
	total = sum(marbles, size);
	printf("%d", total);
	
	
	
	
	int arr[SIZE1] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	
	printf("%d", sump(arr, arr + SIZE1));
	
	
	
	
	int urn[5] = {100, 200, 300, 400, 500};
	
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = urn; // указатель на массив urn. Фактически присваиваем адрес первого элемента массива (100).
	ptr2 = &urn[2]; // то же самое, но присваиваем адрес третьего элемента массива (300).
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); //значение указателя, разыменовывание, адрес указателя.
	
	ptr3 = ptr1 + 4;
	
	printf ("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));
	
	ptr1++;
	printf ("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	
	ptr2--;
	printf ("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	
	ptr1--;
	ptr2++;
	
	printf ("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n", ptr2, ptr1, ptr2 - ptr1);
	printf ("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
	
	double array[SIZE2] = {20.0, 17.66, 8.2, 15.3, 22.22};
	
	show_array (array, SIZE2);
	sqr_array (array, SIZE2);
	
	printf ("After:\n");
	
	for (int i = 0; i < SIZE2; i++)
		printf ("%.2Lf\n", *(array + i));
	
	
	
	
	
	
	
	
	int zippo[4][3] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
	int *table;
	
	for (int i = 0; i < 4; i++) { // в памяти выделяется условно квадрат, представляющий двумерный массив
							// и состоящий из ячеек памяти. У каждой ячейки памяти есть свой адрес. 
		for (int j = 0; j < 3; j++) { 
			
			table = &zippo[i][j];
			printf ("Coords: (%d, %d). Adress = %p ", i, j, table);
			printf ("*(*(zippo + %d) + %d) = %d]", i, j, *(*(zippo + i) + j)); // получение значений в определённых ячейках.
			
		}
		
		printf ("\n");
		
	}
	
	int *str;
	
	for (int i = 0; i < 4; i++) { // здесь мы смотрим на 1-е элементы каждой строки. 
					// у адресов меняются конечные цифры. Они перескакивают через 12 (С),
		str = zippo[i]; // так как каждая строка массива состоит из трёх элементов типа int, который весит 4 байта.
		printf ("Adress (Str) = %p. ", str);
		str = &zippo[i][0];
		printf ("Adress [%d][0] = %p. ", i, str);
		str = *(zippo + i);
		printf ("Adress *(zippo + %d) = %p\n", i, str);
		
	}
	
	int (*pz)[3]; // фактически указатель на первый элемент массива (на начало массива; весь массив)
	
	pz = zippo;
	
	printf ("Adress of arrive = %p. Value of arrive (pz = zippo) = %d\n", pz, *pz);
	
	int * pax[2] // массив из двух указателей на тип int.
	
	
	
	
	
	int n = 5;
	double x;
	int *pl = &n;
	double *pd = &x;
	x = n; // здесь всё ок, в принципе
	//pd = pl; // ошибка на этапе компиляции
	
	
	
	
	
	
	
	
	
	int junk[ROWS][COLS] = {{2, 4, 6, 8}, 
							{3, 5, 7, 9}, 
							{12, 10, 8, 6}
						   };
	
	sum_rows(junk, ROWS);
	sum_cols(junk, COLS);
	printf ("Sum of matrix = %d", sum2d(junk));
	
	
	
	
	
	
	
	
	
	typedef int arr4[4]; // массив arr4 из 4-х значений типа int.
	typedef arr4 arr3x4[3]; //массив из 3-х элементов, каждый из которых является массивом на 4 элемента.
	
	*/
	
	
	// ПРОТОТИПЫ:
	/*
	
	int sum2 (arr3x4 ar, int rows); // то же, что и следующее.
	int sum2 (int ar[3][4], int rows); // то же, что и следующее.
	int sum2 (int ar[][4], int rows); // стандартная форма.
	
	
	
	
	
	
	
	
	
	char * pt1, * pt2;
	char words[81] = "I'm string";
	
	pt1 = words;
	pt2 = &words[1];
	printf ("pt1 = %p\npt2 = %p\n", pt1, pt2);
	puts(pt1);
	
	
	
	
	char ar[] = MSG;
	const char * pt = MSG;
	
	printf ("MSG char = ");
	for (int i = 0; i < 14; i++)
		printf ("%c", ar[i]);
	printf ("\nMSG pointer = ");
	for (int i = 0; i < 14; i++)
		printf ("%c", *(pt + i));
	


	
	
	char arr[20] = "Hello, world!";
	
	char * pt;
	
	pt = &arr[0];
	
	printf ("%p\n%p\n\n", arr, pt);
	printf ("%s", pt);
	



	
	char words[5];
	
	gets(words); // считывает строку, но не считывает её длину. 
					// может случиться переполнение памяти и займётся случайная память компьютера,
					// не выделенная под массив words[5]
	puts(words); // выводит строку, добавляя перенос на следующую строку.
	
	
	
	
	
	
	
	char words[15];
	puts ("Input str:");
	fgets(words, 15, stdin); // fgets() считывает строку. Принимает 3 аргумента: 
							 // fgets(переменная, максимальная длина строки, файл, из которого производится чтение);
							 // если чтение производится из консоли, то стоит указать в качестве 3 аргумента: stdin.
	puts (words);	// уже знакомы
	fputs (words, stdout); // fputs()  выводит строку. Принимает 2 аргумента:
						   // fputs(переменная, файл, куда идёт запись);
						   // если запись идёт обратно в строку, то стоит указать в качестве 2 аргумента: stdout.
	
	
	
	
	
	
	
	char words[10];
	
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n') // пока функция fgets не встретит конец файла
		fputs (words, stdout);							// или пока первым не будет нажат enter
	puts ("The end!");
	
	
		
	
	
	
	char words [10];
	fgets (words, 10, stdin);
	puts (words);
	
	
	
	
	
	
	const char * str = "Указатель был инициализирован моим значением";
	
	puts (str);
	puts (str + 1);
	puts (&str[1]);
	
	
	
	
	
	char words[81];
	
	while (gets(words)) // эквивалиентно while (gets(words) != NULL)
		puts (words);ц
	
	
	
	
		
	char words[81];
	
	while(fgets (words, 81, stdin))
		fputs(words, stdout);
	
	*/
	
	
	
	
	
	/*
	
	const char * ar = "Hello, world!";
	put1 (ar); 
	
	
	
	
	
	
	
	char ar[] = "Hello, world!";
	fit (ar, 10);
	puts(ar);
	puts (ar + 11); // результатом этой программы будет строка, поделённая \0 вида: "Hello, wor\0d!\0"
					// - т.е. разбиение на 2 строки
					
	
	
	
	
	
	
	char flower[40];
	char ar[] = " пахнет, как старые валенки!";
	gets(flower);
	strcat (flower, ar); // присоединяет в конец первой строки вторую: strcat(строка 1, присоединяемая строка к строке 1);
	puts (flower);
	puts (ar);
	
	
	
	
	
	
	
	char str1[] = "Hello, war!";
	char str2[] = "world!";
	
	strncat (str1, str2, 4); // strncat - добавляет 4 первых символа из str2 к str1.
		// ВИД: strncat (строка 1, строка 2, количество первых символов которые добавляются к строке 1);
	puts (str1);
	
	
	
	
	
	
	char str1[] = "Hello, world!";
	char str2[] = "Hello";
	char str3[] = "Hello, world!";
	
	printf ("str1 ?= str2 - %d;\nstr1 ?= str3; - %d", strcmp(str1, str2), strcmp(str1, str3));
	
	// strcmp - возвращает нулевое значение, если 2 строки совпадают; ненулевое - если не совпадают (какое - чекнуть в инете)
	
	
	
	
	
	
	
	
	char str1[] = "астрономия";
	char str2[] = "астрофизика";
	
	printf ("для 4-х первых букв = %d\nдля 5-ти первых букв = %d\n"
	"для 6-ти первых букв = %d", strncmp(str1, str2, 4), strncmp(str1, str2, 5), strncmp(str1, str2, 6));
	
	//strncmp - возвращает нулевое значение, если первые n знаков в сравниваемых строках совпадают; иначе - ненулевое.
	// strncmp(строка 1, строка 2, количество первых сравниваемых знаков);
	
	
	
	
	
	
	
	
	
	char words [100];
	char temp[5][100];
	int det = 0;
	
	puts("Введите 5 слов начинающихся на букву к");
	
	while (det != 5) {
	
		gets(words);
		
		if (words[0] != 'к')
			printf ("Слово %s не начинается на букву к. Повторите попытку!\n", words);
		
		else {
			
			strcpy (temp[det], words); // копирует строку и записывает в другую. 
									   // strcpy((строка, куда записывается значение), записываемая строка);
			det++;
			
		}
		
	}
	
	puts ("Список слов на букву к, которые были введены:");
	
	for (int i = 0; i < 5; i++)
		puts(temp[i]);
	
	
	
	
	
	
	
	char str1[] = "Быть или не быть";
	char str2[10] = "ОЛОЛОШ";
	char *pt;
	
	pt = strncpy (str2, str1, 2); // strncpy копирует первых несколько символов строки 1 и помещает в строку 2;
	// strncpy ((строка, в которой будут заменены первые n элементов), (строка, которая передаёт первые n элементов), n);
	
	puts(pt);
	
	printf ("&str2 = %p\npt = %p", str2, pt); // str2 и pt имеют один и тот же адрес, так как strncpy возвращает 
											  // адрес второго массива, в который были записаны значения.
	


	
	
	
	
	const int max = 20;
	
	char first[max];
	char last[max];
	
	char formal[100];
	double money;
	
	puts ("Введите своё имя:");
	gets (first);
	puts ("Введите свою фамилию:");
	gets (last);
	puts ("Введите свой куш:");
	scanf ("%Lf", &money);
	
	sprintf (formal, "%s %s: %lf", first, last, money); // sprintf - помещает всё в единую строку. 
// sprintf ((строка, в которую всё записывается), (то, что обычно стоит в функции printf: строка со спецификаторами + переменные);
	puts (formal);
	
	
	
	
	
	
	
	static_func();
	static_func();
	static_func();
	
	
	
	
	
	
	
	
	double* ptd; // указатель.
	ptd = (double*) malloc (30 * sizeof (double)); // динамическое выделение памяти.
	
	//До выхода С99 нельзя было объявлять массив на n элементов подобным образом: int item[n]; Но! Есть решение:
	int* ptr; // указатель.
	ptr = (int*) malloc (n * sizeof (int)); // динамическое выделение памяти.
	
	
	
	
	
	
	
	
	
	double* ptd;
	int max = 0;
	int number, i = 0;
	puts ("Введите максимальное количество элементов типа double:");
	
	if (scanf("%d", &max) != 1) {
		
		puts ("Количество элементов введено неверно!");
		exit (EXIT_FAILURE);
		
	}
	
	ptd = (double*) malloc (max * sizeof(double));
	if (ptd == NULL) {
		
		exit (EXIT_FAILURE);
		puts ("Память выделить не удалось");
		
	}
	puts ("Введите значения, либо нажмите q для выхода:");
	
	while (i < max && scanf("%lf", &ptd[i]) == 1)
		i++;
	printf ("Введено %d элементов:\n", i);
	for (i = 0; i < max; i++)
		printf ("%lf", ptd[i]);
	putchar('\n');
	
	free (ptd); // освобождение памяти после выделения. Не все компиляторы могут освобождать память, 
				// поэтому нужна такая процедура.
				
	
	
	
	
	
	
	
	
	
	// Ещё один способ выделения памяти - calloc()! Подобно malloc (), функция calloc ( ) возвращает указатель на char в своей версии
	// до выхода стандарта ANSI и указатель на void в условиях действия стандарта. Функция calloc () обладает ещё одним свойством: 
	// она устанавливает в О все биты в блоке. (Однако следует отметить, что в некоторых аппаратных системах значение с плавающей запятой О 
	// не представляется всеми битами, установленными в О.)
	
	
	long* newmem;
	newmem = (long*) calloc (100, sizeof(long)); // подобно функции malloc();
	
	
	
	
	
	
	
	
	
	// МАССИВЫ ПЕРЕМЕННОЙ ДЛИНЫ:
	
	int n = 5;
	int m = 6;
	int ar2[n][m]; // массив, путем обычного создания.
	int (*p2)[6]; // массив, через выделение памяти.
	int (*p3)[m]; // массив, через выделение памяти.
	p2 = (int (*)[6]) malloc (n * 6 * sizeof (int));
	p3 = (int (*)[m]) malloc (n * m * sizeof (int));
	
	
	
	
	
	
	
	
	
	// квалификатор volatile; - используется, когда переменная способна менять значение, которое изменяется действиями, 
	// внешними по отношению к программе. Например, если мы хотим взять в качестве переменной время на часах.
	
	volatile int loc; // loc1 является изменчивой ячейкой.
	volatile int* ploc; // ploc указывает на изменчивую ячейку.
	
	
	// Значение может быть одновременно и const, и volatile. Например, значение аппаратных часов обычно не должно изменяться программой, 
	// что делает его const, но может быть изменено внешним действием, поэтому оно является volatile. Просто поместите оба квалификатора в 
	// объявление, как показано ниже; порядок их следования роли не играет:
	
	volatile const int loc1;
	volatile const int* ploc;
	
	
		
	
	
	
	
	
	
	int ar[10];
	int * restrict restar = (int *) malloc (10 * sizeof (int));
	int * par = ar;
	
	
	
	
	
	
	
	_Atomic int hogs; // многопоточная реализация работы
	atomic_store (&hogs, 12);
	
	
	*/
	
	return 0;

}

void static_func (void) {
	
	static int value1 = 10; // такое объявление равносильно тому, что мы создали переменную в начале
					// программы, т.е. условно value1 была создана единожды (об этом свидетельствует static)
					// при каждом новом вызове функции value1 сохраняет новое значение. 
	int value2 = 10; // переменная создана внутри тела программы. При каждом новом вызове функции value1 
					// обновляется, т.е. value всегда равна 10 изначально.
					
	value1++;
	value2++;
	
	printf ("value1 = %d, value2 = %d\n", value1, value2);
	
}

char get_choise (void) {
	
	int ch;
	
	printf("Menu. Choose an answer:\n");
	printf("Variant A. a      Variant B. b\n");
	printf("Variant C. c      Enter 'q' for QUIT.\n");
	
	ch = get_first(); // вводим строку, отсеиваем всё, кроме первого элемента.
	
	while ((ch < 'a' || ch > 'c') && ch != 'q') {
		
		printf ("You entered the wrong value. Enter again.\n");
		ch = get_first();
		
	}
	
	return ch;
	
}

char get_first(void) { // считывается строка, но отбрасывается всё кроме первого символа
	
	int ch;
	
	ch = getchar();
	while (getchar() != '\n')
		continue;
	
	return ch;
	
}

double power (double x, int exp) {
	
	double square_x = 1;
	
	for (int i = 1; i <= exp; i++) 
		square_x *= x;
	
	return square_x;
	
}

void paint(char ch, int height, int width) {
	
	for (int i = 0; i < height; i++) {
		
		for (int j = 0; j < width; j++)
			putchar(ch);
			
		putchar('\n');
		
	}
	
}

long sum_squares (long start, long end) {
	
	long sum = 0;
	
	for (int i = start; i <= end; i++)
		sum += i * i;
	
	return sum;
	
}

long get_long (void) {
	
	char ch;
	long input;
	
	while (scanf("%d", &input) != 1){
		
		while ((ch = getchar()) != '\n')
			putchar(ch);
		
		printf(" - input not number! Input Z-Number, pls.\n");
		
	}
	
	return input;
	
}

bool detector (long MIN, long MAX, long start, long end) {
	
	bool det = true;
	
	if (start < MIN || end > MAX || start > end) {
		det = false;
		printf ("ERROR! Repeat again!\n");
	}
	
	return det;
	
}

int imin (int n, int m) { // функция, определяющая минимальное значение
	
	return (n < m) ? n: m;
	
}

int what_if (int n) {
	
	double z = 100 / (double)n;
	return z;
	
	printf ("TRASH"); // операторы return предотвращают достижение printf() в данном случае

} // в функции типа void можно использовать return; - значение не возвращется.

int test (int a, int b) { // прототип функции записан без имён аргументов. Так можно делать
	// здесь что-то есть.
}

void pointer_traid (int* x, int* y) {
	
	int traid = *x;
	*x = *y;
	*y = traid;
	
}

int sum (int* ar, int size) {
	
	int total = 0;
	
	for (int i = 0; i < size; i++)
		total += *(ar + i);
		
	return total;
	
}

int sump (int* start, int* end) {
	
	int total = 0;
	
	while (start < end) {
		
		total += *start;
		start++;
		
	}
	
	
	return total;
	
}

void show_array (const double array[], int size) {
	
	for (int i = 0; i < size; i++)
		printf ("%.2Lf\n", *(array + i));
	
}

void sqr_array (double array[], int size) {
	
	for (int i = 0; i < size; i++)
		*(array + i) *= 2;
	
}

void somefunction (int (*pt)[4]) {
	
	// пустая функция создана в качестве примера
	
}

void sum_rows (int ar[][COLS], int rows) {
	
	int total = 0;
	
	for (int i = 0; i < rows; i++) { 
	
		for (int j = 0; j < COLS; j++) 
			total += ar[i][j];
		
		printf ("Total %d of rows = %d\n", i, total);
		total = 0;
	
	}
	
}

void sum_cols (int ar[][COLS], int cols) { // int (*ar)[4].
	
	int total = 0;
	
	for (int j = 0; j < cols; j++) {
		
		for (int i = 0; i < ROWS; i++)
			total += ar[i][j];
		
		printf ("Total %d of cols = %d\n", j, total);	
		total = 0;
		
	}
	
}

int sum2d (int ar[][COLS]) {
	
	int total = 0;
	
	for (int i = 0; i < ROWS; i++) {
		
		for (int j = 0; j < COLS; j++)
			total += *(*(ar + i) + j);
			
	}
	
	return total;
	
}

void put1 (const char * ar) { // вывод сообщения + количество знаков в строке
	
	int total = 0;
	
	while (*ar != '\0') {
		putchar(*ar);
		ar++;
		total++;	
	}
	
	printf ("\n%d", total);
	
}

void fit (char * ar, int size) {
	
	if (strlen(ar) > size)
		*(ar + size) = '\0';
	
}
