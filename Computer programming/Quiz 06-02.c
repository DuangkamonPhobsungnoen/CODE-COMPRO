#include<stdio.h>
 
int main() {
    int M[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    printf("%d %d %d\n", M[0][0], M[0][1]*0, M[0][2]*0);
    printf("%d %d %d\n", M[1][0]*0, M[1][1], M[1][2]*0);
    printf("%d %d %d\n", M[2][0]*0, M[2][1]*0, M[2][2]);
    return 0;
}
