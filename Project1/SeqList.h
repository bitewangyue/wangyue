#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
// ˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDataType* array; // ָ��̬���ٵ�����
	int size; // ��Ч���ݸ���
	int capicity; // �����ռ�Ĵ�С
}SeqList;


// ������ɾ��Ľӿ�
// ˳����ʼ��
void SeqListInit(SeqList* psl, int  capacity);
// ���ռ䣬������ˣ���������
void CheckCapacity(SeqList* psl);
// ˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x);
// ˳���βɾ
void SeqListPopBack(SeqList* psl);
// ˳���ͷ��
void SeqListPushFront(SeqList* psl, SLDataType x);
// ˳���ͷɾ
void SeqListPopFront(SeqList* psl);
// ˳������
int SeqListFind(SeqList* psl, SLDataType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* psl, int pos, SLDataType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* psl, size_t pos);
// ˳�������
void SeqListDestory(SeqList* psl);
// ˳����ӡ
void SeqListPrint(SeqList* psl);