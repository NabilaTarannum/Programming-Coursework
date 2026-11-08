#include <stdio.h>
#include <stdbool.h>

int main() {
    int year = 2100;
    bool is_leep_year = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    if (is_leep_year) {
        printf("leep year");
    }
    else {
        printf("not leep year");
    }
    return 0;
}
/*
    2020 -> Leap year      divisible by 4
    2100 -> not leap year  not div by 100
    2000 -> leap year      div by 400
*/