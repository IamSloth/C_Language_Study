#include <iostream>
#include "Linkedlist.h"

int main()
{

	struct _tagList list;

	InitList(&list);

	PushBack(&list, 100);
	PushBack(&list, 200);
	PushBack(&list, 300);

	ReleaseList(&list);

	return 0;
}