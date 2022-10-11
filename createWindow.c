#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define BLACK 0
#define RED 1
#define GREEN 2
#define BLUE 4
#define YELLOW (RED | GREEN) // 3
#define PURPLE (RED | BLUE)  // 5
#define CYAN (GREEN | BLUE)  // 6
#define WHITE (RED | GREEN | BLUE) // 7

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define OPAQUE 0x1
#define BORDER 0x100
#define STYLE_MASK 0x3000
#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define FILL_MASK 0xE

#define FILL_BLUE 0x8
#define FILL_GREEN 0x4
#define FILL_RED 0x2

#define BORDER_RED 0x200
#define BORDER_BLUE 0x800
#define BORDER_GREEN 0x400

const char * colors[8] = {"black", "red", "green", "yellow", "blue", "purple",
						  "cyan", "white" };

struct box_props {
	bool clarity: 1;
	unsigned int color: 3;
	bool frame: 1;
	unsigned int viewFrame: 2;
	bool borderFrame: 1;
	unsigned int border_color: 3;
};

union Views {
	struct box_props st_view;
	unsigned short us_view;
};

void show_settings (const struct box_props * pb);
void show_settings1 (unsigned short us);
char * itobs (int n, char * ps);

int main (void) {


	union Views box = {true, YELLOW, true, SOLID, false};
	char bin_str[8 * sizeof (unsigned int) + 1];
	printf ("Initial window settings:\n");
	show_settings (&box.st_view);
	printf("Settings of window using view unsigned short:\n");
	show_settings1(&box.us_view);
	printf ("Bit render %s.\n", itobs (box.us_view, bin_str));

	box.us_view = box.us_view & (~FILL_MASK);
	box.us_view = box.us_view | (FILL_BLUE | FILL_GREEN);
	box.us_view = box.us_view ^ OPAQUE;
	box.us_view = box.us_view | BORDER_RED;
	box.us_view = box.us_view & (~STYLE_MASK);
	box.us_view = box.us_view | B_DOTTED;

	printf ("New settings of window:\n");
	show_settings (&box.st_view);
	printf("New settings of window using view unsigned short:\n");
	show_settings1 (box.us_view);
	printf ("Bit render %s.\n", itobs(box.us_view, bin_str));

	return 0;
}

void show_settings (const struct box_props * pb) {
	printf ("Window - %s\n", (*pb).clarity == true ? "on": "off");
	printf ("Color of phone - %s.\n", colors[(*pb).color]);
	printf ("Frame - %s.\n", (*pb).borderFrame == true ? "on": "off");
	printf ("Color of frame - %s.\n", colors[(*pb).border_color]);
	printf ("Style of frame - ");

	switch ((*pb).viewFrame) {
		case SOLID: printf ("solid"); break;
		case DOTTED: printf ("dotted"); break;
		case DASHED: printf ("dashed"); break;
		default: printf ("other type");
	}
	putchar ('\n');
}

void show_settings1 (unsigned short us) {
	printf ("Window - %s.\n", (us & OPAQUE) == OPAQUE ? "opaque": "transparently");
	printf ("Color of phone - %s.\n", colors[(us >> 1) & 7]);
	printf ("Frame - %s.\n", (us & BORDER) == BORDER ? "on": "off");
	printf ("Style of frame: ");
	switch (us & STYLE_MASK) {
		case B_SOLID: printf ("solid\n"); break;
		case B_DOTTED: printf ("dotted\n"); break;
		case B_DASHED: printf ("dashed\n"); break;
		default: printf ("other");
	}
	printf ("Color of frame %s.\n", colors[(us >> 9) & 7]);
}

char * itobs (int n, char * ps) {
	int i;
	const static int size = CHAR_BIT * sizeof (int);
	for (i = size - 1; i >= 0; i--, n = (n >> 1))
		ps[i] = (1 & n) + '0';
	ps[size] = '\0';

	return ps;
}
