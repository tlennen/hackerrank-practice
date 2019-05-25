#include <stdio.h>

// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen

void update(int *a,int *b) {
    int x = *a + *b;
    int y = *a - *b;
    if (y < 0)
        y = -y;
    *a = x;
    *b = y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

