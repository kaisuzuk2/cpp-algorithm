#include <iostream>
using namespace std;

struct Node {
	int key;
	Node *prev, *next;
};

Node *nil;

void init(void)
{
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key)
{
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node *list_search(int key)
{
	Node *cur = nil->next;
	while (cur!= nil && cur->key != key)
		cur = cur->next;
	return (cur);
}

void delete_node(Node *t)
{
	if (t == nil)
		return ;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void delete_first(void)
{
	delete_node(nil->next);
}

void delete_last(void)
{
	delete_node(nil->prev);
}