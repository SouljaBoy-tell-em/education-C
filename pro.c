#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45

/*

struct film {

  char title [TSIZE];
  int rating;
  struct film * next;

};

*/

struct film {

  char title[TSIZE];
  int rating;

};

typedef struct film Item;

struct node {

  Item item;
  struct node * next;

}

typedef struct node Node;
typedef Node * List;


void InitializeList (List * plist);
bool ListIsEmpty (const List * plist);
bool ListIsFull (const List * plist);
unsigned int ListItemCount (const List * plist);
bool AddItem (Item item, List * plist);
void Traverse (const List * plist, void (* pfun)(Item item));
void EmptyTheList (const List * plist);
void showmovies (Item item);
static void CopyToNode (Item item, Node * pnode);


int main (void) {

  /*

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

  */

  List movies; // <=> struct node * movies;
  Item temp;  //  <=> struct film temp;
  InitializeList (&movies); // &movies можно записать в переменную вида:
  // struct node ** value; (либо List * value);

  if (ListIsFull (&movies) == true) {

    puts ("Free memory not found");
    exit (1);

  }

  puts ("Input title of 1st film:");

  while (gets (temp.title) != NULL && temp.title[0] != '\0') {

    puts ("Input your ecquation of rating: ");
    scanf ("%d", &temp.rating);

    while (getchar () != '\n')
      continue;

    if (AddItem (temp, &movies) == false) {

      puts ("Problem with adding of memory");
      exit (1);

    }

  }

  return 0;
}

void InitializeList (List * plist) {
                //  (struct node ** plist) - указатель на указатель.
  //  Нужно для для записи адреса и его изменения. Если записать так:
  // List plist, то переменную нельзя будет


  * plist = NULL; // фактически в ** plist был записан адрес адреса.
  // * plist - разыменовывание и получение переменной типа адреса.
  // адрес принимает NULL. Адрес на структуру нулевой, поэтому список
  // инициализируется пустым содержимым.

}



bool AddItem (Item item, List * plist) {

  Node * pnew; // создание указателя на структуру (struct node * pnew)
  Node * scan = * plist; // создание указателя на структуру и присваивание
  // адреса переменной movies.
  pnew = (Node *) malloc (sizeof (Node)); // динамическое выделение памяти

  if (pnew == NULL) // если pnew = NULL, то проблема с выделением памяти
    return false;

  CopyToNode (item, pnew); // в качестве переменной item была передана
  // была передана temp - уже заполненная структура. temp скопирована
  // в pnew.
  pnew->next = NULL; // установка указателя в нулевое значение

  if (scan == NULL) // если сохранение идёт впервые, то scan имеет нулевой указатель
    * plist = pnew; // movies обновляет свой адрес. Новый адрес будет хранится в
  // main () в теле. Потом по новой будет передан в scan (в начале)

  else { // сохранение идёт не впервые

    while (scan->next != NULL) // последовательное прихождение к адресу.
      scan = scan->next;
    scan->next = pnew; // в указатель присваивается адрес ??????????

  }

}

static void CopyToNode (Item item, Node * pnode); {

  pnode->item = item;

}
