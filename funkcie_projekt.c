#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int *nacitaj_pole_int(int pocet_c)
{
    int *n,i;
    n=(int*) malloc(pocet_c*sizeof(int));
    for(i=0;i<pocet_c;i++)
            scanf("%d",&n[i]);
    return n;
}
void vypis_pole_int(int *n,int pocet_c)
{
    int i=0;
    for(i=0;i<pocet_c;i++)
        printf("%d ",n[i]);
    printf("\n");
}


int *zorad_bubble(int *n,int pocet_c)
{
    int tmp=0;
    
    do
    {
        tmp=0;
        int i=0,a;
        for(i=0;i<pocet_c-1;i++)
            {
                if(n[i]>n[i+1])
                    {
                        a=n[i];
                        n[i]=n[i+1];
                        n[i+1]=a;
                        tmp++;
                    }
            }
    } while (tmp!=0);
    return n;
}

char *male_pismena(char* x)
{
    int i=0;
    while(x[i]!='\0' || x[i]!='\n')
        {
            if(x[i]>='A' && x[i]<='Z')
                x[i]+=('a'-'A');
        }
}

/*char *nacitaj_string()
{
    char x[500],*pole,i=0;
    gets(x);
    pole=(char*) malloc((strlen(x)+1)*sizeof(char));
    for(i=0;i<=strlen(x);i++)
            pole[i]=x[i];
    return pole;
}*/

int main()
{
    char *n;
    //n=nacitaj_string();
    printf("%s\n",n);
}