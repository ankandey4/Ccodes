#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {
    if (cr == er && cc == ec) return 1; // যদি শেষ গন্তব্যে পৌঁছাই

    if (cr == er) return maze(cr, cc + 1, er, ec); // কেবল ডানে যাওয়া যাবে
    if (cc == ec) return maze(cr + 1, cc, er, ec); // কেবল নিচে যাওয়া যাবে

    return maze(cr + 1, cc, er, ec) + maze(cr, cc + 1, er, ec); // দুই পথেই চেষ্টা
}

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Total paths: %d\n", maze(1, 1, n, m));

    return 0;
}

