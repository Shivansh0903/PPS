#include <stdio.h>
#include <math.h>

int main()
{
    int exshrmprc,rto,ins,onrdprc,tcs;
    int loanamt,n,emi;
    float rate=0.105; 
    char fuel[1],transmission[1],variant[2],loan[1];
    printf("Enter fuel type [P/D]: ");
    scanf("%s",fuel);
    printf("Enter transmission type [A/M]: ");
    scanf("%s",transmission);
    printf("Enter variant [S/X/O]: ");
    scanf("%s",variant);
    if(*fuel == 'P' && *transmission == 'A' && *variant=='S'){
        exshrmprc = 1557600;
        rto = 0. * exshrmprc;
        ins = 5000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'P' && *transmission == 'A' && *variant == 'X'){
        printf("Variant not available in selected criteria");
    }
    else if(*fuel == 'P' && *transmission == 'A' && *variant == 'O'){
        exshrmprc = 1722000;
        rto = 0.1 * exshrmprc;
        ins = 5000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'P' && *transmission == 'M' && *variant=='S'){
        exshrmprc = 1283600;
        rto = 0.1 * exshrmprc;
        ins = 5000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'P' && *transmission == 'M' && *variant=='X'){
        exshrmprc = 1359300;
        rto = 0.1 * exshrmprc;
        ins = 5000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'P' && *transmission == 'M' && *variant=='O'){
        exshrmprc = 1438000;
        rto = 0.1 * exshrmprc;
        ins = 5000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'D' && *transmission == 'A' && *variant=='S'){
        printf("Variant not available in selected criteria");
    }
    else if(*fuel == 'D' && *transmission == 'A' && *variant=='X'){
        printf("Variant not available in selected criteria");
    }
    else if(*fuel == 'D' && *transmission == 'A' && *variant=='O'){
        exshrmprc = 1803100;
        rto = 0.10 * exshrmprc;
        ins = 10000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'D' && *transmission == 'M' && *variant=='S'){
        exshrmprc = 1356000;
        rto = 0.13 * exshrmprc;
        ins = 10000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'D' && *transmission == 'M' && *variant=='X'){
        exshrmprc = 1455000;
        rto = 0.13 * exshrmprc;
        ins = 10000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else if(*fuel == 'D' && *transmission == 'M' && *variant=='O'){
        exshrmprc = 1662000;
        rto = 0.13 * exshrmprc;
        ins = 10000;
        tcs = 0.01 * exshrmprc;
        onrdprc = exshrmprc + rto + ins+ tcs;
        printf("The onroad price is %d",onrdprc);
    }
    else{
        printf("Invalid input");
    }
    
    
    printf("\nWould you like to opt for a loan [Y/N]: ");
    scanf("%s",loan);
    if(*loan == 'Y'){
        printf("Enter the loan amount: ");
        scanf("%d",&loanamt);
        printf("Enter the loan tenure in months[12/24/36/48/60]: ");
        scanf("%d",&n);
        rate=rate/12;
        emi = loanamt * rate * (pow(1+rate,n) / (pow(1+rate,n)-1));
        printf("The EMI is %0.2f",(float)emi);
    }
    else if(*loan == 'N'){
        printf("Thank you for using our service");
    }
    else{
        printf("Invalid input");
    }
    return 0;

}