#include<stdio.h>
#include<stdlib.h>
int *zorad(int *pole,int pocet)
{
    int i,j,najmen,index,pocet_prepis=0;
    int *pole_tmp;
    pole_tmp=(int*) malloc(pocet*sizeof(int));    
    najmen=pole[0];
    for(j=0;j<pocet;j++){
        for(i=0;i<pocet-pocet_prepis;i++)
            {
                if(pole[i]<=najmen)
                    {
                        najmen=pole[i];
                        index=i;
                    }
            }
        printf("najmen %d\n",najmen);
        pole_tmp[pocet_prepis]=najmen;
        for(i=index;i<pocet-pocet_prepis;i++)
            {
               pole[i]=pole[i+1];
            }
        najmen=pole[0];
        pole_tmp[pocet_prepis]=najmen;
        pocet_prepis++;
    }
    for(i=0;i<pocet;i++)
        pole[i]=pole_tmp[i];
    for(i=0;i<pocet;i++)
    free(pole_tmp);
    return pole;
}

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

int main()
{
    int pocet, *pole;
    scanf("%d",&pocet);
    pole=nacitaj_pole_int(pocet);
    pole=zorad(pole,pocet);
    //vypis_pole_int(pole,pocet);
    return 0;
}