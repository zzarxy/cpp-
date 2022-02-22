#include <iostream>
#include <string>

using namespace std;

typedef int ELEMT;

typedef struct list
{

	ELEMT element;

	struct list* next;

} DLIST;

void makenull(DLIST* pH)
{
	if (pH != NULL)
	{
		while (pH != NULL)
		{
			list* H = pH->next;
			delete pH;
			pH = H;
		}
	}
	
	
	
}

int main()
{


	return 0;
}