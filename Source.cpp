#include<stdio.h>
int x[2];
void rectangleArea(int, int);
int main()
{
		char Rec[2][10] = { "Width","Height" };
			printf("\n---RECTANGLE AREA---\n");
			int r;
			for (r = 0; r < 2; r++)
			{
				printf("%s : ", Rec[r]);
				scanf_s("%d", &x[r]);
			}
			rectangleArea(x[0], x[1]);
			printf("\n---End---\n");
}
void rectangleArea(int width, int height)
{
	int i, j;
	if (width <= 0 || height <= 0)
	{
		printf("BEEP! ERROR");
	}
	else
	{
		int area = width * height;
		printf("Rectangle area : %.d\n",area);
		for (i = 1; i <= height; i++)
		{
			for (j = 1; j <= width; j++)
			{
				if (i == 1 || i == height)
				{
					printf("* ");
				}
				else if (j == 1 || j == width)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
}