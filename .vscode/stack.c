 #include <stdio.h>
#include <stdlib.h>

// Define a structure for the stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack with a given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

// Function to evaluate the expression
int evaluateExpression(char expression[], int A, int B, int C, int D) {
    struct Stack* stack = createStack(strlen(expression));
    
    for (int i = 0; expression[i] != '\0'; ++i) {
        if (expression[i] >= 'A' && expression[i] <= 'D') {
            // If the character is a variable (A, B, C, D), push its value onto the stack
            switch (expression[i]) {
                case 'A':
                    push(stack, A);
                    break;
                case 'B':
                    push(stack, B);
                    break;
                case 'C':
                    push(stack, C);
                    break;
                case 'D':
                    push(stack, D);
                    break;
            }
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            // If the character is an operator, perform the operation using the top two elements from the stack
            int operand2 = pop(stack);
            int operand1 = pop(stack);
            
            switch (expression[i]) {
                case '+':
                    push(stack, operand1 + operand2);
                    break;
                case '-':
                    push(stack, operand1 - operand2);
                    break;
                case '*':
                    push(stack, operand1 * operand2);
                    break;
                case '/':
                    push(stack, operand1 / operand2);
                    break;
            }
        }
    }

    // The final result is on top of the stack
    return pop(stack);
}

int main() {
    int A, B, C, D;

    // Taking input for variables A, B, C, and D
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);

    // Constructing the expression with user-input values
    char expression[] = "A + B * C + D";

    // Evaluating the expression and displaying the result
    int result = evaluateExpression(expression, A, B, C, D);
    printf("Result of the expression %s is: %d\n", expression, result);

    return 0;
}
[9:08 am, 13/02/2024] +91 94510 73100: #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack with a given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

// Function to evaluate the expression
int evaluateExpression(const char* expression, int A, int B, int C, int D) {
    struct Stack* stack = createStack(strlen(expression));
    
    for (int i = 0; expression[i] != '\0'; ++i) {
        if (expression[i] >= 'A' && expression[i] <= 'D') {
            // If the character is a variable (A, B, C, D), push its value onto the stack
            switch (expression[i]) {
                case 'A':
                    push(stack, A);
                    break;
                case 'B':
                    push(stack, B);
                    break;
                case 'C':
                    push(stack, C);
                    break;
                case 'D':
                    push(stack, D);
                    break;
            }
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            // If the character is an operator, perform the operation using the top two elements from the stack
            int operand2 = pop(stack);
            int operand1 = pop(stack);
            
            switch (expression[i]) {
                case '+':
                    push(stack, operand1 + operand2);
                    break;
                case '-':
                    push(stack, operand1 - operand2);
                    break;
                case '*':
                    push(stack, operand1 * operand2);
                    break;
                case '/':
                    push(stack, operand1 / operand2);
                    break;
            }
        }
    }

    // The final result is on top of the stack
    return pop(stack);
}

int main() {
    int A, B, C, D;

    // Taking input for variables A, B, C, and D
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Enter the value of C: ");
    scanf("%d", &C);
    printf("Enter the value of D: ");
    scanf("%d", &D);

    // Constructing the expression with user-input values
    const char expression[] = "A + B * C + D";

    // Evaluating the expression and displaying the result
    int result = evaluateExpression(expression, A, B, C, D);
    printf("Result of the expression %s is: %d\n", expression, result);

    return 0;
}