#include <stdio.h>
#include "hotel.h"

int main (void) {
	
	int night, num;
	double costHotel;
	
	while ((num = NUM_HOTEL()) != QUIT) {
		
		switch (num) {
			
			case 1:
				costHotel = HOTEL1;
				break;
			case 2:
				costHotel = HOTEL2;
				break;
			case 3:
				costHotel = HOTEL3;
				break;
			case 4:
				costHotel = HOTEL4;
				break;
			
		}
		
		night = nights();
		
		printf ("You must pay: $%Lf\n", night * costHotel);
		
		
	}
	
	return 0;

}

void HELP_NUM_HOTEL (void) {
	
	printf (START);
	printf ("Menu:\n");
	printf ("Enter number the hotel you want:\n");
	printf ("1. Hotel A            2. Hotel B\n");
	printf ("3. Hotel C            4. Hotel D\n");
	printf ("5. QUIT\n");
	printf (START);
	
	
}

int NUM_HOTEL (void) {
	
	int num, status;
	
	HELP_NUM_HOTEL();
	
	while ((status = scanf("%d", &num)) != 1 || (num < 1 || num > 5)) {
		
		if (status != 1)
			scanf ("%*s");
		
		printf ("Your value is wrong! Repeat, please\n");
		HELP_NUM_HOTEL();
		
	}
	
	return num;
	
}

int nights (void) {
	
	int night;
	
	printf ("Enter number of nights:\n");
	
	while (scanf ("%d", &night) != 1) {
		
		scanf ("*s");
		printf ("You need to enter a number. Enter number of nights:\n");
		
	}
	
	return night;
	
}
