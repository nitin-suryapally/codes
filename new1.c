#include <stdio.h>
void step(int n)
{
    if (n < 0)
    {
        return;
    }
    else if (n > 0)
    {
        step(n - 1);
        
    }
    
    printf("%d ", n);
    
}
int main()
{
    int n = 3;
    step(n);

    return 0;
}