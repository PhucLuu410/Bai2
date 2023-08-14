#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        printf("Usage: %s <num1> <num2> \\n", argv[0]);
        return 1;
    }
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    for(int num=a;num<=b;num++)
    {   
        int count=0;
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num % i==0)
            {
                count++;
            }
        }
        if(count == 0)
            {
                printf("Prime numbers in the range from %d to %d:%d\n",a,b,num);
            }
        
    }
}


