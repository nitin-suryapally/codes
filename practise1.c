// Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction 
// if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction 
// (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's 
// account balance after an attempted transaction.

// Example - Successful Transaction
// Input:
// 30 120.00

// Output:
// 89.50
// Example - Incorrect Withdrawal Amount (not multiple of 5)
// Input:
// 42 120.00

// Output:
// 120.00
// Example - Insufficient Funds
// Input:
// 300 120.00

// Output:
// 120.00

#include<stdio.h>

int main(){
float y,output;
int x;

scanf("%d %f",&x, &y);

if(x>2000 || y>2000){
    return 0;
}

if(x%5!=0){
    
    printf(" %.2f \n",y);
}

else{
    output = y-x-0.5;
    printf(" %.2f ",output);
}

return 0;
}