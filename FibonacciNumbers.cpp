#include<iostream>
using namespace std;

unsigned long long int RecursiveMethod(int number){
    if(number==0)
        return 0;
    else if(number==1)
        return 1;
    else
        return RecursiveMethod(number-1)+RecursiveMethod(number-2);
}

unsigned long long int DynamicProgrammingMethod(int number){
    if(number==0)
        return 0;
    else if(number==1)
        return 1;
    else{
        unsigned long long int firstnumber = 0;
        unsigned long long int secondnumber = 1;
        unsigned long long int result =0;
        for (int count = 2 ; count <= number ; count++){
            result = firstnumber + secondnumber;
            firstnumber = secondnumber;
            secondnumber = result;
        }
        return result;
    }   
}

void FibonacciNumbers (){
    printf("You can enter -1 to suspend the program or enter natural nnumber to get Fibonacci Numbers.\n");
    printf("You can enter 1 to get Fibonacci Numbers with recursive method \nor enter 2 to get Fibonacci Numbers with dynamic programming method.\n");
    printf("Input Number: ");
    int inputnumber = 0;
    scanf("%d",&inputnumber);
    int method = 2;
    printf("Method: ");
    scanf("%d",&method);
    while(inputnumber != -1){
        if(method == 1)
            printf("Fibonacci Numbers : %llu\n",RecursiveMethod(inputnumber));
        else if(method == 2)
            printf("Fibonacci Numbers : %llu\n",DynamicProgrammingMethod(inputnumber));
        printf("Input Number: ");
        scanf("%d",&inputnumber);
        printf("Method: ");
        scanf("%d",&method);       
    }
}
int main(){
    FibonacciNumbers();
    system("pause");
    return 0;
}