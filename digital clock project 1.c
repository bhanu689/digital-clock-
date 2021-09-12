

#include <stdio.h>
#include<conio.h>

int main()
{
    int h,m,s,i;


    printf("enter the current time in format of hh mm ss");

    printf("enter hours");
    scanf(" %d",&h);

    printf("enter minutes");
    scanf("%d",&m);

    printf("enter seconds");
    scanf("%d", &s);

    while(h<24)
    {

    while(m<60)
    {

    while(s<60){

        for(i=0;i<10;i++){
            printf("\n");
        }
        for(i=0;i<6;i++){
            printf("\t");
        }
        printf("hh:mm:ss\n");
        s++;
        for(i=0;i<6;i++);
        {
            printf("\t");
        }
        printf("%d:%d:%d \n",h,m,s);
    }
    m++;
    s=0;

    }
    h++;
    m=0;
    }
    getch();


}
