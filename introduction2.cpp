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

double power (double x, int exp);
void paint (char ch, int height, int width);


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
	
	
	
	
	
	const long MIN = -1000000;
	const long MAX = 1000000;
	
	long start, stop;
	
	
		
	
	return 0; 
	
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
		sum = i * i;
	
	return sum;
	
}

