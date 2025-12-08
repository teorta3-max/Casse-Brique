int analyze_input(char input, int pos, int loop)
{
    if (input == 'q' && pos != 4 || input == 'a' && pos != 3)
    {
        return +1;
    }
    else if (input == 'd' && pos != 46)
    {
        return -1;
    }
    else if (input == 's')
    {
        loop = 0;
    }
    else
    {
        return 0;
    }
}