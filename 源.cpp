#include<iostream>
#include<cstdio>
#include<time.h>
using namespace std;
int a[5]= { 1,1,1,1,1 };
int question(int A, int k, int count, int s)
{
	void set(int count);
	int h = 0;
	int x;
	int r;
	int flag1 = 1;
	int flag2 = 0;
	FILE* fp;
	fp = fopen("aa.txt", "w");
	if (A == 1)
	{
		h = 10;
	}
	else if (A == 2)
	{
		h = 100;
	}
	else if (A == 3)
	{
		h = 1000;
	}
	srand(time(NULL));
	for (int i = 0; i < count; i++)
	{
		printf("(%d) ", i + 1);
		if (a[4] == 1)
		{
			if ((fp = fopen("aa.txt", "a")) == NULL)   //�����ʽд�뵽�ļ�
			{
				printf("���ܴ��ļ���\n");
				exit(0);
			}
			fprintf(fp, "(%d) ", i + 1);
			fclose(fp);
		}
		r = rand() % 7 + 2;
		for (int j = 0; j < r + 1; j++)
		{
			if (j != r)
			{
				{
					if (k == 1 && flag2 == 0 && rand() % 2 == 1)
					{
						printf(" ( ");
						if (a[4] == 1)
						{
							if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
							{
								printf("���ܴ��ļ���\n");
								exit(0);
							}
							fprintf(fp, " ( ");
							fclose(fp);
						}
						flag2 = 1;
						flag1 = 1;
					}
					if (s == 1)
					{
						printf("%d", rand() % h);
						if (a[4] == 1)
						{
							if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
							{
								printf("���ܴ��ļ���\n");
								exit(0);
							}
							fprintf(fp, "%d", rand() % h);
							fclose(fp);
						}
					}
					else
					{
						printf("%.2f", rand() / (double)(RAND_MAX / h));
						if (a[4] == 1)
						{
							if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
							{
								printf("���ܴ��ļ���\n");
								exit(0);
							}
							fprintf(fp, "%.2f", rand() / (double)(RAND_MAX / h));
							fclose(fp);
						}
					}
					if (k == 1 && flag2 == 1 && rand() % 2 == 1 && flag1 != 1)
					{
						printf(" ) ");
						if (a[4] == 1)
						{
							if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
							{
								printf("���ܴ��ļ���\n");
								exit(0);
							}
							fprintf(fp, " ) ");
							fclose(fp);
						}
						flag2 = 0;
					}
					flag1 = 0;
					x = rand() % 5;
					switch (x)
					{
					case 0:
					case 1:
						if (a[0] == 1)
						{
							printf(" + ");
							if (a[4] == 1)
							{
								if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
								{
									printf("���ܴ��ļ���\n");
									exit(0);
								}
								fprintf(fp, " + ");
								fclose(fp);
							}
							break;
						}
					case 2:
						if (a[1] == 1)
						{
							printf(" - ");
							if (a[4] == 1)
							{
								if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
								{
									printf("���ܴ��ļ���\n");
									exit(0);
								}
								fprintf(fp, " - ");
								fclose(fp);
							}
							break;
						}
					case 3:
						if (a[2] == 1)
						{
							printf(" * ");
							if (a[4] == 1)
							{
								if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
								{
									printf("���ܴ��ļ���\n");
									exit(0);
								}
								fprintf(fp, " * ");
								fclose(fp);
							}
							break;
						}
					case 4:
						if (a[3] == 1)
						{
							printf(" / ");
							if (a[4] == 1)
							{
								if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
								{
									printf("���ܴ��ļ���\n");
									exit(0);
								}
								fprintf(fp, " / ");
								fclose(fp);
							}
							break;
						}
					}
				}
			}
			else
			{
				printf("%d ", rand() % h);
				if (a[4] == 1)
				{
					if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
					{
						printf("���ܴ��ļ���\n");
						exit(0);
					}
					fprintf(fp, "%d ", rand() % h);
					fclose(fp);
				}
				if (flag2 == 1)
				{
					printf(" ) ");
					if (a[4] == 1)
					{
						if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
						{
							printf("���ܴ��ļ���\n");
							exit(0);
						}
						fprintf(fp, " ) ");
						fclose(fp);
					}
					flag2 = 0;
				}
				printf(" = ?\n");
				if (a[4] == 1)
				{
					if ((fp = fopen("aa.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
					{
						printf("���ܴ��ļ���\n");
						exit(0);
					}
					fprintf(fp, " = ?\n");
					fclose(fp);
				}
			}
		}
	}
	return count;
}
	int main()
	{
		question(2,1,11,1);//��ֵ��Χ���Ƿ������š���Ŀ�����Ƿ�С��
		return 0;
	}

