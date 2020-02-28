#include<stdio.h>
int main()
{
    char a;
    while ( scanf("%c",&a)==1)
    {
        if (a=='1')
            printf("`");
        if (a=='2')
            printf("1");
        if (a=='3')
            printf("2");
        if (a=='4')
            printf("3");
        if (a=='5')
            printf("4");
        if (a=='6')
            printf("5");
        if (a=='7')
            printf("6");
        if (a=='8')
            printf("7");
        if (a=='9')
            printf("8");
        if (a=='0')
            printf("9");
        if (a=='-')
            printf("0");
        if (a=='=')
            printf("-");
        if (a=='W')
            printf("Q");
        if (a=='E')
            printf("W");
        if (a=='R')
            printf("E");
        if (a=='T')
            printf("R");
        if (a=='Y')
            printf("T");
        if (a=='U')
            printf("Y");
        if (a=='I')
            printf("U");
        if (a=='O')
            printf("I");
        if (a=='P')
            printf("O");
        if (a=='[')
            printf("P");
        if (a==']')
            printf("[");
        if (a=='\\')
            printf("]");
        if (a=='S')
            printf("A");
        if (a=='D')
            printf("S");
        if (a=='F')
            printf("D");
        if (a=='G')
            printf("F");
        if (a=='H')
            printf("G");
        if (a=='J')
            printf("H");
        if (a=='K')
            printf("J");
        if (a=='L')
            printf("K");
        if (a==';')
            printf("L");
        if (a=='\'')
            printf(";");
        if (a=='X')
            printf("Z");
        if (a=='C')
            printf("X");
        if (a=='V')
            printf("C");
        if (a=='B')
            printf("V");
        if (a=='N')
            printf("B");
        if (a=='M')
            printf("N");
        if (a==',')
            printf("M");
        if (a=='.')
            printf(",");
        if (a=='/')
            printf(".");
        if (a==' ')
            printf(" ");
        if (a=='\n')
            printf("\n");
    }
    return 0;
}
