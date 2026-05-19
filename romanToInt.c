int get_value(char c)
{
    if (c == 'I')
        return (1);
    if (c == 'V')
        return (5);
    if (c == 'X')
        return (10);
    if (c == 'L')
        return (50);
    if (c == 'C')
        return (100);
    if (c == 'D')
        return (500);
    if (c == 'M')
        return (1000);
    return (0);
}

int romanToInt(char *s)
{
    int total;
    int i;
    int current;
    int next;

    total = 0;
    i = 0;

    while (*s)
    {
        current = get_value(*s);
        next = get_value(*(s + 1));
        if (current < next)
            total -= current;
        else
            total += current;
        s++;
    }
    return (total);
}
