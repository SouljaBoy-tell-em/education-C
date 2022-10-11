#include "dicesHelp.c"

int main (void) {
	
	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
	
	int amount;
	int* pr;
	
	puts ("Ââåäèòå êîëè÷åñòâî áðîñàíèé, ëèáî 0 äëÿ çàâåðøåíèÿ:");
	
	while (scanf ("%d", &amount) == 1 && amount > 0) {
		
		while (getchar() != '\n')
			continue;
			
		
			
		pr = (int *) malloc (sizeof(int) * amount); // ÷èñëî áðîñêîâ.
		
		all_results(pr, amount);
		
		puts ("\nÂâåäèòå êîëè÷åñòâî áðîñàíèé, ëèáî 0 äëÿ çàâåðøåíèÿ:");
		
		free (pr);
	}
	
	
	return 0;
}

int rolls (int sides) {
	
	int res = rand () % sides + 1;
	return res;
	
}

void all_results (int* ar, int amount) {
	
	int sides, dices;
	register int i;
	
	puts ("\nÂâåäèòå ÷èñëî ãðàíåé è êîñòåé:");
	
	if (scanf ("%d %d", &sides, &dices) == 2) {
		
		if (dices == 0 || sides == 0)	
			exit(EXIT_FAILURE);
		
		for (i = 0; i < amount; i++ ) {
			
			* (ar + i) = one_dice (sides, dices);
			
		}
		
			
		puts ("Âîçìîæíûå ñóììû:");
	
		int counter = 0;
		register int i;
		
		for (i = 0; i < amount; i++)
			printf ("%d ", *(ar + i));
		
		putchar('\n');
		
	}
	
	else
		puts ("ERROR!");
	
}

int one_dice (int sides, int dices) {
	
	int sum = 0;
	register int i;
	
	for (i = 0; i < dices; i++) {
		
		sum += rolls (sides);
		
	}
	
	return sum;
	
}
