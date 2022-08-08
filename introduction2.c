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
#include <limits.h>

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
#define MAXBKS 100
#define BYTE unsigned char // <=> typedef unsigned char BYTE;
#define LEN 81
#define PX printf("X = %d\n", x)
#define FMT "X = %d\n"
#define SQUARE(X) X*X
#define PSQR(X) printf ("Square X is %d", (X)*(X))
#define SQR(x) printf ("Squate "#x" is %d\n", (x)*(x)) //замена #x на то, что будет компилироваться
#define XNAME(n) x ## n // слияние x и n. Если n = 1, то получим x1
#define PRXNAME(n) printf ("x"#n" is %d\n", x ## n)



//int value = 24; // ���������� ����� ��������� ��� �������.  ��� ���������� ����� ������������ �� ���� ������,
											// ��� ��������� ���� ����.

//static int value1 = 25; // ��� ���������� ����� ������������ ������ � ���� �����.

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
void put1 (const char * ar);
void fit (char * ar, int size);
void static_func (void);
double sum_struct1(struct funds stan);
void getinfo (struct namect * pst);
void makeinfo (struct namect * pst);
void showinfo (struct namect * pst);
struct namect getinfo (void);
struct namect makeinfo (struct namect info);
void showinfo (struct namect);
void new_getinfo (struct namect * pst);
void showFlex (const struct flex * p);
double sum_struct2 (const struct funds money[], int n);
char showmenu (void);
void eatline (void);
void ToUpper (char * str);
void ToLower (char * str);
void Transpose (char * str);
void Dummy (char * str);
void show (void (*fp)(char *), char * str);
char * itobs (int n, char * ps);
void show_bstr (const char * str);

struct book { // �������� ���������
	char title[41];
	char author[31];
	float value;
};


struct funds {
	char bank[50];
	double bankfund;
	char save[50];
	double savefund;
};

struct namect {
	char *fname;
	char *lname;
	int letters;
};

struct flex {
	size_t count;
	double average;
	double scores[]; // ���� ���� ������� �������.
};

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
			putchar(ch + 1);					  // ���� ������� ����� � ����.�������� - ������ 1; ���� � ������� - ������ 2;

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

	gets(words); // ��������� ������, �� �� ��������� � �����.
					// ����� ��������� ������������ ������ � ������� ��������� ������ ����������,
					// �� ���������� ��� ������ words[5]
	puts(words); // ������� ������, �������� ������� �� ��������� ������.







	char words[15];
	puts ("Input str:");
	fgets(words, 15, stdin); // fgets() ��������� ������. ��������� 3 ���������:
							 // fgets(����������, ������������ ����� ������, ����, �� �������� ������������ ������);
							 // ���� ������ ������������ �� �������, �� ����� ������� � �������� 3 ���������: stdin.
	puts (words);	// ��� �������
	fputs (words, stdout); // fputs()  ������� ������. ��������� 2 ���������:
						   // fputs(����������, ����, ���� ��� ������);
						   // ���� ������ ��� ������� � ������, �� ����� ������� � �������� 2 ���������: stdout.







	char words[10];

	while (fgets(words, 10, stdin) != NULL && words[0] != '\n') // ���� ������� fgets �� �������� ����� �����
		fputs (words, stdout);							// ��� ���� ������ �� ����� ����� enter
	puts ("The end!");






	char words [10];
	fgets (words, 10, stdin);
	puts (words);






	const char * str = "��������� ��� ��������������� ���� ���������";

	puts (str);
	puts (str + 1);
	puts (&str[1]);





	char words[81];

	while (gets(words)) // ������������� while (gets(words) != NULL)
		puts (words);�





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
	puts (ar + 11); // ����������� ���� ��������� ����� ������, ��������� \0 ����: "Hello, wor\0d!\0"
					// - �.�. ��������� �� 2 ������







	char flower[40];
	char ar[] = " ������, ��� ������ �������!";
	gets(flower);
	strcat (flower, ar); // ������������ � ����� ������ ������ ������: strcat(������ 1, �������������� ������ � ������ 1);
	puts (flower);
	puts (ar);







	char str1[] = "Hello, war!";
	char str2[] = "world!";

	strncat (str1, str2, 4); // strncat - ��������� 4 ������ ������� �� str2 � str1.
		// ���: strncat (������ 1, ������ 2, ���������� ������ �������� ������� ����������� � ������ 1);
	puts (str1);






	char str1[] = "Hello, world!";
	char str2[] = "Hello";
	char str3[] = "Hello, world!";

	printf ("str1 ?= str2 - %d;\nstr1 ?= str3; - %d", strcmp(str1, str2), strcmp(str1, str3));

	// strcmp - ���������� ������� ��������, ���� 2 ������ ���������; ��������� - ���� �� ��������� (����� - ������� � �����)








	char str1[] = "����������";
	char str2[] = "�����������";

	printf ("��� 4-� ������ ���� = %d\n��� 5-�� ������ ���� = %d\n"
	"��� 6-�� ������ ���� = %d", strncmp(str1, str2, 4), strncmp(str1, str2, 5), strncmp(str1, str2, 6));

	//strncmp - ���������� ������� ��������, ���� ������ n ������ � ������������ ������� ���������; ����� - ���������.
	// strncmp(������ 1, ������ 2, ���������� ������ ������������ ������);









	char words [100];
	char temp[5][100];
	int det = 0;

	puts("������� 5 ���� ������������ �� ����� �");

	while (det != 5) {

		gets(words);

		if (words[0] != '�')
			printf ("����� %s �� ���������� �� ����� �. ��������� �������!\n", words);

		else {

			strcpy (temp[det], words); // �������� ������ � ���������� � ������.
									   // strcpy((������, ���� ������������ ��������), ������������ ������);
			det++;

		}

	}

	puts ("������ ���� �� ����� �, ������� ���� �������:");

	for (int i = 0; i < 5; i++)
		puts(temp[i]);







	char str1[] = "���� ��� �� ����";
	char str2[10] = "������";
	char *pt;

	pt = strncpy (str2, str1, 2); // strncpy �������� ������ ��������� �������� ������ 1 � �������� � ������ 2;
	// strncpy ((������, � ������� ����� �������� ������ n ���������), (������, ������� ������� ������ n ���������), n);

	puts(pt);

	printf ("&str2 = %p\npt = %p", str2, pt); // str2 � pt ����� ���� � ��� �� �����, ��� ��� strncpy ����������
											  // ����� ������� �������, � ������� ���� �������� ��������.







	const int max = 20;

	char first[max];
	char last[max];

	char formal[100];
	double money;

	puts ("������� ��� ���:");
	gets (first);
	puts ("������� ���� �������:");
	gets (last);
	puts ("������� ���� ���:");
	scanf ("%Lf", &money);

	sprintf (formal, "%s %s: %lf", first, last, money); // sprintf - �������� �� � ������ ������.
// sprintf ((������, � ������� �� ������������), (��, ��� ������ ����� � ������� printf: ������ �� ��������������� + ����������);
	puts (formal);







	static_func();
	static_func();
	static_func();








	double* ptd; // ���������.
	ptd = (double*) malloc (30 * sizeof (double)); // ������������ ��������� ������.

	//�� ������ �99 ������ ���� ��������� ������ �� n ��������� �������� �������: int item[n]; ��! ���� �������:
	int* ptr; // ���������.
	ptr = (int*) malloc (n * sizeof (int)); // ������������ ��������� ������.









	double* ptd;
	int max = 0;
	int number, i = 0;
	puts ("������� ������������ ���������� ��������� ���� double:");

	if (scanf("%d", &max) != 1) {

		puts ("���������� ��������� ������� �������!");
		exit (EXIT_FAILURE);

	}

	ptd = (double*) malloc (max * sizeof(double));
	if (ptd == NULL) {

		exit (EXIT_FAILURE);
		puts ("������ �������� �� �������");

	}
	puts ("������� ��������, ���� ������� q ��� ������:");

	while (i < max && scanf("%lf", &ptd[i]) == 1)
		i++;
	printf ("������� %d ���������:\n", i);
	for (i = 0; i < max; i++)
		printf ("%lf", ptd[i]);
	putchar('\n');

	free (ptd); // ������������ ������ ����� ���������. �� ��� ����������� ����� ����������� ������,
				// ������� ����� ����� ���������.










	// ��� ���� ������ ��������� ������ - calloc()! ������� malloc (), ������� calloc ( ) ���������� ��������� �� char � ����� ������
	// �� ������ ��������� ANSI � ��������� �� void � �������� �������� ���������. ������� calloc () �������� ��� ����� ���������:
	// ��� ������������� � � ��� ���� � �����. (������ ������� ��������, ��� � ��������� ���������� �������� �������� � ��������� ������� �
	// �� �������������� ����� ������, �������������� � �.)


	long* newmem;
	newmem = (long*) calloc (100, sizeof(long)); // ������� ������� malloc();









	// ������� ���������� �����:

	int n = 5;
	int m = 6;
	int ar2[n][m]; // ������, ����� �������� ��������.
	int (*p2)[6]; // ������, ����� ��������� ������.
	int (*p3)[m]; // ������, ����� ��������� ������.
	p2 = (int (*)[6]) malloc (n * 6 * sizeof (int));
	p3 = (int (*)[m]) malloc (n * m * sizeof (int));









	// ������������ volatile; - ������������, ����� ���������� �������� ������ ��������, ������� ���������� ����������,
	// �������� �� ��������� � ���������. ��������, ���� �� ����� ����� � �������� ���������� ����� �� �����.

	volatile int loc; // loc1 �������� ���������� �������.
	volatile int* ploc; // ploc ��������� �� ���������� ������.


	// �������� ����� ���� ������������ � const, � volatile. ��������, �������� ���������� ����� ������ �� ������ ���������� ����������,
	// ��� ������ ��� const, �� ����� ���� �������� ������� ���������, ������� ��� �������� volatile. ������ ��������� ��� ������������� �
	// ����������, ��� �������� ����; ������� �� ���������� ���� �� ������:

	volatile const int loc1;
	volatile const int* ploc;









	int ar[10];
	int * restrict restar = (int *) malloc (10 * sizeof (int));
	int * par = ar;







	_Atomic int hogs; // ������������� ���������� ������
	atomic_store (&hogs, 12);

	*/







	/*

	struct book library; // ���������� ���������� library ���� ���������
	puts ("������� �������� �����:");
	gets (library.title);
	puts ("������� ������ �����:");
	gets (library.author);
	puts ("������� ���� �����:");
	scanf ("%f", &library.value);
	putchar ('\n');
	printf ("%s ��������� %s: $%.1f", library.title, library.author, library.value);

	*/






	struct book doyle, panshin, *ptbook; // ptbook - ��� ��������� ��� ���������


	struct book library1 = { // ���������������� ����������� ���������� library1 ����� ���:
		"��� �����",
		"���� ����",
		300.25
	};

	//struct book surprice = {.value = 10.99}; // ������������� ������ ���������� value;

	//struct book gift = { .value = 25.99,		// ���������� ����� ���������������� � ����� �������;
	//					 .author = "���� ����",
	//					 .title = "��� �����"};





	//struct book gift = {.value = 18.90,
	//.author = "��� �����",
	//0.25}; ���������� value ����� ��������� 0.25





	/*

	struct book libr [MAXBKS];
	int count = 0;
	int i;

	printf ("������� �������� �����\n");
	printf ("����� ��������� ����, ������� [enter]\n");
	while (count < MAXBKS && gets (libr[count].title) != NULL && libr[count].title[0] != '\0') {
		printf ("������ ������� ������\n");
		gets (libr[count].author);
		printf ("������� ���� �����\n");
		scanf ("%f", &libr[count].value);
		count++;
		while (getchar() != '\n') // �����, ����� ���� �� �����������; ����� ��� ������� ����������� � �������� �����.
			continue;
		printf ("������� �������� �����\n");
		printf ("����� ��������� ����, ������� [enter]\n");
	}
	if (count > 0) {
		printf ("������ ������� ���� ������:\n");
		for (i = 0; i < count; i++) {
		printf ("%s ��������� %s: $%.2f\n", libr[i].title, libr[i].author, libr[i].value);
		}
	}
	else
		printf ("�� ������ �� �����\n");

	*/







	const char * msgs[5] = {"��������� ��� �� ������� ���������� �����",
							"�� ���������� ������������������, ���",
							"������ ����� ������ ��� �������. �� ����������� ������ �����������",
							"�� �������������� ������ � ",
							" � ������ �������� ����� "};
	struct names {
		char first[20];
		char last[20];
	};

	struct guy {
		struct names handle;
		char favfood[20];
		char job[20];
		float income;
	};

	/*

	struct guy fellow = {
		{"�����", "����"},
		"����������� �������",
		"������������ ������",
		68112.12
	};


	printf ("������� %s, \n\n", fellow.handle.first);
	printf ("%s%s.\n", msgs[0], fellow.handle.first);
	printf ("%s%s\n", msgs[1], fellow.job);
	printf ("%s\n", msgs[2]);
	printf ("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 150000.0)
		puts ("!!");
	else if (fellow.income > 75000.0)
		puts ("!");
	else
		puts (".");
	printf ("\n%40s$s\n", " ", "�� ������ �������");
	printf ("%40s%s\n", " ", "�����");








	struct guy fellow[2] = {
		{{"�����", "����"},
		"����������� �������",
		"������������ ������",
		68112.12 },

		{ {"����", "������"},
		"������ �������",
		"�������� ��������",
		232400.00 }
	};

	struct guy * him;

	printf ("����� #1: %p #2: %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];
	printf ("����c #1: %p, #2: %p\n", him, him + 1);
	printf ("him->income �����: $%.2f; (*him).income �����: $%.2f\n", him->income, (*him).income);
	him++;
	printf("him->favfood ����� %s: him->handle.last ����� %s\n", him->favfood, him->handle.last);








	struct funds {
		char bank[50];
		double bankfund;
		char save[50];
		double savefund;
	};
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf ("����� ����� �� ������ � ����� ���������� %.2f.\n", sum_struct(stan.bankfund, stan.savefund));







	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	sum_struct1(stan.bankfund, stan.savefund); // ��������� ����������� ������������







	pst->arg <=> (*pst).arg

	struct namect person;
	getinfo (&person);
	makeinfo (&person);
	showinfo (&person);







	struct namect person;

	person = getinfo ();
	person = makeinfo (person);
	showinfo (person);










	struct booking {
		char title [41];
		char author [41];
		float value;
	};

	struct booking readlist;
	int score;
	scanf ("%d", &score);

	if (score >= 84) {
		readlist = (struct booking) {
			"������������ � ���������",
			"�.�����������",
			11.25
		};
	}
	else {
		readlist = (struct booking) {
			"�������� ����� ������� ������",
			"���� ������",
			5.99
		};
	}
	printf ("����������� ���� ��������:\n");
	printf ("%s by %s: $%.2f\n", readlist.title, readlist.author, readlist.value);








	struct flex * pf;
	pf = malloc (sizeof (struct flex) + sizeof (double) * 5); // ��������� ������ ��� ��������� �
	// 	5 ��������� ���� double � ������ ������� scores[];
	// ������ ����� ��������� ������ ��������� ��������� ����������:
	pf->count = 5;
	pf->scores[2] = 18.5









	struct flex *pf1, *pf2;
	int n = 5;
	int i;
	int tot = 0;

	pf1 = malloc (sizeof (struct flex) + sizeof (double) * n);
	(*pf1).count = n;
	for (i = 0; i < n; i++) {
		(*pf1).scores[i] = 20.0 - i;
		tot += (*pf1).scores[i];
	}
	(*pf1).average = tot / n;
	showFlex (pf1);
	n = 9;
	tot = 0;
	pf2 = malloc (sizeof (struct flex) + n * sizeof (double));
	(*pf2).count = n;
	for (int i = 0; i < n; i++) {
		(*pf2).scores[i] = 20 - i/2;
		tot += (*pf2).scores[i];
	}
	(*pf2).average = tot / n;
	showFlex (pf2);
	free (pf1);
	free (pf2);







	struct person { // ��������� ���������. ���������������� ��������� �������:
		int id;
		struct {char first[20]; char last[20];};
	};
	struct person ted = {8483, {"Ted", "Grass"}}; // ted ��������� � ������������ � ����������.
	printf ("%d\n", ted.id);
	puts (ted.first);
	puts (ted.last);









	struct funds jones[2] = {{ "Garlic-Melon Bank",
								4032.27,
								"Lucky's Savings and Loan",
								8543.94
							 },
							 { "Honest Jack's Bank",
							   3620.88,
							   "Party Time Savings",
							   3802.91
							 }
	};

	double total = sum_struct2 (jones, 2);
	printf ("%lf", total);








	struct book library[MAXBKS];
	int count = 0;
	FILE * fp;

	if ((fp = fopen("library.txt", "a+b")) == NULL) {
		printf ("�������� � ��������� �����");
		exit (1);
	}
	rewind (fp);
	printf ("� ������ ������ � ���� ������:\n");
	while (count < MAXBKS && fread (&library[count], sizeof (struct book), 1, fp))
		printf ("%s ��������� %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
	if (count == MAXBKS) {
		printf ("���� ��������!\n");
		exit(1);
	}
	int filecount = count;
	printf ("������� �������� ����� ����:\n");
	printf ("��� ���������� ��������� ������� ������� [enter]\n");
	gets (library[count].title);
	while (library[count].title[0] != '\0' && count <= MAXBKS) {
		printf ("������� ������:\n");
		gets (library[count].author);
		printf ("������� ��������� ���� �����:\n");
		scanf ("%f", &library[count].value);
		while (getchar() != '\n')
			continue;
		count++;
		printf ("������� �������� �����:\n");
		gets (library[count].title);
	}
	if (count > 0) {
		printf ("��� ������� ����:\n");
		for (int i = 0; i < count; i++)
			printf ("%s ��������� %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		fwrite (&library[filecount], sizeof (struct book), count - filecount, fp);
	}
	else
		printf ("��� ����, ��� �� �� �������!\n");
	fclose (fp);

	*/





	/*

	// ����������� - ���, ������� ��������� ������� ������ ������ ����� � ����� ����� (�� ������������).
	// ��������:

	union hold { // - �����������
		int digit; // 4 �����
		double bigfl; // 8 ����
		char letter; // 1 ����
	};

	union hold fit; // � fit ����� �������� ������, ����� ���� int ��� ����� ���� double.
	union hold save[10]; //  ������ ����� �� ���������. ���������� �������� ���������� ���������� ������ ��� ������������� ����.
	union hold * pu; // ��������� �� ����� ����������� hold.

	union hold valA;
	valA.letter = 'R';
	union hold valB = valA; // ������������� ������ ����������� ������.
	union hold valC = {88}; // ������������� ����� digit.
	union hold valD = {.bigfl = 118.2}; // ����������� �������������.


	fit.digit = 23; // � ���������� fit �������� 23; ������������ 2 �����.
	fit.bigfl = 2.0; // 23 �������, 2.0 ���������; ������������ 8 ����.
	fit.letter = 'c'; // 2.0 �������, h ���������; ������������ 1 ����.


	pu = &fit; // � ��������� �������� �����.
	int x = (*pu).digit; // �� ���� ����� �������� ���: x = pu->digit;





	struct owner {
		char socsecurity[12];
	};

	struct leasecompany {
		char name[40];
		char headquaters[40];
	};

	union data {
		struct owner owncar; // owncar ������������ � ���������
		struct leasecompany leasecar;
	};

	struct car_data {
		char make[15];
		int status;
		union data ownerinfo;
	};

	union data struc;
	struc.leasecar = {"Billy", "228gell"};
	puts (struc.leasecar.headquaters); // OUTPUT: 228gell




	//��������� �����������:


	struct owner {
		char socsecurity[12];
	};

	struct leasecompany {
		char name[40];
		char headquaters[40];
	};

	struct car_data {
		char make[15];
		int status;
		union { // ��� �����!
			struct owner owncar;
			struct leasecompany leasecar;
		};
	};

    struct car_data value;
    value.owncar = {.socsecurity = "hello"};
    char* str = value.owncar.socsecurity;
    puts (str);









	enum spectrum { // ��������������
		red, // = 0;
		orange, // = 1;
		yellow, // = 2;
	};

	spectrum color; // �������� ���������� ���� spectrum

	color = red; // = 0
	printf ("red = %d\n", color);
	color = orange; // = 1
	printf ("orange = %d\n", color);
	color = yellow; // = 2
	printf ("yellow = %d\n", color);



	enum levels { // ��� ������� ����� ������ ��������� ������������� ��������.
		low = 100,
		medium = 500,
		high = 2000
	};

	levels stage = low;
	printf ("%d", stage);  // OUTPUT: 100


	enun feline {cat, lynx = 10, puma, tiger}; // � ���� ������ cat �������� ����������� �������� �, � lynx, puma � tiger � ��������������,
																																	10, 11 � 12.

	*/







	//BYTE = 'c';

	//typedef char* string; // string <=> char*, �.�. "������" ��������� ��� string ��� ���������� �� ������ ��� ������ typedef;

	/*

	typedef struct complex {
		float real;
		float imag;
	} COMPLEX; // ������ ��� ������������� ����������� ����� ������ ��������� �� ����� complex ����� ��������� ��� COMPLEX.

	*/

	// ��� ��, �� ��� ����� "complex". �� ����� �������� �����.

	/*

	typedef struct {
		float real;
		float imag;
	} COMPLEX; // ������ ��� ������������� ����������� ����� ������ ��������� �� ����� complex ����� ��������� ��� COMPLEX.

	COMPLEX struc; // ������ struc - ��� ��������� �� ������� ����.

	// ����� ������ ���:

	typedef struct {double x; double y;} rect;
	rect r1 = {6.0, 3.0};
	rect r2;
	r2 = r1;










	char line [LEN];
	char copy [LEN];
	char choise;
	void (*pfun)(char *);
	puts ("������� ������, ���� ������� ������� [enter]");
	gets (line);
	while (line[0] != '\0') {

		while ((choise = showmenu()) != 'n') {
			switch (choise) {
				case 'u': pfun = ToUpper; break;
				case 'l': pfun = ToLower; break;
				case 't': pfun = Transpose; break;
				case 'o': pfun = Dummy; break;
			}
			strcpy (copy, line);
			show (pfun, copy);
			puts ("������� ������, ���� ������� ������� [enter]");
		}
		puts ("��������� ���������");
	}

	*/








	/*

	int val = 2; // val = 2 = 00000010; ~val = -3 = 11111101; (��������� ���������);
	printf ("val = %d\n~val=%d\n\n", val, 256+(~val));

	// ��������� �������� � (&): (10010011) & (00111101) = (00010001);

	int val1 = 2, val2 = 3; // val1 = 00000010; val2 = 00000011;
	val1 = val1 & val2; // (00000010) & (00000011) = (00000010); = 2
	printf ("%d\n\n", val1);

	// ��������� �������� ��� (|): ��� ������ ������� ��� ����� ����� 1, ���� ����� �� ��������������� ����� � ��������� ����� 1.
	// (10010011) | (00111101) = (10111111);

	int val3 = 5, val4 = 6; // val1 = 00000101; val2 = 00000110;
	val3 = val3 | val4; // (00000101) | (00000110) = (00000111) = 7;
	printf ("%d\n\n", val3);

	// ��������� "�����������" ��� (^): �� ������ ������� �������������� ��� ����� ����� 1, ���� ���� ��� ������ (�� �� ���) �� ���������������
	// ����� � ��������� ����� 1.

	val3 = 5; val4 = 6;
	val3 = val3 ^ val4; // (00000011)
	printf ("%d\n\n", val3); // (00000101) ^ (00000110) = (00000011); = 3;

	// ����� �����: (11100101) << 2 = (10010100); ������ �������� ������ ����������� ������.
	// ����� ������: (11100101) >> 2 = (00111001); ����� �������� ������ ����������� ������.

	int stonk = 1; // (00000001) = 1;
	int onkoo;
	onkoo = stonk << 3; // (00000001) << 3 = (00001000) = 8;
	printf ("%d\n\n", onkoo);

	int sweet = 16; // (00010000) = 16
	int ooosw;
	ooosw = sweet >> 3; // (00000010); = 2
	printf ("%d", ooosw);

	*/






	/*

	char bin_str[CHAR_BIT * sizeof (int) + 1];
	int number;
	puts ("������� ����� ����� � �������������� �� �������� �������������");
	puts ("���������� ���� ��������� ���������");
	while (scanf ("%d", &number) == 1) {
		itobs (number, bin_str);
		printf ("%d �������������� ��� ", number);
		show_bstr (bin_str);
		putchar ('\n');
	}
	puts ("��������� ���������");









	struct { // ��� ���������� ������������� 4 ����������� ����.
		unsigned int autfd: 1;
		unsigned int bldfc: 1;
		unsigned int undln: 1;
		unsigned int itals: 1;
	} prnt;

	prnt.autfd = 1; // > 2 ��������� �� ���������.
	prnt.undln = 0;

	struct { // ����������� ���� ����������� ����� � ������ ��������������.
		unsigned int code1 : 2;
		unsigned int code2 : 2;
		unsigned int code3 : 8;
	} prcode;

	prcode.code1 = 0;
	prcode.code2 = 3;
	prcode.code3 = 255;

	struct { // ����� ����� ������ stuff. fieldl � stuff. field2 ������� 2-������� ����������,
	unsigned int fieldl : 1;	// � ���� stuff. field3 �������� � ��������� ������� int.
	unsigned int : 2;
	unsigned int field2 : 1;
	unsigned int : 0;
	unsigned int field3 : 1;
	} stuff;




	struct box_props {
		bool opaque : 1; // ���������/���������� �����;
		unsigned int fill_color: 3; // 8 ��������� ������;
		unsigned int: 4; // ���������� � 4 ���� ����� fill_color � show_border;
		bool show_border: 1; // ��������� �����;
		unsigned int border_color: 3; // 8 ������ �����;
		unsigned int border_style: 2; // ����� �����: 3 ��������;
		unsigned int: 2;
	};






	int x = 2;
	PX; // ---> define
	x = 4;
	printf (FMT, x);








	int x = 2;
	const char * fmt = "X = %d\n";
	printf (fmt, x);




	int x = 3;
	x = SQUARE(x); // ---> define
	printf ("%d", x);



	int x = 4;
	PSQR (x);




	int z = 2;
	SQR (z);




	int XNAME(1) = 14;
	PRXNAME(1);
	putchar('\n');
	printf ("x = %d", x1);

	*/




	

	return 0;

}

void static_func (void) {

	static int value1 = 10; // ����� ���������� ����������� ����, ��� �� ������� ���������� � ������
					// ���������, �.�. ������� value1 ���� ������� �������� (�� ���� ��������������� static)
					// ��� ������ ����� ������ ������� value1 ��������� ����� ��������.
	int value2 = 10; // ���������� ������� ������ ���� ���������. ��� ������ ����� ������ ������� value1
					// �����������, �.�. value ������ ����� 10 ����������.

	value1++;
	value2++;

	printf ("value1 = %d, value2 = %d\n", value1, value2);

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

void put1 (const char * ar) { // ����� ��������� + ���������� ������ � ������

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

double sum_struct (double x, double y) {
	return (x + y);
}

double sum_struct1(struct funds stan) {
	return (stan.bankfund + stan.savefund);
}

void getinfo (struct namect * pst) {
	printf ("������� ��� ���:\n");
	gets (pst->fname);
	printf ("������� ���� �������:\n");
	gets (pst->lname);
}

void makeinfo (struct namect * pst) {
	pst->letters = strlen (pst->fname) + strlen (pst->lname);
}

void showinfo (struct namect * pst) {
	printf ("%s %s, ���� ��� � ������� �������� %d ����.\n", pst->fname, (*pst).lname, pst->letters);
}

struct namect getinfo (void) { // ������� ������������ ���������
	struct namect temp;
	printf ("������� ���� ���:\n");
	gets (temp.fname);
	printf ("������� ���� �������:\n");
	gets (temp.lname);
	return temp;
}

struct namect makeinfo (struct namect info) { // ������� ������������ ��������� � ���������� � �������� ��������� ���������
	info.letters = strlen (info.fname) + strlen (info.lname);
	return info;
}

void showinfo (struct namect info) { // �������, ���������� � �������� ��������� ���������
	printf ("%s %s, ���� ��� � ������� �������� %d ����.\n", info.fname, info.lname, info.letters);
}

void new_getinfo (struct namect * pst) {
	char temp[10];
	printf ("������� ���� ���:\n");
	gets (temp);
	pst->fname = (char *) malloc (strlen (temp) + 1);
	strcpy (pst->fname, temp);
	printf ("������� ���� �������:\n");
	gets (temp);
	pst->lname = (char *) malloc (strlen (temp) + 1);
	strcpy (pst->lname, temp);
}

void showFlex (struct flex * p) {
	int i;
	printf ("��������:");
	for (i = 0; i < p->count; i++) {
		printf ("%g ", p->scores[i]);
		printf ("\n������� ��������: %g\n", p->average);
	}
}

double sum_struct2 (const struct funds money[], int n) {
	int i, total = 0;
	for (i = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;
	return total;
}

char showmenu (void) {
	char ans;
	puts ("������� ��������� ������� �� ����:");
	puts ("u) ������ �������		l) ������� �������");
	puts ("t) �������� ��������		o) �������� �������");
	puts ("n) ��������� ������");
	ans = getchar ();
	ans = tolower(ans);
	eatline ();
	while (strchr ("ulton", ans) == NULL) {
		puts ("������� u, l, t, o ��� n");
		ans = tolower (getchar());
		eatline();
	}
	return ans;
}

void eatline (void) {
	while (getchar () != '\n')
		continue;
}

void ToUpper (char * str) {
	while (*str) {
		*str = toupper(*str);
		str++;
	}
}

void ToLower (char * str) {
	while (*str) {
		*str = tolower(*str);
		str++;
	}
}

void Transpose (char * str) {
	while (*str) {
		if (islower (*str))
			*str = toupper (*str);
		else if (isupper (*str))
			*str = tolower (*str);
		str++;
	}
}

void Dummy (char * str) {
	// ��������� ������ ������;
}

void show (void (*fp)(char *), char * str) {
	(*fp)(str);
	puts (str);
}

char * itobs (int n, char * ps) {
	int i;
	const static int size = CHAR_BIT * sizeof (int);
	for (i = size; i >= 0; i--, n = n >> 1)
		ps[i] = (1 & n) + '0';
	ps[size] = '\0';
	return ps;
}

void show_bstr (const char * str) {
	int i = 0;
	while (str[i]) {
		putchar(str[i]);
		if (i % 4 == 0 && str[i])
			putchar (' ');
		i++;
	}
}
