#include <stdio.h>
#include <stdlib.h>

int main(){
    int baris, kolom, i, j;
    int satu[10][10], dua[10][10], jumlah[10][10];
    printf("Masukan Jumlah Baris : ");
    scanf("%i", &baris);
    printf("Masukan Jumlah Kolom : ");
    scanf("%i", &kolom);
    // Inputan Matrix A
    printf("Input Matrix A : \n");
    for(i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            printf("Masukan matrix A(%i, %i) : ",j + 1, i + 1);
            scanf("%d", &satu[i][j]);
        }
    }// end matrix A
    printf("\n");
    // Inputan Matrix B
    printf("Input Matrix B : \n");
    for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            printf("Masukan Matrix B(%i, %i) : ",j + 1, i + 1);
            scanf("%d", &dua[i][j]);
        }
    }// end matrix B
    system("pause");
    system("cls");
    // Tampilan Matrix A
    printf("Matrix A : \n");
    for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            printf("[ %d ]", satu[i][j]);
        }
        printf("\n");
    }
    // Tapilan Matrix B
    printf("Matrix B : \n");
    for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            printf("[ %d ]", dua[i][j]);
        }
        printf("\n");
    }
    printf("=====================================\n");
    // Penjumlahan Matrix
    printf("Penjumlahan Matrix A dan B : \n");
     for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            jumlah[i][j] = satu[i][j] + dua[i][j];
            printf("[ %3d ]", jumlah[i][j]);
        }
        printf("\n");
     }
     printf("====================================\n");
     printf("Pengurangan Matrix A dan B : \n");
     for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            jumlah[i][j] = satu[i][j] - dua[i][j];
            printf("[ %d ]", jumlah[i][j]);
        }
        printf("\n");
     }
     printf("====================================\n");
     printf("Perkalian Matrix A dan B : \n");
     for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            jumlah[i][j] = satu[i][j] * dua[i][j];
            printf("[ %d ]", jumlah[i][j]);
        }
        printf("\n");
     }
     printf("====================================\n");
     printf("Pembagian Matrix A dan B : \n");
     for( i = 0; i < baris; i++){
        for( j = 0; j < kolom; j++){
            jumlah[i][j] = satu[i][j] / dua[i][j];
            printf("[ %d ]", jumlah[i][j]);
        }
        printf("\n");
     }
}
