#include <stdio.h>
struct bankacc{
    int accno;
    float balance;
    char accname[34];
    char ifsecode[11];
    char acctype[10];
};
typedef struct bankacc bka;

int main(){
    bka b1 = {15613091, 10000.00, "john dear", "NIGO0001234", "savings"};
    printf("details of bank account:\n");
    printf("Account Number: %d\n", b1.accno);
    printf("Balance: %.2f\n", b1.balance);
    printf("Account Name: %s\n", b1.accname);
    printf("IFSE Code: %s\n", b1.ifsecode);
    printf("Account Type: %s\n", b1.acctype);
    return 0;
}