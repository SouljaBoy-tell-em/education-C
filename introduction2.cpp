#include <stdio.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <iso646.h>
#include <stdlib.h>

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
void somefunction (int (*pt)[4]); // �������������� ����������: void somefunction (int pt [][4]);
void sum_rows (int ar[][COLS], int rows);
void sum_cols (int ar[][COLS], int cols);
int sum2d (int ar[][COLS]);

int main (void) {
	
	
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
	
	//int rv = printf("%d �������� �� ���������� ������������� ����� ������� ����.\n", bph2o);
	
	//printf("%d", rv);
	
	/*
	
	printf("���� �� �������� ����� \
	������� �����\n");
	
	printf("��� ���� �� �������� �����"
	" ������� �����");
	
	
	
	int s;
	
	scanf("%d", &s);
	
	printf("%d", s);
	
	
	
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	
	//printf("Widht?\n");
	//scanf("%d", &width);
	//printf("Ecuation is: %*d:\n", width, number);	// ������ ��������� ������������� ������ ���� ��� �����. �.�. ������ ��������� ���������� ���� �����.
	
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
	
	//typedef double semen; // �������������� ���. ����� ������� ����.���, �����: typedef + (���) + (�������� ����.����);
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
	
	aplus = a++; // a++ - �� ���� ��� ��������� ��������� �;
	plusb = ++b; // ++a - ����� ����, ��� ��������� ��������� �;
	
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
	
	while (n < 5) // ���� while ����� ��� ���.������ ���� ���, ��������������� ������ ';'
		printf("n = %d\n", n);
		n++;
	
	
	
	int n = 0;
	
	while (n++ < 3); // ����� ����� while() ����� ';' � ���� �������� ������
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
	
	// ���� FOR // 
	
	/*
	
	int n = 0;
	
	for (printf("Input numbers: "); n != 8; )
		scanf("%d", &n);
	printf("You inputed the 8.");
	
	
	
	int a, b, end = 30;
	
	printf(" a     b\n");
	
	for (a = 0, b = 2; a < 30; ++a, b+=a) // 2 ������������ ��������� ���������.
		printf("%2d %5d\n", a, b);
	

	
	
	//���������� ����: 
	
	int c = (23, 34); 
	printf("%d\n", c);
	int x = 0, y = 1, z;
	
	z = (x, y); // ������� ��, ���� � ����� ����� ����� y. � �������� � ����� ����, ��������, ��������, ������� �������� ������ �� �.
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
	
	res_scanf = scanf("%d %d", &m, &n); // ������� scanf ���������� �����, ������ ����� ��������� ������������ ����������.
	
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
		
		if (isalpha(ch) == 1 or isalpha(ch) == 2) // isalpha - �������, ������� ���������� ��������� ��������, ���� ������� ����� � ������� - ���� �� �����.
			putchar(ch + 1);					  // ���� ������� ����� � ����.�������� - ����� 1; ���� � ������� - ����� 2; 
		
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
	
	
	
	
	
	
	// ������� ���� � �����������:
	
	
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
	

	
	
	
	
	// ������� ��������: � = ��������� 1? ��������� 2: ��������� 3; <=> 
	
	// if (��������� 1):
	// 		� = ��������� 1;
	//	else:
	//		x = ��������� 2;
	
	
	int x = 1, y = 2;
	
	x = (x < y) ? -y: y; // ���� x < y, �� � = -� = -2; ���� ��� �� ���, �� � = � = -2;
	
	printf("%d", x);
	
	
	
	
	
	
	//���������� ����� ������ ��� �������� ������������� ����� �����
	
	int sq_feet, cans;
	
	printf("How many does feet need to paint? Input, please:\n");
	
	while (scanf("%d", &sq_feet) == 1) {
		
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE > 0) ? 1 : 0);
		
		printf("For paint %d feet, you need %d %s\n", sq_feet, cans, (cans % 10 == 1)? "can": "cans");
		
	}
	


	
	
	// ������� ��������:
	
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
		
		while (getchar() != '\n') // ������� ���� �������� ����� ������� �������.
			continue;
		
		printf("Input next letter for continue of program "
				"or press # for end of programm\n");
		
	}
	
	printf("Bye-bye!");	
	
	*/
	
	
	
	
	
	
	// �������� GOTO: (������ �����). �������� goto ����� ��� ����, ����� ���������� �����-�� ���� ����
	// �������� ����� ���������� �����������: goto part; ��, ������ ���������� ������ ����: part:.
	
	/*
	***���***  - ���� ��� ����� ��������.
	
	goto part;
	
	***���*** - ���� ��� �� ����� �������� (�������� ��-�� ��������� goto).
	
	part:
	
	***���*** - ���� ��� ����� ��������.
	
	
	
	
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
	char fname[50]; //��� ������ ����� �����
	
	printf("Input name of file:\n");
	scanf("%s", fname);
	
	fp = fopen(fname, "r"); //������ �� �����
	
	if (fp == NULL) { // ���� ������� ����������� ��������
		
		printf("File not found!\n");
		exit(1);	//����� �� ���������
		
	}
	
	while ((ch = getc(fp)) != EOF) // ������� getc(fp) �������� ������� �� ��������� ����� �����
		putchar(ch);
	
	fclose(fp); //������� ����
	
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
	
	
	
	
	
	
	//!!! ���� �������� � ��������� ������, ������������ ����� ������ �����
	
	int n;
	
	while (scanf("%d", &n) != 1) {
		
		scanf("%*s");
		printf("Not number!\n");
		
	}
	
	
	
	
	
	
	// ���������
	
	int pooh;
	pooh = 24;
	
	printf ("%d\n%p\n", pooh, &pooh); // %p - ������������ �������
	
	
	
	
	int k = 22; // k - ��������� ����������
	int* l = &k; // int* - ��� ���������. � ���� ��� ����� �������� ����� ����������. 
	int m = *l; //  ���������� m �������� �������� k. �� ������, ���: m = *(&k) = k, �.�. (*&) - ������������� ��������������
	
	printf ("%d", m);
	x
	
	
	
	
	
	printf("Input X and Y:\n");
	int x, y;
	
	while (scanf("%d %d", &x, &y) == 2) {
		
		pointer_traid(&x, &y);	// function (&x, &y,...) ---> void function (int *x, int *y, ...)
		printf("x = %d, y = %d\nInput X and Y again:\n", x, y);
		
	}
	
	
	
	
	// �������
	
	int arr[6] = {0, 0, 1, 2, 2, 2}; // ������������� �������
	
	int arr1[] = {1, 2, 3, 4}; // ������ ������ ������������� �������
	
	arr[5] = 47;
	
	for (int i = 0; i < 6; i++)
		printf ("%d\n", arr[i]);
	
	
	
	
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) // ���� �� �� ����� ���������� ��������� � ������� (��������, ��� �� �����������),
		printf ("In month number %d contains %d days.\n", i + 1, arr[i]); // �� ����� ����� ����� sizeof. sizeof arr - ������� �������� ������ ���� ������.
													// sizeof arr[0] - ������� �������� ������ ���� ������. ����� ���� �� ����� � �������� ����� ���������.
	
	
	
	
	
	int arr[6];
	arr == &arr[0]; // ��� ��������� �������� ��������. � arr, � &arr[0] ������������ ����� � ������, ��� ��������� ������ ������� �������
	
	
	
	
	
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
	
	
	
	
	
	// ���������� ���������:
	// *dates + 2 == &dates[2] - �������� 3-�� �������� ������� dates[]
	// *(dates + 2) == dates[2] - ���������� 2 � �������� ������� ��������
	
	
	
	
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (int i = 0; i < sizeof arr / sizeof arr[0]; i++)
		printf ("Month �%d have %d days\n", i + 1, *(arr + i)); // �.�. *(arr + i) - ��� �� �� �����, ��� � arr[i]
		
	
	
	
	
	
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
	
	ptr1 = urn; // ��������� �� ������ urn. ���������� ����������� ����� ������� �������� ������� (100).
	ptr2 = &urn[2]; // �� �� �����, �� ����������� ����� �������� �������� ������� (300).
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); //�������� ���������, ���������������, ����� ���������.
	
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
	
	for (int i = 0; i < 4; i++) { // � ������ ���������� ������� �������, �������������� ��������� ������
							// � ��������� �� ����� ������. � ������ ������ ������ ���� ���� �����. 
		for (int j = 0; j < 3; j++) { 
			
			table = &zippo[i][j];
			printf ("Coords: (%d, %d). Adress = %p ", i, j, table);
			printf ("*(*(zippo + %d) + %d) = %d]", i, j, *(*(zippo + i) + j)); // ��������� �������� � ����������� �������.
			
		}
		
		printf ("\n");
		
	}
	
	int *str;
	
	for (int i = 0; i < 4; i++) { // ����� �� ������� �� 1-� �������� ������ ������. 
					// � ������� �������� �������� �����. ��� ������������� ����� 12 (�),
		str = zippo[i]; // ��� ��� ������ ������ ������� ������� �� ��� ��������� ���� int, ������� ����� 4 �����.
		printf ("Adress (Str) = %p. ", str);
		str = &zippo[i][0];
		printf ("Adress [%d][0] = %p. ", i, str);
		str = *(zippo + i);
		printf ("Adress *(zippo + %d) = %p\n", i, str);
		
	}
	
	int (*pz)[3]; // ���������� ��������� �� ������ ������� ������� (�� ������ �������; ���� ������)
	
	pz = zippo;
	
	printf ("Adress of arrive = %p. Value of arrive (pz = zippo) = %d\n", pz, *pz);
	
	int * pax[2] // ������ �� ���� ���������� �� ��� int.
	
	
	
	
	
	int n = 5;
	double x;
	int *pl = &n;
	double *pd = &x;
	x = n; // ����� �� ��, � ��������
	//pd = pl; // ������ �� ����� ����������
	
	
	
	
	
	
	
	
	
	int junk[ROWS][COLS] = {{2, 4, 6, 8}, 
							{3, 5, 7, 9}, 
							{12, 10, 8, 6}
						   };
	
	sum_rows(junk, ROWS);
	sum_cols(junk, COLS);
	printf ("Sum of matrix = %d", sum2d(junk));
	
	
	
	
	
	
	
	
	
	typedef int arr4[4]; // ������ arr4 �� 4-� �������� ���� int.
	typedef arr4 arr3x4[3]; //������ �� 3-� ���������, ������ �� ������� �������� �������� �� 4 ��������.
	
	*/
	
	
	// ���������:
	/*
	
	int sum2 (arr3x4 ar, int rows); // �� ��, ��� � ���������.
	int sum2 (int ar[3][4], int rows); // �� ��, ��� � ���������.
	int sum2 (int ar[][4], int rows); // ����������� �����.
	
	*/
	
	
	
	return 0;

}

char get_choise (void) {
	
	int ch;
	
	printf("Menu. Choose an answer:\n");
	printf("Variant A. a      Variant B. b\n");
	printf("Variant C. c      Enter 'q' for QUIT.\n");
	
	ch = get_first(); // ������ ������, ��������� ��, ����� ������� ��������.
	
	while ((ch < 'a' || ch > 'c') && ch != 'q') {
		
		printf ("You entered the wrong value. Enter again.\n");
		ch = get_first();
		
	}
	
	return ch;
	
}

char get_first(void) { // ����������� ������, �� ������������� �� ����� ������� �������
	
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

int imin (int n, int m) { // �������, ������������ ����������� ��������
	
	return (n < m) ? n: m;
	
}

int what_if (int n) {
	
	double z = 100 / (double)n;
	return z;
	
	printf ("TRASH"); // ��������� return ������������� ���������� printf() � ������ ������

} // � ������� ���� void ����� ������������ return; - �������� �� �����������.

int test (int a, int b) { // �������� ������� ������� ��� ��� ����������. ��� ����� ������
	// ����� ���-�� ����.
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
	
	// ������ ������� ������� � �������� �������
	
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
