#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DATA DI BAWAH INI BERSUMBER DARI GOOGLE

const int Administrasi = 7000; 	//Biaya administrasi pelayanan PDAM

float BPM[2] = {9500, 15000};   //index 0-BPM Rumah Tangga
                                //index 1-BPM Usaha

float tarif[50][3] =  {{1220, 1220, 5760},      //0-Sosial A&G
                       {1320, 1500, 5760},      //1-Sosial B1
                       {1500, 1780, 5820},      //2-Sosial B2
                       {1780, 2060, 5880},      //3-Rumah Tangga D1 - 1
                       {2060, 2340, 5940},      //4-Rumah Tangga D1 - 2
                       {2340, 2620, 6000},      //5-Rumah Tangga D2 - 1
                       {2620, 2900, 6060},      //6-Rumah Tangga D2 - 2
                       {2900, 3180, 6120},      //7-Rumah Tangga D3 - 1
                       {3180, 3460, 6180},      //8-Rumah Tangga D3 - 2
                       {3460, 3740, 6240},      //9-Rumah Tangga D4 - 1
                       {3740, 4020, 6300},      //10=Rumah Tangga D4 - 2
                       {6340, 9200, 9600},      //11-Rumah Tangga D1 - 3
                       {6420, 9350, 9650},      //12-Rumah Tangga D1 - 4
                       {6490, 9500, 9800},      //13-Rumah Tangga D2 - 3
                       {6570, 9650, 9950},      //14-Rumah Tangga D2 - 4
                       {6640, 9800, 10100},     //15-Rumah Tangga D3 - 3
                       {6720, 9950, 10250},     //16-Rumah Tangga D3 - 4
                       {6790, 10100, 10400},    //17-Rumah Tangga D4 - 3
                       {6870, 10250, 10550},    //18-Rumah Tangga D4 - 4
                       {6940, 10400, 10700},    //19-Rumah Tangga D5 - 1
                       {7020, 10550, 10850},    //20-Rumah Tangga D5 - 2
                       {7090, 10700, 11000},    //21-Rumah Tangga D5 - 3
                       {7170, 10850, 11150},    //22-Rumah Tangga D5 - 4
                       {7240, 11000, 11300},    //23-Rumah Tangga D6 - 1
                       {7320, 11150, 11450},    //24-Rumah Tangga D6 - 2
                       {7390, 11350, 11750},    //25-Rumah Tangga D6 - 3
                       {7470, 11750, 12150},    //26-Rumah Tangga D6 - 4
                       {9200, 9850, 10950},     //27-Niaga E1 - 1
                       {9500, 10150, 11250},    //28-Niaga E1 - 2
                       {9800, 10450, 11550},    //29-Niaga E1 - 3
                       {10100, 10750, 11850},   //30-Niaga E1 - 4
                       {10400, 11050, 12150},   //31-Niaga E2 - 1
                       {10700, 11350, 12550},   //31-Niaga E2 - 2
                       {11000, 11650, 13150},   //33-Niaga E2 - 3
                       {11300, 11950, 13950},   //34-Niaga E2 - 4
                       {11600, 12250, 14750},   //35-Niaga E3 - 1
                       {11900, 12550, 15050},   //36-Niaga E3 - 2
                       {12200, 12850, 15850},   //37-Niaga E3 - 3
                       {12500, 13150, 16650},   //38-Niaga E3 - 4
                       {12950, 12950, 17450},   //39-Industri F1 - 1
                       {13400, 13400, 17900},   //40-Industri F1 - 2
                       {13850, 13850, 18850},   //41-Industri F1 - 3
                       {14300, 14300, 20300},   //42-Industri F1 - 4
                       {14750, 14750, 20750},   //43-Industri F2 - 1
                       {15200, 15200, 21200},   //44-Industri F2 - 2
                       {15650, 15650, 21650},   //45-Industri F2 - 3
                       {16100, 16100, 22100}};  //46-Industri F2 - 4

int denda[3] = {0, 1000, 2000};     //index 0-Tanggal 1 - 15 dan Tanggal 16 - 31 && Pemakaian <10 m^3
                                    //index 1-Tanggal 16 - 31 && Pemakaian >=10 m^3 && Pemakaian < 100 m^3
                                    //index 2-Tanggal 16 - 31 && Pemakaian > 100 m^3

char golongan[47][25]={"Sosial A&G",
                       "Sosial B1",
                       "Sosial B2",
                       "Rumah Tangga D1 - 1",
                       "Rumah Tangga D1 - 2",
                       "Rumah Tangga D2 - 1",
                       "Rumah Tangga D2 - 2",
                       "Rumah Tangga D3 - 1",
                       "Rumah Tangga D3 - 2",
                       "Rumah Tangga D4 - 1",
                       "Rumah Tangga D4 - 2",
                       "Rumah Tangga D1 - 3",
                       "Rumah Tangga D1 - 4",
                       "Rumah Tangga D2 - 3",
                       "Rumah Tangga D2 - 4",
                       "Rumah Tangga D3 - 3",
                       "Rumah Tangga D3 - 4",
                       "Rumah Tangga D4 - 3",
                       "Rumah Tangga D4 - 4",
                       "Rumah Tangga D5 - 1",
                       "Rumah Tangga D5 - 2",
                       "Rumah Tangga D5 - 3",
                       "Rumah Tangga D5 - 4",
                       "Rumah Tangga D6 - 1",
                       "Rumah Tangga D6 - 2",
                       "Rumah Tangga D6 - 3",
                       "Rumah Tangga D6 - 4",
                       "Niaga E1 - 1",
                       "Niaga E1 - 2",
                       "Niaga E1 - 3",
                       "Niaga E1 - 4",
                       "Niaga E2 - 1",
                       "Niaga E2 - 2",
                       "Niaga E2 - 3",
                       "Niaga E2 - 4",
                       "Niaga E3 - 1",
                       "Niaga E3 - 2",
                       "Niaga E3 - 3",
                       "Niaga E3 - 4",
                       "Industri F1 - 1",
                       "Industri F1 - 2",
                       "Industri F1 - 3",
                       "Industri F1 - 4",
                       "Industri F2 - 1",
                       "Industri F2 - 2",
                       "Industri F2 - 3",
                       "Industri F2 - 4"};

int cetak_bukti_pembayaran(char nama[100], float pemakaian, float tarif1, float tarif2, float tarif3, int Administrasi, float BPM, float biaya, float output_denda, float total_bayar, int index_golongan);

void main(){
    Registrasi();
    Kelompok();
}

void Registrasi(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||                PEMBAYARAN                ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                  MY PDAM                 ||");
    printf("\n\t||      Save Our Water, Save Our Earth      ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                   OLEH:                  ||");
    printf("\n\t||         I PUTU EKA PUTRA JUNIAWAN        ||");
    printf("\n\t||                 2205551087               ||");
    printf("\n\t||==========================================||");
    printf("\n\t||              |   BERANDA   |             ||");
    printf("\n\t||==========================================||");
    printf("\n\t||              |  DESKRIPSI  |             ||");
    printf("\n\t||    PROGRAM INI AKAN MENGHITUNG JUMLAH    ||");
    printf("\n\t||        PENGELUARAN AIR PELANGGAN         ||");
    printf("\n\t||            SELAMA SATU BULAN             ||");
    printf("\n\t==============================================");
    close();
}

void Kelompok(){
    int golongan;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Kelompok I                            ||");
    printf("\n\t||    ~ Sosial                              ||");
    printf("\n\t||    ~ Non Niaga Bersubsidi                ||");
    printf("\n\t|| 2. Kelompok II                           ||");
    printf("\n\t||    ~ Non Niaga Tanpa Bersubsidi          ||");
    printf("\n\t||    ~ Instansi                            ||");
    printf("\n\t|| 3. Kelompok III                          ||");
    printf("\n\t||    ~ Niaga                               ||");
    printf("\n\t||    ~ Industri                            ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &golongan)==0 || golongan < 0 || golongan > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(golongan==0){
        close();
        end();
    }else if(golongan==1){
        close();
        KelompokI();
    }else if(golongan==2){
        close();
        KelompokII();
    }else if(golongan==3){
        close();
        KelompokIII();
    }
}

void KelompokI(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Sosial                                ||");
    printf("\n\t||    ~ Sosial A&G                          ||");
    printf("\n\t||    ~ Sosial B1                           ||");
    printf("\n\t||    ~ Sosial B2                           ||");
    printf("\n\t|| 2. Non Niaga Bersubsidi                  ||");
    printf("\n\t||    ~ Rumah Tangga A1                     ||");
    printf("\n\t||    ~ Rumah Tangga A2                     ||");
    printf("\n\t||    ~ Rumah Tangga A3                     ||");
    printf("\n\t||    ~ Rumah Tangga A4                     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        sosial();
    }else if(menu==2){
        close();
        non_niaga_bersubsidi();
    }else if(menu==3){
        close();
        Kelompok();
    }
}

void sosial(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||                  SOSIAL                  ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Sosial A&G                            ||");
    printf("\n\t|| 2. Sosial B1                             ||");
    printf("\n\t|| 3. Sosial B2                             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 4. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t||==========================================||");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 4){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        sosial_ag();
        ulang();
    }
    else if(menu==2){
        close();
        sosial_b1();
        ulang();
    }else if(menu==3){
        close();
        sosial_b2();
        ulang();
    }else if(menu==4){
        close();
        KelompokI();
    }
}

void sosial_ag(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||                  SOSIAL                  ||");
    printf("\n\t||                SOSIAL A&G                ||");
    printf("\n\t||               GOLONGAN A&G               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Deskripsi:                                ||");
    printf("\n\t||  Pelanggan yang kegiatan setiap harinya  ||");
    printf("\n\t||  memberikan pelayanan untuk kepentingan  ||");
    printf("\n\t||  umum khususnya bagi masyarakat yang     ||");
    printf("\n\t||  berpenghasilan rendah, antara lain:     ||");
    printf("\n\t||  ~ Kamar mandi umum                      ||");
    printf("\n\t||  ~ WC umum                               ||");
    printf("\n\t||  ~ Terminal air                          ||");
    printf("\n\t||  ~ Hydrant umum                          ||");
    printf("\n\t==============================================");
    proses(0, 1);
}

void sosial_b1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||                  SOSIAL                  ||");
    printf("\n\t||                 SOSIAL B1                ||");
    printf("\n\t||                GOLONGAN B1               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Deskripsi:                                ||");
    printf("\n\t||  Pelanggan yang kegiatan setiap harinya  ||");
    printf("\n\t||  memberikan pelayanan untuk kepentingan  ||");
    printf("\n\t||  umum dan masyarakat serta mendapatkan   ||");
    printf("\n\t||  sumber dana sebagian dari kegiatan,     ||");
    printf("\n\t||  antara lain:                            ||");
    printf("\n\t||  ~ Yayasan sosial                        ||");
    printf("\n\t||  ~ Panti-panti asuhan                    ||");
    printf("\n\t||  ~ Tempat ibadah                         ||");
    printf("\n\t||  ~ Balai banjar                          ||");
    printf("\n\t||==========================================||");
    proses(1, 1);
}

void sosial_b2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||                  SOSIAL                  ||");
    printf("\n\t||                 SOSIAL B2                ||");
    printf("\n\t||                GOLONGAN B2               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Deskripsi:                                ||");
    printf("\n\t||  Pelanggan yang kegiatan setiap harinya  ||");
    printf("\n\t||  memberikan pelayanan untuk kepentingan  ||");
    printf("\n\t||  umum dan masyarakat serta mendapatkan   ||");
    printf("\n\t||  sumber dana sebagian dari kegiatan,     ||");
    printf("\n\t||  antara seperti:                         ||");
    printf("\n\t||  ~ Lembaga Pendidikan Negeri             ||");
    printf("\n\t||  ~ Sekolah Negeri                        ||");
    printf("\n\t||  ~ Perguruan Tinggi Negeri               ||");
    printf("\n\t||  ~ Laboratorium Pendidikan Negeri        ||");
    printf("\n\t||==========================================||");
    proses(2, 1);
}

void non_niaga_bersubsidi(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Rumah Tangga A1                       ||");
    printf("\n\t|| 2. Rumah Tangga A2                       ||");
    printf("\n\t|| 3. Rumah Tangga A3                       ||");
    printf("\n\t|| 4. Rumah Tangga A4                       ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t||==========================================||");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        RumahTanggaA1A();
    }else if(menu==2){
        close();
        RumahTanggaA2A();
    }else if(menu==3){
        close();
        RumahTanggaA3A();
    }else if(menu==4){
        close();
        RumahTanggaA4A();
    }else if(menu==5){
        close();
        KelompokI();
    }
}

void RumahTanggaA1A(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 0-3,99  ||");
    printf("\n\t||    meter serta, dengan daya listrik 450VA||");
    printf("\n\t|| 2. SDA dengan daya listrik 900 VA        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t||==========================================||");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D1_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D1_2();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_bersubsidi();
    }
}

void Gol_D1_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||               GOLONGAN D1-1              ||");
    printf("\n\t==============================================");
    proses(3, 0);
}

void Gol_D1_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||               GOLONGAN D1-2              ||");
    printf("\n\t==============================================");
    proses(4, 0);
}

void RumahTanggaA2A(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 4-6,99  ||");
    printf("\n\t||    meter serta, dengan daya listrik 450VA||");
    printf("\n\t|| 2. SDA dengan daya listrik 900 VA        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D2_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D2_2();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_bersubsidi();
    }
}

void Gol_D2_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||               GOLONGAN D2-1              ||");
    printf("\n\t==============================================");
    proses(5, 0);
}

void Gol_D2_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||               GOLONGAN D2-2              ||");
    printf("\n\t==============================================");
    proses(6, 0);
}

void RumahTanggaA3A(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 7 - 10  ||");
    printf("\n\t||    meter serta, dengan daya listrik 450VA||");
    printf("\n\t|| 2. SDA dengan daya listrik 900 VA        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D3_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D3_2();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_bersubsidi();
    }
}

void Gol_D3_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||               GOLONGAN D3-1              ||");
    printf("\n\t==============================================");
    proses(7, 0);
}

void Gol_D3_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||               GOLONGAN D3-2              ||");
    printf("\n\t==============================================");
    proses(8, 0);
}

void RumahTanggaA4A(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm di atas ||");
    printf("\n\t||    10 meter serta, dengan daya listrik   ||");
    printf("\n\t||    450 VA                                ||");
    printf("\n\t|| 2. SDA dengan daya listrik 900 VA        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D4_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D4_2();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_bersubsidi();
    }
}

void Gol_D4_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||               GOLONGAN D4-1              ||");
    printf("\n\t==============================================");
    proses(9, 0);
}

void Gol_D4_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK I                ||");
    printf("\n\t||           NON NIAGA BERSUBSIDI           ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||               GOLONGAN D4-2              ||");
    printf("\n\t==============================================");
    proses(10, 0);
}

void KelompokII(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Non Niaga Tanpa Bersubsidi            ||");
    printf("\n\t||    ~ Rumah Tangga A1                     ||");
    printf("\n\t||    ~ Rumah Tangga A2                     ||");
    printf("\n\t||    ~ Rumah Tangga A3                     ||");
    printf("\n\t||    ~ Rumah Tangga A4                     ||");
    printf("\n\t||    ~ Rumah Tangga B                      ||");
    printf("\n\t|| 2. Instansi                              ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        non_niaga_tanpa_bersubsidi();
    }else if(menu==2){
        close();
        instansi();
    }else if(menu==3){
        close();
        Kelompok();
    }
}

void non_niaga_tanpa_bersubsidi(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK II                ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Rumah Tangga A1                       ||");
    printf("\n\t|| 2. Rumah Tangga A2                       ||");
    printf("\n\t|| 3. Rumah Tangga A3                       ||");
    printf("\n\t|| 4. Rumah Tangga A4                       ||");
    printf("\n\t|| 5. Rumah Tangga B                        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 6. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t||==========================================||");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 6){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        RumahTanggaA1B();
    }else if(menu==2){
        close();
        RumahTanggaA2B();
    }else if(menu==3){
        close();
        RumahTanggaA3B();
    }else if(menu==4){
        close();
        RumahTanggaA4B();
    }else if(menu==5){
        close();
        RumahTanggaB();
    }else if(menu==6){
        close();
        KelompokII();
    }
}

void RumahTanggaA1B(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||         NON NIAGA TANPA BERSUBSIDI       ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 0-3.99  ||");
    printf("\n\t||    meter serta, dengan daya listrik      ||");
    printf("\n\t||    1300 VA                               ||");
    printf("\n\t|| 2. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D1_3();
        ulang();
    }else if(menu==2){
        close();
        Gol_D1_4();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_tanpa_bersubsidi();
    }
}

void Gol_D1_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||               GOLONGAN D1-3              ||");
    printf("\n\t==============================================");
    proses(11, 0);
}

void Gol_D1_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A1             ||");
    printf("\n\t||               GOLONGAN D1-4              ||");
    printf("\n\t==============================================");
    proses(12, 0);
}

void RumahTanggaA2B(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||         NON NIAGA TANPA BERSUBSIDI       ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 4-6.99  ||");
    printf("\n\t||    meter serta, dengan daya listrik      ||");
    printf("\n\t||    1300 VA                               ||");
    printf("\n\t|| 2. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D2_3();
        ulang();
    }else if(menu==2){
        close();
        Gol_D2_4();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_tanpa_bersubsidi();
    }
}

void Gol_D2_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||               GOLONGAN D2-3              ||");
    printf("\n\t==============================================");
    proses(13, 0);
}

void Gol_D2_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A2             ||");
    printf("\n\t||               GOLONGAN D2-4              ||");
    printf("\n\t==============================================");
    proses(14, 0);
}

void RumahTanggaA3B(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||         NON NIAGA TANPA BERSUBSIDI       ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm 7-10    ||");
    printf("\n\t||    meter serta, dengan daya listrik      ||");
    printf("\n\t||    1300 VA                               ||");
    printf("\n\t|| 2. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D3_3();
        ulang();
    }else if(menu==2){
        close();
        Gol_D3_4();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_tanpa_bersubsidi();
    }
}

void Gol_D3_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||               GOLONGAN D3-3              ||");
    printf("\n\t==============================================");
    proses(15, 0);
}

void Gol_D3_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A3             ||");
    printf("\n\t||               GOLONGAN D3-4              ||");
    printf("\n\t==============================================");
    proses(16, 0);
}

void RumahTanggaA4B(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||         NON NIAGA TANPA BERSUBSIDI       ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang di muka rumahnya       ||");
    printf("\n\t||    terdapat jalan dengan kelebarannya    ||");
    printf("\n\t||    termasuk saluran got dan berm di atas ||");
    printf("\n\t||    10 meter serta, dengan daya listrik   ||");
    printf("\n\t||    1300 VA                               ||");
    printf("\n\t|| 2. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D4_3();
        ulang();
    }else if(menu==2){
        close();
        Gol_D4_4();
        ulang();
    }else if(menu==3){
        close();
        non_niaga_tanpa_bersubsidi();
    }
}

void Gol_D4_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||               GOLONGAN D4-3              ||");
    printf("\n\t==============================================");
    proses(17, 0);
}

void Gol_D4_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA A4             ||");
    printf("\n\t||               GOLONGAN D4-4              ||");
    printf("\n\t==============================================");
    proses(18, 0);
}

void RumahTanggaB(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||         NON NIAGA TANPA BERSUBSIDI       ||");
    printf("\n\t||               RUMAH TANGGA B             ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang dalam persil rumahnya  ||");
    printf("\n\t||    disamping sebagai tempat tinggal juga ||");
    printf("\n\t||    terdapat jenis usaha dan dengan daya  ||");
    printf("\n\t||    listrik 450 VA, antara lain :         ||");
    printf("\n\t||    ~ Kios kecil                          ||");
    printf("\n\t||    ~ Warung kecil                        ||");
    printf("\n\t||    ~ Rumah kost < 10 (sepuluh) kamar     ||");
    printf("\n\t||    ~ Tukang jahit                        ||");
    printf("\n\t||    ~ Potong rambut                       ||");
    printf("\n\t||    ~ Tukang sepatu                       ||");
    printf("\n\t||    ~ Tukang tambal ban                   ||");
    printf("\n\t||    ~ Bengkel sepeda                      ||");
    printf("\n\t||    ~ Tukang kunci                        ||");
    printf("\n\t||    ~ Cuci motor                          ||");
    printf("\n\t||    ~ Loundry kecil kap. < 25 kg          ||");
    printf("\n\t|| 2. SDA dengan daya listrik > 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D5_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D5_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_D5_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_D5_4();
        ulang();
    }else if(menu==5){
        close();
        non_niaga_tanpa_bersubsidi();
    }
}

void Gol_D5_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA B              ||");
    printf("\n\t||               GOLONGAN D5-1              ||");
    printf("\n\t==============================================");
    proses(19, 0);
}

void Gol_D5_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA B              ||");
    printf("\n\t||               GOLONGAN D5-2              ||");
    printf("\n\t==============================================");
    proses(20, 0);
}

void Gol_D5_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA B              ||");
    printf("\n\t||               GOLONGAN D5-3              ||");
    printf("\n\t==============================================");
    proses(21, 0);
}

void Gol_D5_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||        NON NIAGA TANPA BERSUBSIDI        ||");
    printf("\n\t||              RUMAH TANGGA B              ||");
    printf("\n\t||               GOLONGAN D5-4              ||");
    printf("\n\t==============================================");
    proses(22, 0);
}

void instansi(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||                  INSTANSI                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Sarana milik pemerintah dengan daya   ||");
    printf("\n\t||    listrik 450 VA antara lain:           ||");
    printf("\n\t||    ~ Sarana/Instansi Pemerintah          ||");
    printf("\n\t||    ~ Lembaga Pemerintah lainnya          ||");
    printf("\n\t||    ~ Kantor Pemerintah                   ||");
    printf("\n\t||    ~ Badan/lembaga sosial budaya         ||");
    printf("\n\t||    ~ Perwakilan asing                    ||");
    printf("\n\t||    ~ Poliklinik Pemerintah               ||");
    printf("\n\t||    ~ Puskesmas                           ||");
    printf("\n\t||    ~ Laboratorium Pemerintah             ||");
    printf("\n\t||    ~ Rumah Dinas Pemerintah              ||");
    printf("\n\t||    ~ Pasar Tradisional                   ||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_D6_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_D6_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_D6_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_D6_4();
        ulang();
    }else if(menu==5){
        close();
        KelompokII();
    }
}

void Gol_D6_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||                 INSTANSI                 ||");
    printf("\n\t||               GOLONGAN D6-1              ||");
    printf("\n\t==============================================");
    proses(23, 1);
}

void Gol_D6_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||                 INSTANSI                 ||");
    printf("\n\t||               GOLONGAN D6-2              ||");
    printf("\n\t==============================================");
    proses(24, 1);
}

void Gol_D6_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||                 INSTANSI                 ||");
    printf("\n\t||               GOLONGAN D6-3              ||");
    printf("\n\t==============================================");
    proses(25, 1);
}

void Gol_D6_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                KELOMPOK II               ||");
    printf("\n\t||                 INSTANSI                 ||");
    printf("\n\t||               GOLONGAN D6-4              ||");
    printf("\n\t==============================================");
    proses(26, 1);
}

void KelompokIII(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Niaga                                 ||");
    printf("\n\t||    ~ Niaga Kecil                         ||");
    printf("\n\t||    ~ Niaga Sedang                        ||");
    printf("\n\t||    ~ Niaga Besar                         ||");
    printf("\n\t|| 2. Industri                              ||");
    printf("\n\t||    ~ Industri                            ||");
    printf("\n\t||    ~ Industri Besar                      ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        niaga();
    }else if(menu==2){
        close();
        industri();
    }else if(menu==3){
        close();
        Kelompok();
    }
}

void niaga(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Niaga Kecil                           ||");
    printf("\n\t|| 2. Niaga Sedang                          ||");
    printf("\n\t|| 3. Niaga Besar                           ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 4. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t||==========================================||");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 4){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        niaga_kecil();
    }else if(menu==2){
        close();
        niaga_sedang();
    }else if(menu==3){
        close();
        niaga_besar();
    }else if(menu==4){
        close();
        KelompokIII();
    }
}

void niaga_kecil(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA KECIL               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang memiliki bidang usaha  ||");
    printf("\n\t||    dan didepan usahanya terdapat jalan   ||");
    printf("\n\t||    yang kelebarannya termasuk saluran got||");
    printf("\n\t||    dan berm 0 – 6,99 meter serta dengan  ||");
    printf("\n\t||    daya listrik 450 VA                   ||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_E1_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_E1_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_E1_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_E1_4();
        ulang();
    }else if(menu==5){
        close();
        KelompokIII();
    }
}

void Gol_E1_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA KECIL               ||");
    printf("\n\t||               GOLONGAN E1-1              ||");
    printf("\n\t==============================================");
    proses(27, 1);
}

void Gol_E1_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA KECIL               ||");
    printf("\n\t||               GOLONGAN E1-2              ||");
    printf("\n\t==============================================");
    proses(28, 1);
}

void Gol_E1_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA KECIL               ||");
    printf("\n\t||               GOLONGAN E1-3              ||");
    printf("\n\t==============================================");
    proses(29, 1);
}

void Gol_E1_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA KECIL               ||");
    printf("\n\t||               GOLONGAN E1-4              ||");
    printf("\n\t==============================================");
    proses(30, 1);
}

void niaga_sedang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||               NIAGA SEDANG               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang memiliki bidang usaha  ||");
    printf("\n\t||    niaga dan didepan usahanya terdapat   ||");
    printf("\n\t||    jalan yang kelebarannya termasuk      ||");
    printf("\n\t||    saluran got dengan berm 7-10 meter    ||");
    printf("\n\t||    serta dengan daya listrik 450 VA      ||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_E2_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_E2_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_E2_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_E2_4();
        ulang();
    }else if(menu==5){
        close();
        KelompokIII();
    }
}

void Gol_E2_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||               NIAGA SEDANG               ||");
    printf("\n\t||              GOLONGAN E2-1               ||");
    printf("\n\t==============================================");
    proses(31, 1);
}

void Gol_E2_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||               NIAGA SEDANG               ||");
    printf("\n\t||              GOLONGAN E2-2               ||");
    printf("\n\t==============================================");
    proses(32, 1);
}

void Gol_E2_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||               NIAGA SEDANG               ||");
    printf("\n\t||              GOLONGAN E2-3               ||");
    printf("\n\t==============================================");
    proses(33, 1);
}

void Gol_E2_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||               NIAGA SEDANG               ||");
    printf("\n\t||              GOLONGAN E2-4               ||");
    printf("\n\t==============================================");
    proses(34, 1);
}

void niaga_besar(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA BESAR               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang memiliki bidang usaha  ||");
    printf("\n\t||    niaga dan didepan usahanya terdapat   ||");
    printf("\n\t||    jalan yang kelebarannya termasuk      ||");
    printf("\n\t||    saluran got dengan berm di atas 10    ||");
    printf("\n\t||    meter serta dengan daya listrik 450 VA||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_E3_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_E3_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_E3_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_E3_4();
        ulang();
    }else if(menu==5){
        close();
        KelompokIII();
    }
}

void Gol_E3_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA BESAR               ||");
    printf("\n\t||               GOLONGAN E3-1              ||");
    printf("\n\t==============================================");
    proses(35, 1);
}

void Gol_E3_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA BESAR               ||");
    printf("\n\t||               GOLONGAN E3-2              ||");
    printf("\n\t==============================================");
    proses(36, 1);
}

void Gol_E3_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA BESAR               ||");
    printf("\n\t||               GOLONGAN E3-3              ||");
    printf("\n\t==============================================");
    proses(37, 1);
}

void Gol_E3_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                   NIAGA                  ||");
    printf("\n\t||                NIAGA BESAR               ||");
    printf("\n\t||               GOLONGAN E3-4              ||");
    printf("\n\t==============================================");
    proses(38, 1);
}

void industri(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih Golongan Pengguna:                  ||");
    printf("\n\t|| 1. Industri                              ||");
    printf("\n\t|| 2. Industri Besar                        ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 3. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 3){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        industri_kecil();
    }else if(menu==2){
        close();
        industri_besar();
    }else if(menu==3){
        close();
        KelompokIII();
    }
}

void industri_kecil(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang memiliki bidang usaha  ||");
    printf("\n\t||    industri/usaha besar dengan daya      ||");
    printf("\n\t||    listrik 450 VA                        ||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_F1_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_F1_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_F1_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_F1_4();
        ulang();
    }else if(menu==5){
        close();
        industri();
    }
}

void Gol_F1_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||               GOLONGAN F1-1              ||");
    printf("\n\t==============================================");
    proses(39, 1);
}

void Gol_F1_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||               GOLONGAN F1-2              ||");
    printf("\n\t==============================================");
    proses(40, 1);
}

void Gol_F1_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||               GOLONGAN F1-3              ||");
    printf("\n\t==============================================");
    proses(41, 1);
}

void Gol_F1_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||               GOLONGAN F1-4              ||");
    printf("\n\t==============================================");
    proses(42, 1);
}

void industri_besar(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||              INDUSTRI BESAR              ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jenis:                            ||");
    printf("\n\t|| 1. Pelanggan yang memiliki bidang usaha  ||");
    printf("\n\t||    industri/usaha besar dengan daya      ||");
    printf("\n\t||    listrik 450 VA                        ||");
    printf("\n\t|| 2. SDA dengan daya listrik = 900 VA      ||");
    printf("\n\t|| 3. SDA dengan daya listrik = 1300 VA     ||");
    printf("\n\t|| 4. SDA dengan daya listrik > 1300 VA     ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 5. Kembali                               ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t|| 0. Keluar Program                        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 0 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(menu==0){
        close();
        end();
    }else if(menu==1){
        close();
        Gol_F2_1();
        ulang();
    }else if(menu==2){
        close();
        Gol_F2_2();
        ulang();
    }else if(menu==3){
        close();
        Gol_F2_3();
        ulang();
    }else if(menu==4){
        close();
        Gol_F2_4();
        ulang();
    }else if(menu==5){
        close();
        industri();
    }
}

void Gol_F2_1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||              INDUSTRI BESAR              ||");
    printf("\n\t||               GOLONGAN F2-1              ||");
    printf("\n\t==============================================");
    proses(43, 1);
}

void Gol_F2_2(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||              INDUSTRI BESAR              ||");
    printf("\n\t||               GOLONGAN F2-2              ||");
    printf("\n\t==============================================");
    proses(44, 1);
}

void Gol_F2_3(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||              INDUSTRI BESAR              ||");
    printf("\n\t||               GOLONGAN F2-3              ||");
    printf("\n\t==============================================");
    proses(45, 1);
}

void Gol_F2_4(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM PEMBAYARAN            ||");
    printf("\n\t||               REKENING AIR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||               KELOMPOK III               ||");
    printf("\n\t||                 INDUSTRI                 ||");
    printf("\n\t||              INDUSTRI BESAR              ||");
    printf("\n\t||               GOLONGAN F2-4              ||");
    printf("\n\t==============================================");
    proses(46, 1);
}

int proses(int index_tarif, int index_bpm){
    char nama[100];
    int tanggal;
    float bulan_ini;
    float bulan_lalu;
    float total_bayar;
    float output_tarif;
    float output_denda;
    float pemakaian;
    float biaya;
    printf("\n\tMasukkan nama Anda: ");
    scanf("%s[^\n]", &nama);
    printf("\n\tInputkan tanggal: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan tanggal:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
    while (scanf("%f", &bulan_lalu)==0 || bulan_lalu<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda Inputkan Salah!]");
        printf("\n\t        [Mohon Inputkan Angka Kembali!]");
        printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini - bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            output_denda=denda[0];
            biaya=pemakaian*tarif[index_tarif][0];
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
        else if(pemakaian>10 && pemakaian<=20){
            output_denda=denda[0];
            biaya=((10*tarif[index_tarif][0])+((pemakaian-10)*tarif[index_tarif][1]));
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
        else if(pemakaian>20){
            output_denda=denda[0];
            biaya=((10*tarif[index_tarif][0])+(10*tarif[index_tarif][1])+((pemakaian-20)*tarif[index_tarif][2]));
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            output_denda=denda[0];
            biaya=pemakaian*tarif[index_tarif][0];
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
        else if(pemakaian>10 && pemakaian<=20){
            output_denda=denda[1]*pemakaian;
            biaya=((10*tarif[index_tarif][0])+((pemakaian-10)*tarif[index_tarif][1])+output_denda);
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
        else if(pemakaian>20 && pemakaian<=100){
            output_denda = denda[1]*pemakaian;
            biaya=((10*tarif[index_tarif][0])+(10*tarif[index_tarif][1])+((pemakaian-20)*tarif[index_tarif][2])+output_denda);
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
        else if(pemakaian>100){
            output_denda=denda[2]*pemakaian;
            biaya=((10*tarif[index_tarif][0])+(10*tarif[index_tarif][1])+((pemakaian-20)*tarif[index_tarif][2])+output_denda);
            total_bayar=Administrasi+BPM[index_bpm]+biaya+output_denda;
        }
    }

    printf("\t==============================================");
    printf("\n\tNama Pelanggan           : %s", nama);
    printf("\n\tGolongan                 : %s", golongan[index_tarif]);
    printf("\n\tPemakaian                : %.2f m^3", pemakaian);
    printf("\n\t----------------------------------------------");
    printf("\n\tTarif yang Dikenakan (0-10)m^3  : %.2f/m^3", tarif[index_tarif][0]);
    printf("\n\tTarif yang Dikenakan (11-20)m^3 : %.2f/m^3", tarif[index_tarif][1]);
    printf("\n\tTarif yang Dikenakan (>20)m^3   : %.2f/m^3", tarif[index_tarif][2]);
    printf("\n\t----------------------------------------------");
    printf("\n\tRincian Biaya: ");
    printf("\n\tBiaya Administrasi       : Rp. %d.00", Administrasi);
    printf("\n\tBiaya Pemeliharaan Meter : Rp. %.2f", BPM[index_bpm]);
    printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
    printf("\n\tDenda                    : Rp. %.2f", output_denda);
    printf("\n\t==============================================");
    printf("\n\tTotal Biaya yang Anda Keluarkan adalah Rp. %.2f", total_bayar);
    printf("\n\t==============================================");

    int cetak;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah anda ingin mencetak bukti          ||");
    printf("\n\t||pembayaran?                               ||");
    printf("\n\t|| 1. Cetak                                 ||");
    printf("\n\t|| 0. Lanjutkan Program                     ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan pilihan anda : ");
    while (scanf  ("%d", &cetak)==0 || cetak<0 || cetak>1){
        printf ("\t---------------------------------------");
        printf ("\n\tKarakter yang anda inputkan salah");
        printf ("\n\tSilahkan inputkan ulang");
        printf ("\n\t---------------------------------------");
        printf("\n\tMasukkan pilihan anda : ");
        while (cetak=getchar() != '\n');
    }
    if(cetak==1){
        cetak_bukti_pembayaran(nama, pemakaian, tarif[index_tarif][0], tarif[index_tarif][1], tarif[index_tarif][2], Administrasi, BPM[index_bpm], biaya, output_denda, total_bayar, index_tarif);
    }else{
        ulang();
    }
}

int cetak_bukti_pembayaran(char nama[100], float pemakaian, float tarif1, float tarif2, float tarif3, int Administrasi, float BPM, float biaya, float output_denda, float total_bayar, int index_golongan){
    //menulis file ke txt

    //membuat pointer
    FILE *fptr;

    //membuka file
    fptr = fopen("DataPelanggan.txt", "a"); //mode "a" untuk menambahkan file tanpa menghapus data yang sudah ada sebelumnya

    if (fptr==NULL){
        printf ("\n\tFile tidak ditemukan");
    }else{
        fprintf(fptr, "\n\t==============================================");
        fprintf(fptr, "\n\t||                                          ||");
        fprintf(fptr, "\n\t||            PROGRAM PEMBAYARAN            ||");
        fprintf(fptr, "\n\t||               REKENING AIR               ||");
        fprintf(fptr, "\n\t||                                          ||");
        fprintf(fptr, "\n\t||==========================================||");
        fprintf(fptr, "\n\t||                  MY PDAM                 ||");
        fprintf(fptr, "\n\t||      Save Our Water, Save Our Earth      ||");
        fprintf(fptr, "\n\t==============================================");
        fprintf(fptr, "\n\tNama Pelanggan           : %s", nama);
        fprintf(fptr, "\n\tGolongan                 : %s", golongan[index_golongan]);
        fprintf(fptr, "\n\tPemakaian                : %.2f m^3", pemakaian);
        fprintf(fptr, "\n\t----------------------------------------------");
        fprintf(fptr, "\n\tTarif yang Dikenakan (0-10)m^3  : %.2f/m^3", tarif1);
        fprintf(fptr, "\n\tTarif yang Dikenakan (11-20)m^3 : %.2f/m^3", tarif2);
        fprintf(fptr, "\n\tTarif yang Dikenakan (>20)m^3   : %.2f/m^3", tarif3);
        fprintf(fptr, "\n\t----------------------------------------------");
        fprintf(fptr, "\n\tRincian Biaya: ");
        fprintf(fptr, "\n\tBiaya Administrasi       : Rp. %d.00", Administrasi);
        fprintf(fptr, "\n\tBiaya Pemeliharaan Meter : Rp. %.2f", BPM);
        fprintf(fptr, "\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
        fprintf(fptr, "\n\tDenda                    : Rp. %.2f", output_denda);
        fprintf(fptr, "\n\t==============================================");
        fprintf(fptr, "\n\tTotal Biaya yang Anda Keluarkan adalah Rp. %.2f", total_bayar);
        fprintf(fptr, "\n\t==============================================");

        fclose(fptr);//tutup file

        printf("\n\tPembayaran telah berhasil dicetak!!!\n");
    }
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

void ulang(){
    int menu;
    close();
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu)==0 || menu < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if (menu==1){
        close();
        main();
    }else if(menu==0){
        close();
        end();
    }
}

void end(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||==========================================||");
    printf("\n\t||                  MY PDAM                 ||");
    printf("\n\t||      Save Our Water, Save Our Earth      ||");
    printf("\n\t==============================================\n\n\n");
}
