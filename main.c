#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bagcap=10,value[5],wt[5],cuv=0,rat[5],large,k,pc;
    for(int i=0;i<3;i++){
        printf("Enter  the wt and value of item %d\n",i+1);
        scanf("%d%d",&wt[i],&value[i]);
        rat[i]=value[i]/wt[i];
    }
    for(int i=0;i<=2;i++){
            large=rat[i];
        for(int j=0;j<=2;j++){
            if(rat[j]>=large){
            large=rat[j];
            k=j;
            }
        }
        rat[k]=0;
        if(bagcap>=wt[k]){
            bagcap=bagcap-wt[k];
            cuv=cuv+value[k];
            printf("Added item%d(Rs.%d and wt=%d) and remaining bag capacity is %d\n",k+1,value[k],wt[k],bagcap);
            }
        else{
                cuv=cuv+(value[k]/wt[k])*bagcap;
                pc=(((float)(value[k]/wt[k])*bagcap)/value[k])*100;
                printf("Added %dpc of the item%d(Rs.%d and wt=%d) and remaining bag capacity is %d\n",pc,k+1,value[k],wt[k],0);
            }

    }
                    printf("The cumulative value is %d",cuv);
}
