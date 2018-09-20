
#include <stdio.h>
#include <unistd.h>

struct Node
{
	int data;
	struct Node* next;
};

void ft_atoib(int64_t value, int base);
void ft_putabsl(int value);
void ft_putnbr(int d);
void ft_putstr(char* s);
void ft_putchar(char c);
