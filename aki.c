#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>


#define FRAME "##################################"
#define LEN 50


typedef struct object{

    char ans[LEN];

} Object;


typedef struct node {

    Object object;
    struct node * left;
    struct node * right;

} Node;


typedef struct tree{

	Node * temp;
	int size;

} Tree;


char menu (Tree * pt);
char * input (char * str);
void AddItem (Tree * pt);
void first (Node * pt);
char yesOrNo ();
void seekObject (Node * pt);
void Ignore (Tree * pt);
void InitializeTree (Tree * pt);
bool addNode (Node * pt);
void fullList (Node * pt);


int main (void) {

    /*###### rus-location ######*/
                               ///
    SetConsoleCP(1251);        ///
    SetConsoleOutputCP(1251);  ///
                               ///
    /*##########################*/

    Tree tree;
    InitializeTree (&tree);
	
    char ch;
    void ( * pr) (Tree * );

    while ((ch = menu (&tree)) != 'q') {
    	
    	if (ch == 'f') {
    		
    		fullList (tree.temp);
    		continue;
    		
    	}

        switch (ch) {

        	case 'p': pr = AddItem;
                    		 break;

        	default:  pr = Ignore;
		  					break;

        }

        ( * pr) (&tree);

    }
    
    puts ("Program was end!");

	return 0;

}


void fullList (Node * pt) {
	
	if (pt != NULL)	{
		
		puts ((pt->object).ans);
		fullList (pt->left);
		fullList (pt->right);
		
	}
	
}


void Ignore (Tree * pt) {
	
	puts ("Input true variant of the menu.");
	
	return;
	
}


void InitializeTree (Tree * pt) {

    pt->temp = NULL;
    pt->size = 3;

}


void AddItem (Tree * pt) {
	
	if (pt->size == 0) {
		
		Node * mem, * left_mem, * right_mem;
		mem = (Node * ) malloc (sizeof (Node));
		assert (mem);
		left_mem = (Node * ) malloc (sizeof (Node));
		right_mem = (Node * ) malloc (sizeof (Node));
		assert (left_mem);
		assert (right_mem);
		Node Left_Mem = {"hure", NULL, NULL};
		Node Right_Mem = {"stone", NULL, NULL};
		* left_mem = Left_Mem;
		* right_mem = Right_Mem;
		Node Mem = {"animal", left_mem, right_mem};
		*mem = Mem;
		pt->temp = mem;
		pt->size ++;
		
		return;
		
	}
	
	else {
		
		seekObject (pt->temp);
		
	}
	
}

void seekObject (Node * pt) {
	
	puts ((pt->object).ans);
	char ch = yesOrNo ();
    
    if (ch == 'n') {

        if (pt->right == NULL) {
			
			assert (addnode (pt) == true);
            return;

    	}
    	
    	else
           seekObject (pt->right);
    
	}

    if (ch == 'y') {
    	
    	if (pt->left == NULL && pt->right == NULL) {
    		
    		puts ("I won.");
    		return;
    		
    	}

        if (pt->left == NULL) {

            assert (addNode (pt) == true);
            return;

        }

        else
           seekObject (pt->left);

    }

}


bool addNode (Node * pt) {
	
	Node * mem, * save; 
	Object quest;
	mem = (Node * ) malloc (sizeof (Node));
	save = (Node * ) malloc (sizeof (Node));
	
	assert (mem);
	assert (save);
	
	puts ("Who is it ?");
	input ((mem->object).ans);
	printf ("What distinguishes a %s from another variant ?\n", (mem->object).ans);
	input (quest.ans);
	
	mem->left = NULL;
	mem->right = NULL;
	save->left = NULL;
	save->right = NULL;
	save->object = pt->object;
	pt->object = quest;
	pt->left = mem;
	pt->right = save;
	
	puts ("So variant was add.");
	
	return true;
	
}


char yesOrNo () {

    char ans;

    puts ("y - YES;");
    puts ("n - NO;");
    printf ("Select one answer option: y/n ?\n");
    
    ans = getchar ();
    while (getchar () != '\n')
        continue;
        
    if (strchr ("yn", ans) == NULL) {
    	
    	yesOrNo ();
    	
    }


    return ans;

}


/* Operation: MENU               .                                */
/* Predconditions: The function gets a pointer of the tree.       */
/* Postconditions: Launch menu.                                   */
char menu (Tree * pt) {

	char ch;

	puts (FRAME);
	puts ("             MENU:              ");
	putchar ('\n');
	puts ("f) full list;           p) play;");
	puts ("v) answer variants;     q) QUIT.");
	putchar ('\n');
	puts (FRAME);	

	ch = getchar ();
	while (getchar () != '\n')
		continue;

	return ch;

}


/* Operation: This function fills the string.                     */
/* Predconditions: This function gets pointer of string.          */
/* Postconditions: This function return pointer of this string.   */
char * input (char * str) {

  char ch;

  while ((ch = getchar()) != EOF) {

    if (ch == '\n') {

      ch = '\0';
      * str = ch;

      return str;

    }

    * str = ch;
    str++;

  }

}
