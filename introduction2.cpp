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
	
	//int rv = printf("%d ãðàäóñîâ ïî Ôàðåíãåéòó ñîîòâåòñòâóåò òî÷êå êèïåíèÿ âîäû.\n", bph2o);
	
	//printf("%d", rv);
	
	/*
	
	printf("Îäèí èç ñïîñîáîâ ââîäà \
	äëèííûõ ñòðîê\n");
	
	printf("Åù¸ îäèí èç ñïîñîáîâ ââîäà"
	" äëèííûõ ñòðîê");
	
	
	
	int s;
	
	scanf("%d", &s);
	
	printf("%d", s);
	
	
	
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	
	//printf("Widht?\n");
	//scanf("%d", &width);
	//printf("Ecuation is: %*d:\n", width, number);	// âìåñòî çâåçäî÷êè ïîäñòàâëÿåòñÿ øèðèíà ïîëÿ äëÿ ââîäà. Ò.å. âìåñòî çâåçäî÷åê ôàêòè÷åñêè èäóò ÷èñëà.
	
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
	
	//typedef double semen; // àëüòåðíàòèâíûé òèï. ×òîáû ñîçäàòü àëüò.òèï, íóæíî: typedef + (òèï) + (íàçâàíèå àëüò.òèïà);
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
	
	aplus = a++; // a++ - äî òîãî êàê ïðîèçîøëî èçìåíåíèå à;
	plusb = ++b; // ++a - ïîñëå òîãî, êàê ïðîèçîøëî èçìåíåíèå à;
	
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
	
	while (n < 5) // öèêë while âèäèò áåç ôèã.ñêîáîê ëèøü êîä, çàêàí÷èâàþùèéñÿ ïåðâîé ';'
		printf("n = %d\n", n);
		n++;
	
	
	
	int n = 0;
	
	while (n++ < 3); // Ïîñëå öèêëà while() ñòîèò ';' è öèêë ÿâëÿåòñÿ ïóñòûì
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
	
	// ÖÈÊË FOR // 
	
	/*
	
	int n = 0;
	
	for (printf("Input numbers: "); n != 8; )
		scanf("%d", &n);
	printf("You inputed the 8.");
	
	
	
	int a, b, end = 30;
	
	printf(" a     b\n");
	
	for (a = 0, b = 2; a < 30; ++a, b+=a) // 2 èçìåíÿþùèõñÿ ïàðàìåòðà äîïóñòèìû.
		printf("%2d %5d\n", a, b);
	

	
	
	//ÈÍÒÅÐÅÑÍÀß ÔÀÊÒ: 
	
	int c = (23, 34); 
	printf("%d\n", c);
	int x = 0, y = 1, z;
	
	z = (x, y); // âûâîäèò òî, ÷åìó â èòîãå áóäåò ðàâåí y. Â êà÷åñòâå õ ìîæåò áûòü, íàïðèìåð, àðãóìåíò, êîòîðûé íàïðèìåð âëèÿåò íà ó.
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
	
	res_scanf = scanf("%d %d", &m, &n); // ôóíêöèÿ scanf âîçâðàùàåò ÷èñëî, ðàâíîå ÷èñëó ïðàâèëüíî îïðåäåëåííûõ ïåðåìåííûõ.
	
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
		
		if (isalpha(ch) == 1 or isalpha(ch) == 2) // isalpha - ôóíêöèÿ, êîòîðàÿ âîçâðàùàåò íåíóëåâîå çíà÷åíèå, åñëè ââåäåíà áóêâà è íóëåâîå - åñëè íå áóêâà.
			putchar(ch + 1);					  // åñëè ââåäåíà áóêâà â íèæí.ðåãèñòðå - âåðí¸ò 1; åñëè â âåðõíåì - âåðí¸ò 2; 
		
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
	
	
	
	
	
	
	// ÏÎÄÑ×ÅÒ ÑËÎÂ Â ÏÐÅÄËÎÆÅÍÈÈ:
	
	
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
	

	
	
	
	
	// ÓÍÀÐÍÛÉ ÎÏÅÐÀÒÎÐ: õ = âûðàæåíèå 1? âûðàæåíèå 2: âûðàæåíèå 3; <=> 
	
	// if (âûðàæåíèå 1):
	// 		õ = âûðàæåíèå 1;
	//	else:
	//		x = âûðàæåíèå 2;
	
	
	int x = 1, y = 2;
	
	x = (x < y) ? -y: y; // åñëè x < y, òî õ = -ó = -2; åñëè ýòî íå òàê, òî õ = ó = -2;
	
	printf("%d", x);
	
	
	
	
	
	
	//ÊÎËÈ×ÅÑÒÂÎ ÁÀÍÎÊ ÊÐÀÑÊÈ ÄËß ÏÎÊÐÀÑÊÈ ÎÏÐÅÄÅËÅÍÍÎÃÎ ×ÈÑËÀ ÔÓÒÎÂ
	
	int sq_feet, cans;
	
	printf("How many does feet need to paint? Input, please:\n");
	
	while (scanf("%d", &sq_feet) == 1) {
		
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE > 0) ? 1 : 0);
		
		printf("For paint %d feet, you need %d %s\n", sq_feet, cans, (cans % 10 == 1)? "can": "cans");
		
	}
	


	
	
	// ÑËÎÂÀÐÜ ÆÈÂÎÒÍÛÕ:
	
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
		
		while (getchar() != '\n') // ïðîïóñê âñåõ ñèìâîëîâ ïîñëå ïåðâîãî ñèìâîëà.
			continue;
		
		printf("Input next letter for continue of program "
				"or press # for end of programm\n");
		
	}
	
	printf("Bye-bye!");	
	
	*/
	
	
	
	
	
	
	// ÎÏÅÐÀÒÎÐ GOTO: (ÏÎËÍÀß ÔÈÃÍß). Îïåðàòîð goto íóæåí äëÿ òîãî, ÷òîáû ïðîïóñòèòü êàêîé-òî áëîê êîäà
	// ñîçäàíèå ìåòêè ïðîèñõîäèò ïîñðåäñòâîì: goto part; òî, îòêóäà íà÷èíàåòñÿ ÷òåíèå êîäà: part:.
	
	/*
	***ÊÎÄ***  - ýòîò êîä áóäåò âûïîëíåí.
	
	goto part;
	
	***ÊÎÄ*** - ýòîò êîä íå áóäåò âûïîëíåí (ïðîïóùåí èç-çà îïåðàòîðà goto).
	
	part:
	
	***ÊÎÄ*** - ýòîò êîä áóäåò âûïîëíåí.
	
	
	
	
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
	char fname[50]; //äëÿ ÷òåíèÿ èìåíè ôàéëà
	
	printf("Input name of file:\n");
	scanf("%s", fname);
	
	fp = fopen(fname, "r"); //÷òåíèå èç ôàéëà
	
	if (fp == NULL) { // åñëè ïîïûòêà çàâåðøèëàñü íåóäà÷åé
		
		printf("File not found!\n");
		exit(1);	//âûõîä èç ïðîãðàììû
		
	}
	
	while ((ch = getc(fp)) != EOF) // ôóíêöèÿ getc(fp) ïîëó÷àåò ñèìâîëû èç îòêðûòîãî ðàíåå ôàéëà
		putchar(ch);
	
	fclose(fp); //çàêðûòü ôàéë
	
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
	
	
	
	
	
	
	//!!! ÂÂÎÄ ÑÈÌÂÎËÎÂ Ñ ÏÐÎÏÓÑÊÎÌ ÑÒÐÎÊÈ, ÎÒÑËÅÆÈÂÀÍÈÅ ÂÂÎÄÀ ÖÅËÎÃÎ ×ÈÑËÀ
	
	int n;
	
	while (scanf("%d", &n) != 1) {
		
		scanf("%*s");
		printf("Not number!\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	// ÓÊÀÇÀÒÅËÈ
	
	int pooh;
	pooh = 24;
	
	printf ("%d\n%p\n", pooh, &pooh); // %p - ñïåöèôèêàòîð àäðåñîâ
	
	
	
	
	int k = 22; // k - íåêîòîðàÿ ïåðåìåííàÿ
	int* l = &k; // int* - òèï óêàçàòåëÿ. Â ýòîò òèï ìîæíî çàïèñàòü àäðåñ ïåðåìåííîé. 
	int m = *l; //  ïåðåìåííàÿ m ïîëó÷àåò çíà÷åíèå k. Âñ¸ ïîòîìó, ÷òî: m = *(&k) = k, ò.å. (*&) - òîæäåñòâåííîå ïðåîáðàçîâàíèå
	
	printf ("%d", m);
	
	
	
	
	
	
	printf("Input X and Y:\n");
	int x, y;
	
	while (scanf("%d %d", &x, &y) == 2) {
		
		pointer_traid(&x, &y);	// function (&x, &y,...) ---> void function (int *x, int *y, ...)
		printf("x = %d, y = %d\nInput X and Y again:\n", x, y);
		
	}
	
	*/
	
	
	
	
	
	
	
	return 0;
	
}

char get_choise (void) {
	
	int ch;
	
	printf("Menu. Choose an answer:\n");
	printf("Variant A. a      Variant B. b\n");
	printf("Variant C. c      Enter 'q' for QUIT.\n");
	
	ch = get_first(); // ââîäèì ñòðîêó, îòñåèâàåì âñ¸, êðîìå ïåðâîãî ýëåìåíòà.
	
	while ((ch < 'a' || ch > 'c') && ch != 'q') {
		
		printf ("You entered the wrong value. Enter again.\n");
		ch = get_first();
		
	}
	
	return ch;
	
}

char get_first(void) { // ñ÷èòûâàåòñÿ ñòðîêà, íî îòáðàñûâàåòñÿ âñ¸ êðîìå ïåðâîãî ñèìâîëà
	
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

int imin (int n, int m) { // ôóíêöèÿ, îïðåäåëÿþùàÿ ìèíèìàëüíîå çíà÷åíèå
	
	return (n < m) ? n: m;
	
}

int what_if (int n) {
	
	double z = 100 / (double)n;
	return z;
	
	printf ("TRASH"); // îïåðàòîðû return ïðåäîòâðàùàþò äîñòèæåíèå printf() â äàííîì ñëó÷àå

} // â ôóíêöèè òèïà void ìîæíî èñïîëüçîâàòü return; - çíà÷åíèå íå âîçâðàùåòñÿ.

int test (int a, int b) { // ïðîòîòèï ôóíêöèè çàïèñàí áåç èì¸í àðãóìåíòîâ. Òàê ìîæíî äåëàòü
	// çäåñü ÷òî-òî åñòü.
}

void pointer_traid (int* x, int* y) {
	
	int traid = *x;
	*x = *y;
	*y = traid;
	
}
