
#include "SeqList.h"



void test1()
{
	SeqList s;

	SeqListInit(&s,10);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);

	SeqListPushFront(&s, 6);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPrint(&s);

	int res = SeqListFind(&s, 3);
	printf("%d\n", res);

	SeqListPrint(&s);
	SeqListInsert(&s, 2, 8);
	SeqListPrint(&s);

	SeqListErase(&s, 2);
	SeqListPrint(&s);

	/*SeqListDestory(&s);*/
}

int main()
{
	test1();
	return 0;
}