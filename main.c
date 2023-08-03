#include <stdio.h>
#include<fcntl.h>
#include "get_next_line.h"
int main()
{
	int fd = open("a.txt",O_RDWR);
	char *s = get_next_line(fd);
	while(s)
	{
		printf("%s",s);
		free(s);
		s =  get_next_line(fd);
	}
	close(fd);
}

//-----------------------------------------------------
//function for prints the desired line from text to the screen
/*char *find_line(int index,int fd)
{
	int len = 0;
	while(len < index - 1)
	{	
		len++;	
		get_next_line(fd);
	}
	char *s = get_next_line(fd);
	return(s);
}
int main()
{
	int fd = open("a.txt",O_RDWR);
	int line;
	printf("Lütfen satır sayısını giriniz : ");
	scanf("%d",&line);
	printf("%d. satır -> %s",line,find_line(line,fd));
}
*/
//-----------------------------------------------------
// function return line between index and index2 
/*void x(int index,int index2,int fd)
{
	int len = 0;
	int p = 0;
	if(index <= index2)
	{
		while(len < index)
		{	
			len++;	
			get_next_line(fd);
		}
		len = 0;
		while(len < index2-index-1)
		{
			printf("%s",get_next_line(fd));
			len++; 
		}	
	}
	else
	{
		p = index2;
		index2 = index; 
		index = p;
		x(index,index2,fd);
	}
}
int main()
{
	int fd = open("a.txt",O_RDWR);
	printf("Lines between %d - %d\n",9,12);
	printf("-------------------------");
	printf("\n");
	x(9,12,fd);
}
*/