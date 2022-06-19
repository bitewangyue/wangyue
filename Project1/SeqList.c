#include "SeqList.h"


void SeqListInit(SeqList* psl, int capacity)
{
	psl->array = NULL;
	psl->capicity = 0;
	psl->size = 0;
}


void CheckCapacity(SeqList* psl)
{
	if (psl->capicity == psl->size)
	{
		int newcapicity = psl->capicity * 2;
		SLDataType* newA = realloc(psl->array, sizeof(SLDataType) * newcapicity);

		if (newA == NULL) {

			printf("À©ÈÝÊ§°Ü\n");
			exit(1);

		}

		psl->array = newA;
		psl->capicity = newcapicity;
	}
}

void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);

	psl->array[psl->size] = x;
	psl->size++;
}


void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);

	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->array[end + 1] = psl->array[end];
		end--;
	}

	psl->array[0] = x;
	psl->size++;
}



void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	psl->size--;
}

void SeqListPopFront(SeqList* psl)
{
	assert(psl);

	int end = psl->size - 1;
	for (int i = 0; i < end; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}

	psl->size--;
}



int SeqListFind(SeqList* psl, SLDataType x)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		return i;
	}
	return -1;
}


void SeqListInsert(SeqList* psl, int pos, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);


	int end = psl->size;
	while (end > pos)
	{
		psl->array[end] = psl->array[end - 1];
		end--;
	}
	psl->array[pos] = x;
	psl->size++;
}


void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	int begin = pos;
	while (begin < psl->size )
	{
		psl->array[begin] = psl->array[begin + 1];
		begin++;

	}

	psl->size--;
}


void SeqListDestory(SeqList* psl)
{
	assert(psl);
	free(psl->array);

	psl->array = NULL;
	psl->capicity = 0;
	psl->size = 0;
}



void SeqListPrint(SeqList* psl)
{
	assert(psl);

	for (int i= 0; i < psl->size; i++)
	{
		printf("%d-> ", psl->array[i]);
	}
	printf("NULL\n");
}