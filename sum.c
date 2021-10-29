#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// lower algorithmic
int sum(char **av, int ac)
{
    int total = 0;
    for (int i = 1; i <= ac ; i++) {
        total += atoi(av[i]);
    }
    return (total);
}

//recursive algorithmic
int sum_r(char **av, int ac)
{
    
}


int main(int ac, char **av)
{
    sum(av, ac);
}