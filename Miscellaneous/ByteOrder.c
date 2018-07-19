#include<stdio.h>
#include<stdlib.h>

#define CPU_VENDOR_OS "intel-gnu-linux"

int main()
{
	union
	{
		short s;
		char c[sizeof(short)];
	}un;
	un.s=0x0102;
	printf("%s\n",CPU_VENDOR_OS);
	if(sizeof(short)==2)
	{
		if(un.c[0]==1 && un.c[1]==2)
		{
			printf("Big endian\n");
		}
		else if(un.c[0]==2 && un.c[1]==1)
		{
			printf("Little endian\n");
		}
		else 
		{
			 printf("Unknown\n");
		}	
	}
	else
	{
		printf("sizeof(short) = %lu",sizeof(short));
	}		
	return 0;
}