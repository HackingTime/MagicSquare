#include <stdio.h>
#include <stdlib.h>

int main()
{
    //define ints
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
    int col1, col2, col3, col4, row1, row2, row3, row4, diag1, diag2;

    //scan
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14,&n15, &n16);

    //print square
    printf("\n%d %d %d %d\n"
             "%d %d %d %d\n"
             "%d %d %d %d\n"
             "%d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

           //col1: n1, n5, n9, n13
           //col2: n2, n6, n10, n14
           //col3: n3, n7, n11, n15
           //col4: n4, n8, n12, n16
           //row1: n1, n2, n3, n4
           //row2 n5, n6, n7, n8,
           //row3 n9, n10, n11, n12,
           //row4 n13, n14, n15, n16
           //diag1, n1, n6, n11, n16
           //diag2, n4, n7, n10, n12

           col1 = n1 + n5 + n9 + n13;
           col2 = n2 + n6 + n10 + n14;
           col3 = n3 + n7 + n11 + n15;
           col4 = n4 + n8 + n12 + n16;
           row1 = n1 + n2 + n3 + n4;
           row2 = n5 + n6 + n7 + n8;
           row3 = n9 + n10 + n11 + n12;
           row4 = n13 + n14 + n15 + n16;
           diag1 = n1 + n6 + n11 + n16;
           diag2 = n4 + n7 + n10 + n13;
printf("\n\n     Row 1: %d\n     Row 2: %d\n     Row 3: %d\n     Row 4: %d\n  Column 1: %d\n  Column 2: %d\n  Column 3: %d\n  Column 4: %d\nDiagonal 1: %d\nDiagonal 2: %d\n\n\n\n\n", row1, row2, row3, row4, col1, col2, col3, col4, diag1, diag2);

    return 0;
}
