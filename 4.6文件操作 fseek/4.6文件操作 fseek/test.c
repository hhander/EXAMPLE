#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	fputs("abcdef", pf);
//
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	fseek(pf, 2, SEEK_CUR);//ftell rewind    feof
//	int ch = fgetc(pf);  
//	printf("%c", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	int a;
//	char b;
//	short c;
//	short d;
//};
//int main()
//{
//	printf("%d", sizeof(struct S));
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s,line:%d,date:%s,time:%s,i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%s", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//#define  SQUARE(X) (X)*(X)
//int main()
//{
//	printf(STR);
//	int ret = SQUARE(6);
//	printf("%d", ret);
//	return 0;
//}
//void print(int a)
//{
//	printf("the value %c is%d\n", a,a);
//}





 
//#define PRINT(X) printf("the value "#X" is:%d\n",X);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value is:%d", a);
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MAX(a++, b++);
//	printf("MAX=%d\n", ret);//21
//	printf("%d\n", a);//11
//	printf("%d\n", b);//22
//	return 0;
//}

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type);
//int main()
//{
//	int ret = SIZEOF(int);
////#undef SIZEOF
//    ret = SIZEOF(int);
//	printf("%d", ret);
//	return 0;
//}

#define DEBUG
int main()
{
#ifdef DEBUG
	printf("heh");
#endif
	return 0;
} 