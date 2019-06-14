#include <stdio.h>
// DICKY IBROHIM
void MinMax (int input)
{
    int min=100, max=0;
    int myarray [100];
    for (loop1=1;loop1<=input;loop1++)
    {
        printf ("Input Number %d: ",loop1); scanf ("%d",&myarray[loop1]);
        if (loop1==1){min=myarray[loop1]; max=myarray[loop1];}
        else if (min>myarray[loop1]){min=myarray[loop1];}
        else if (max<myarray[loop1]){max=myarray[loop1];}
    }
    printf ("Min= %d, Max=%d", min, max);
}
int main ()
{   int input;
    printf ("Input Number: "); scanf ("%d",&input);
    MinMax (input);
}
