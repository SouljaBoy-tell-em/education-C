#include <stdio.h>

struct node {

  char title[30];
  char rating;
  struct node * next;

};

int main (void) {

  struct node * prev, * current;
  struct node * head = NULL;

  char input [30];

  puts ("Input title of film:");

  while (gets (input) != NULL && input[0] != '\0') {

    current = (struct node * ) malloc (sizeof (struct node));

    if (head == NULL)
      head = current;
    else
      prev->next = current;

    current->next = NULL;
    strcpy (current->title, input);

    puts ("Input rating of film:");
    scanf ("%d", &current->rating);

    while (getchar () != '\n')
      continue;

    prev = current;
    puts ("Input title of film:");



  }

  current = head;

  while (current != NULL)  {

    printf ("Film: %s; Rating: %d\n", current->title, current->rating);

    free (current);
    current = current->next;

  }


}
