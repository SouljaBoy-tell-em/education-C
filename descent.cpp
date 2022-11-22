#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#define FILENAME "expression.txt"
#define MAXLENTITLE 500


char * s = (char * ) calloc (MAXLENTITLE, sizeof (char));


int GetG ();
int GetE ();
int GetN ();
int GetT ();
int GetP ();


int main (void) {

	FILE * expression		  = fopen (FILENAME, "r");
	fread (s, sizeof (char), MAXLENTITLE, expression);

	printf ("NUMBER: %d\n", GetG ());

	return 0;
}


int GetG () {

	int val = GetE ();
	//assert (*s == '\0');

	return val;
}


int GetN () {

	int val = 0;
	const char * sOld = s;

	while ('0' <= *s && *s <= '9') {

		val = val * 10 + ( * s) - '0';
		s++;
	}
	assert (s > sOld);

	return val;
}


int GetE () {

	int val = GetT ();

	while ( *s == '+' || *s == '-') {

		char op = *s;
		s++;
		int val2 = GetT ();

		if (op == '+')
			val += val2;

		else
			val -= val2;
	}

	return val;
}


int GetT () {

	int val = GetP ();

	while ( *s == '*' || *s == '/') {

		char op = *s;
		s++;
		int val2 = GetP ();

		if (op == '*')
			val *= val2;

		else
			val /= val2;
	}

	return val;
}


int GetP () {
	
	int val = 0;

	if ( *s == '(') {

		s++;
		val = GetE ();
		s++;
	}

	else
		val = GetN ();

	return val;
}
