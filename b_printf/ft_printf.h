#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node node;

node *ft_lappend(node *head, int data);
int	ft_lcount(node *head);
node *ft_lprepend(node *head, int data);
node *ft_lnew(int data, node* next);
node *ft_lrmfront(node *head);
void ft_atoib(int64_t value, int base);
void ft_putabsl(int value);
void ft_putnbr(int d);
void ft_putstr(char* s);
void ft_putchar(char c);

#endif
