#include <stdio.h>
#include<limits.h>
#define INFY 999999999

void print_optimal(int i,int j,int s[20][20]);
void matmultiply(int n,long int m[20][20],int s[20][20],int p[]);
int matrixchainorder(int p[], int i, int j);
void loading();

void main()
{
	int n,i,j,k;
	long int m[20][20];
	int s[20][20],p[20];
	char ans;
	do
	{
		system("cls");
		printf("**************    MATRIX CHAIN MULTIPLICATION(MCM)    ********************");
		printf("\n\nENTER THE NUMBER OF ELEMENTS: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				m[i][i]=0;
				m[i][j]=INFY;
				s[i][j]=0;
			}
		}
		printf("\nENTER THE DIMENSIONS: \n");
		for(k=0;k<=n;k++)
		{
			printf("P%d: ",k);
			scanf("%d",&p[k]);
		}
		loading();
		matmultiply(n,m,s,p);
		printf("\nCOST MATRIX M:\n");
		for(i=1;i<=n;i++)
		{
			for(j=i;j<=n;j++)
			{
				printf("m[%d][%d]: %ld\n",i,j,m[i][j]);
			}
		}
		i=1,j=n;
		printf("\nMULTIPLICATION SEQUENCE : ");
		print_optimal(i,j,s);
		printf("\n\nMINIMUM NUMBER OF MULTIPLICATIONS ARE : %d ",matrixchainorder(p,1,n));
		printf("\n\nDO YOU WANT TO TRY FOR ANOTHER?[y/n]");
		fflush(stdin);
		scanf("%c",&ans);
	}while(ans=='y');
}

void print_optimal(int i,int j,int s[20][20])
{
	if(i==j)
	{
		printf(" A%d ",i);
	}
	else
	{
      printf("( ");
      print_optimal(i, s[i][j],s);
      print_optimal(s[i][j] + 1, j,s);
      printf(" )");
	}
}

void matmultiply(int n,long int m[20][20],int s[20][20],int p[])
{
	long int q;
	int i,j,k;
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			if(i==j)
			{
				m[i][j]=0;
			}
			else
			{
				for(k=i;k<j;k++)
				{
					q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
					if(q<m[i][j])
					{
						m[i][j]=q;
						s[i][j]=k;
					}
				}
			}
		}
	}
}

int matrixchainorder(int p[], int i, int j)
{
	int k;
    int min = INT_MAX;
    int count;
	if(i==j)
	{
		return 0;
	}
	for(k=i;k<j;k++)
	{
		count=matrixchainorder(p, i, k) + matrixchainorder(p, k+1, j) + p[i-1]*p[k]*p[j];
		if(count<min)
		{
			min=count;
		}
	}
	return min;
}

void loading() 
{
	int i;
	printf("\nCALCULATING");
  	for (i=0;i<1; i++) 
  	{
    	printf(".");
		sleep(1);
		printf(".");
    	sleep(1);
    	printf(".");
    	sleep(1);
    	printf("\r              ");
  	}
}
