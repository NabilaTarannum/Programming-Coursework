#include <stdio.h>
#include <stdbool.h>

int main () {
    // and operatore
    int num;
    scanf("%d", &num);

    
    if (num >= 0 && num <= 1) {
        printf("okay\n");
    }
    else {
        printf("not okay\n");
    }

    // or operatore
    char ch;
    scanf("%c", &ch);

    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel\n");
    }
    else {
        printf("consonant\n");
    }

    // not operatore
    int _num;
    scanf("%d", &_num);

    if ( ! (_num >= 0 && _num <= 1)) {
        printf("okay\n");
    }
    else {
        printf("not okay\n");
    }
    return 0;
}
// output is wrong but code is right.