#include <stdio.h>
#include <stdlib.h>

typedef struct Inventory
{
    int item_no;
    char item_name[20];
    int quantity;
    float rate;
} Inventory;

int main()
{
    Inventory inv[5];
    int i;
    float total=0;
    for(i=0;i<5;i++)
    {
        printf("-------%d-------\n",i+1);
        printf("Enter item no.: ");
        scanf("%d",&inv[i].item_no);
        printf("Enter item name: ");
        scanf("%s",inv[i].item_name);
        printf("Enter quantity: ");
        scanf("%d",&inv[i].quantity);
        printf("Enter rate: ");
        scanf("%f",&inv[i].rate);
    }
    printf("\n");
    printf("Item no.\tItem name\tQuantity\tRate\n");
    for(i=0;i<5;i++){
        if(inv[i].quantity != 0)
            {
                printf("%d\t\t%s\t\t%d\t\t%f\n",inv[i].item_no,inv[i].item_name,inv[i].quantity,inv[i].rate);
                total += inv[i].rate*inv[i].quantity;
            }
    }
    printf("\t\t\t\tGrand Total:\t%.2f",total);
    return 0;
}
