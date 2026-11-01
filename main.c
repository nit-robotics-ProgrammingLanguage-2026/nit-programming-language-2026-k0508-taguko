#include <stdio.h>

int main(void)
{
    int n;
    bool flag = false;
    scanf("%d", &n);
    /* TODO: 課題0508 */
    if (n < 0)
        printf("Error");
    else if (n == 0)
        printf("No");
    else {
        if (n % 3 == 0) {
            flag = true;
            printf("Up");
        }
        if (n % 5 == 0) {
            flag = true;
            printf("Go");
        }
        if (n % 7 == 0) {
            flag = true;
            printf("!!");
        }
        if (flag == false)
            printf("No");
    }
    return 0;
}

