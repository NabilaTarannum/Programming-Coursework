#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;
    char op;

    scanf("%d %c %d", &num1, &op, &num2);

    int result;

/*
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
*/

    switch (op) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            printf("%d", num1 / num2);
            break;
        default:
            printf("unknown op");
            break;
    }
    
    return 0;
}

/* 

number op numbefr
5 + 5
6 - 3
7 * 4 
8 / 2
*/