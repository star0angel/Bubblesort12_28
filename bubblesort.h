#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//ȡ��scanf����ֵ�ľ���
#include<stdio.h>


void bubsort(void* base, int  num, int width, int(* compare)(const void* elem1, const void* elem2));//ð�������qsortͨ��
void Swaparr(char *buf1, char *buf2,int width);//��������ַԪ����ͬ��width�ֽڽ���ȫ������ 


