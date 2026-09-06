
#define SIZE 10000

int top;
char stack[SIZE];

void push(char c)
{
    if (top < SIZE - 1)
    {
        stack[++top] = c;
    }
}

char pop()
{
    if (top >= 0)
        return stack[top--];
    return '\0';
}

int check(char c1, char c2)
{
    if (c1 == '(' && c2 == ')')
        return 1;
    if (c1 == '[' && c2 == ']')
        return 1;
    if (c1 == '{' && c2 == '}')
        return 1;

    return 0;
}

bool isValid(char *s)
{
    top = -1;   

    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(s[i]);
        }
        else
        {
            if (top == -1)   
                return false;

            char ch = pop();

            if (!check(ch, s[i]))
                return false;
        }

        i++;
    }

    return top == -1;
}