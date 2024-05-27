#include <stdio.h>
#include <stdlib.h>

//function prototypes
void add();
void subtract();
void multiply();
void divide();
void exitCalc();


//main function
int main()
{
    int choice;

    while(1)
    {
        printf("\nPlease enter your choice..!\n\n");
        printf("1 : Additon\n");
        printf("2 : Subtraction\n");
        printf("3 : Multiplicaiton\n");
        printf("4 : Division\n");
        printf("5 : Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            add();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;

        case 4:
            division();
            break;

        case 5:
            exitCalc();
            break;

        default:
            printf("Invalid choice. Please enter a valid choice..!\n");
        }
    }

    return 0;
}


void add()
{
    double num1, num2;
    printf("\nEnter any two number for addition\n");
    scanf("%lf%lf", &num1, &num2);
    printf("\nAdditon = %0.2lf", num1 + num2);
}


void subtract()
{
    double num1, num2;
    printf("\nEnter any two number for subtract\n");
    scanf("%lf%lf", &num1, &num2);
    printf("\nSubtraction = %0.2lf", num1 - num2);
}

void multiply()
{
    double num1, num2;
    printf("\nEnter any two number for multiplication\n");
    scanf("%lf%lf", &num1, &num2);
    printf("\nMultiplication = %0.2lf", num1 * num2);
}


void division()
{
    double num1, num2;
    printf("\nEnter any two number for division\n");
    scanf("%lf%lf", &num1, &num2);

    if(num2 != 0){
        printf("\nDivision = %0.2lf", num1 / num2);
    }else{
        printf("\nDivison by zero error..!\n");
    }
}


void exitCalc()
{
    printf("\nYou have choosen to exit. Goodbye see you soon..!\n");
    exit(0);
}
