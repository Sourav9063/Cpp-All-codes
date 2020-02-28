
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[500],str2[500];
    int x,y,num1,num2;
    while(1)
    {
        gets(str1);
        y=strcmp("DONE",str1);
        if(y==0)
        {
            break;
        }
        num1=0,num2=0;
        for(num1=0; str1[num1]!=NULL; num1++)
        {
            if((str1[num1]>='a'&&str1[num1]<='z'))
            {
                str1[num2]=str1[num1];
                num2++;
            }
            else if(str1[num1]>='A'&&str1[num1]<='Z')
            {
                str1[num2]=str1[num1]+32;  //lower case converted
                num2++;

            }

        }
        str1[num2]=NULL;
        num2=num2-1;
        for(num1=0; str1[num1]!=NULL; num1++,num2--)
        {
            str2[num1]=str1[num2];

        }
        str2[num1]=NULL;
        x=strcmp(str1,str2);
        if(x==0)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }

    }
    return 0;
}
