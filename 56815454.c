//primality test solution
#include<stdio.h>
int main()
{
    int Testcases;//number of testcases
    scanf("%d",&Testcases);
    
    for(int i=0;i<Testcases;i++)
    {
        int number,count=0;
        scanf("%d",&number);
        for(int i=1;i<=number;i++)
        {
            if(number%i==0)
            count++;
        }
        if(count==2)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
//Code By Bhumika Nayak