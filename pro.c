#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45

struct film {

  char title [TSIZE];
  int rating;
  struct film * next;

};

int main (void) {

  struct film * head = NULL;
  struct film * prev, * current;
  char input [TSIZE];

  puts ("Input title of first film: ");
  while (gets (input) != NULL && input[0] != '\0') {

    current = (struct film *) malloc (sizeof (struct film));
                                                // выделение памяти
    if (head == NULL)
      head = current; // установка указателя на первую структуру

    else
      prev->next = current;
        // в предыдущий указатель устанавливаем адрес на текушую структуру

    current->next = NULL; //в текушую структуру устанавливаем нулевой указатель
    strcpy (current->title, input);

    puts ("Input rating if this film: ");
    scanf ("%d", &current->rating);

    while (getchar () != '\n')
      continue;

    puts ("Input title of next film: ");

    prev = current;
      // в предыдущий указатель устанавливаем адрес текущей структуры.

  }

  if (head == NULL)
    puts ("Data not found!");

  else
    puts ("List of films:");

  current = head;

  while (current != NULL) {

    printf ("Film: %s; Rating: %d\n", current->title, current->rating);
    current = current->next;

  }

  current = head;

  while (current != NULL) {

    free (current);
    current = current->next;

  }

  puts ("End of program!");

  return 0;
}
