#include "bubblesort.h"


void bubsort(void* base, int num, int width, int(*compare)(const void* elem1, const void* elem2))
{
	int i = 0;
	//int flag = 1;
	for (i=0;i<num-1;i++)
	{
		int  j = 0;
		for (j=0;j<num-1-i;j++)
		{
			if (compare((char*)base+j*width, (char*)base + (j+1) * width)>0)//获得相邻两个元素的地址
			{
				Swaparr((char*)base + j * width, (char*)base + (j + 1) * width,width);
				//flag = 0;
			} 
			/*if (flag==1)
			{
				break;
			}*/
		}
	}
}

void Swaparr(char* buf1, char* buf2, int width)
{
	char ch;
	for (int i = 0; i < width; i++)
	{
		ch = *(buf1+i);
		*(buf1 + i) = *(buf2 + i);
			* (buf2 + i) = ch;

	}
}
