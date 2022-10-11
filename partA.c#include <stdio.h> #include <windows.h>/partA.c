#include <stdio.h>
#include <windows.h>
//#include "partB.c"

int sum = 0;

void accumulate (int k);

int main (void) {
	
	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
	
	int value;
	int i;
	puts ("Ââåäèòå ïîëîæèòåëüíîå öåëîå ÷èñëî, ëèáî 0 äëÿ çàâåðøåíèÿ ïðîãðàììû:");
	
	while (scanf("%d", &value) == 1 && value > 0) {
			
		accumulate (value);
		puts ("Ââåäèòå ïîëîæèòåëüíîå öåëîå ÷èñëî, ëèáî 0 äëÿ çàâåðøåíèÿ ïðîãðàììû:");
		
	}
	
	puts ("Ïðîãðàììà çàâåðøåíà!");
	
	return 0;
}
