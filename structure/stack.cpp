#include <iostream>
using namespace std;

#define SIZE 100

int top;
int numarr[SIZE];

void init(void)
{
    top = 0;
}

void push(int n)
{
    if (top >= SIZE)
    {
        cout << "Error" << endl;
        return ;
    }
    numarr[top] = n;
    top++;
}

int pop(void)
{
    int res;

    if (top == 0)
        return (-1);
    res = numarr[top - 1];
    top--;
    return (res);
}

int stack(string arr)
{
    int i;
    int a;
    int b;
    int res;

    i = 0;
    while (i < arr.size())
    {
        if (isdigit(arr[i]))
            push(arr[i] - '0');
        else 
        {
            a = pop();
            b = pop();
            if (arr[i] == '+')
                res = b + a;
            else if (arr[i] == '-')
                res = b - a;
            else if (arr[i] == '*')
                res = b * a;
            else if (arr[i] == '/')
                res = b / a;
            else 
                cout << "Error" << endl;
            push(res);
        }
        i++;
    }
    return (pop());
}

