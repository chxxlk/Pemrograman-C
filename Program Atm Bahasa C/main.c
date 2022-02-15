#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    int pilihan;
    mulai :
    system("cls");
    printf("Menu\n");
    printf("1. Anak Panah\n");
    printf("2. ATM\n");
    printf("Masukan Pilihan : ");
    scanf("%d", &pilihan);
    switch(pilihan){
        case 1:{
            int tinggi_panah;
            printf("Masukan Tinggi Panah : ");
            scanf("%d", &tinggi_panah);
            if(tinggi_panah == 0){
                printf("Inputan Tidak Boleh 0\n");
                system("pause");
                goto mulai;
            }else{
                for(int i = 0; i <= tinggi_panah; i++){
                    for(int j = i; j <= tinggi_panah; j++){
                        printf(" *");
                    }
                    for(int k = 0; k <= i; k++){
                        printf(" ");
                    }
                    for(int l = i; l <= tinggi_panah; l++){
                        printf(" *");
                    }
                    printf("\n");
                }
                for(int i = 0; i <= tinggi_panah; i++){
                    for(int j = 0; j <= i; j++){
                        printf(" *");
                    }
                    for(int k = i; k <= tinggi_panah; k++){
                        printf(" ");
                    }
                    for(int l = 0; l <= i; l++){
                        printf(" *");
                    }
                    printf("\n");
                }
                goto mulai;
            }

        }break;
        case 2 :{
            int pilih, saldo = 0, setor;
            char user[10], pass[10];
            login :
            printf("Username : ");
            scanf("%s", &user);
            printf("Password : ");
            scanf("%s", &pass);
            if(strcmp(user,"user")==0 && strcmp(pass,"123456")==0){
                printf("Login berhasil\n");
                system("pause");
                goto awal;
            }else{
                printf("Username atau Password Salah\n");
                goto login;
            }
            awal:
            system("cls");
            printf("Menu ATM \n");
            printf("Jumlah Saldo : %d\n", saldo);
            printf("1. Setor \n");
            printf("2. Transfer \n");
            printf("3. Tarik\n");
            printf("4. Keluar\n");
            printf("Masukan Pilihan : ");
            scanf("%d", &pilih);
            switch(pilih){
                case 1:{
                    system("cls");
                    printf("Setor \n");
                    printf("Masukan Jumlah Setoran : ");
                    scanf("%d", &setor);
                    saldo = saldo_setor(saldo, setor);
                    printf("Jumlah Setoran = %d\n", setor);
                    printf("Saldo anda : %d\n", saldo);
                    system("pause");
                    goto awal;
                }break;
                case 2:{
                    int no_rek, transfer;
                    tran:
                    printf("Transfer\n");
                    printf("Jumlah Saldo : %d\n", saldo);
                    printf("Masukan Nomor Rekening : ");
                    scanf("%d", &no_rek);
                    if(no_rek == inputangka()){
                        printf("No Rekenign Tidak Valid\n");
                        system("pause");
                        goto tran;
                    }else{
                        printf("Masukan Jumlah Transfer : ");
                        scanf("%d", &transfer);
                        if(transfer >= saldo){
                            printf("Error Saldo Tidak Mencukupi !\n");
                            system("pause");
                            goto awal;
                        }else{
                            no_rek = inputangka();
                            printf("No Rekening : %d\n", no_rek);
                            printf("Jumlah Transfer : %d\n", transfer);
                            saldo = saldo_transfer(saldo, transfer);
                            printf("Jumlah Slado : %d\n", saldo);
                            system("pause");
                            goto awal;
                        }
                    }
                }break;
                case 3:{
                    int tarik;
                    printf("Tarik\n");
                    printf("Jumlah Saldo : %d\n", saldo);
                    printf("Masukan Jumlah Penarikan : ");
                    scanf("%d", &tarik);
                    if(tarik >= saldo){
                        printf("Saldo Tidak Mencukupi\n");
                        system("pause");
                        goto awal;
                    }else{
                        printf("Penarikan Berhasil\n");
                        printf("Jumlah Penarikan : %d\n", tarik);
                        saldo = saldo_tarik(saldo, tarik);
                        printf("Jumlah Saldo : %d\n", saldo);
                        system("pause");
                        goto awal;
                    }
                }break;
                case 4:{
                    return(exit);
                }
                default:{
                    printf("Inputan Salah\n");
                    system("pause");
                    goto awal;
                }
        }
    }
    default:{
        printf("Inputan Salah \n");
        goto mulai;
    }
}
}
void saldo_setor(int saldo_1, int setor_1){
    int saldo_setor_1 = saldo_1 + setor_1;
}
void saldo_transfer(int saldo_1, int transfer_1){
    int saldo_transfer_1 = saldo_1 - transfer_1;
}
void saldo_tarik(int saldo_1, int tarik_1){
    int saldo_tarik_1 = saldo_1 - tarik_1;
}
int inputangka(){
    char ch;
    char * data;
    data = (char *) malloc(sizeof(char));

    int index = 0;
    while((ch = _getch()) != 13){
        if(ch >= '0' && ch <= '9'){
            printf("%c", ch);
            data[index] = ch;
            index++;
        }
    }
    data[index] = '\0';
    return atoi(data);
}
//int main(){
//    int tinggi;
//    printf("masukan tingi : ");
//    scanf("%d", &tinggi);
//    for(int i = 0; i <= tinggi; i++){
//        for(int j = 1; j <= tinggi; j++){
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//    for(int i = 0; i <= tinggi; i++){
//        for(int j = i; j <= tinggi; j++){
//            printf("%d", j);
//        }
//        printf("\n");
//    }
//    for(int i = 0; i <= tinggi; i++){
//        for(int j = 1; j <= i; j++){
//            printf("X");
//        }
//        for(int k = 1; k <= tinggi; k++){
//                printf("%d", k + 1);
//            }
//        printf("\n");
//    }
//}
