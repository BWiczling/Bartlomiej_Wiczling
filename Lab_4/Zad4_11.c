#include <stdio.h>


int main(){
    int tab[5][5];
    tab[0][0]=1;
    int space=5;
    for(int i=0;i<5;i++){
        while(space>i){
            printf("  ");
            space--;
        }
        for(int j=0;j<=i;j++){
            space=5;
            if(i<2||j==0||j==i){
                tab[i][j]=1;
            }
            else{
                tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
            }

            printf("%4d" , tab[i][j]);
        }
        printf("\n"); 

    }
    return 0;
}