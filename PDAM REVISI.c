#include <stdio.h>
#include <stdlib.h>

//DATA DI BAWAH INI BERSUMBER DARI GOOGLE
#define BPM_RumahTangga 9500    //BPM(Biaya Pemeliharaan Meter Air) untuk rumah tangga
#define BPM_Usaha 15000         //BPM(Biaya Pemeliharaan Meter Air) untuk usaha
#define Administrasi 7000       //Biaya administrasi pelayanan PDAM
#define DendaBesar 20000        //Denda yang dibayarkan jika pembayaran di atas tanggal 15 dengan kisaran pemakaian di atas 100 m^3
#define DendaKecil 10000        //Denda yang dibayarkan jika pembayaran di atas tanggal 15 dengan kisaran pemakaian 10 m^3 sampai 100 m^3
#define DendaNol 0

char nama[100];

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
    printf("\n\tInputkan Nama Anda: ");
    scanf("%[^\n]s", &nama);
    printf("\n\t----------------------------------------------");
    printf("\n\tSelamat Datang %s", nama);
    printf("\n\t==============================================");
    close();
}

int Kelompok(){
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

int KelompokI(){
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

int sosial(){
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
    }else if(menu==2){
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

int sosial_ag(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_lalu)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
    while (scanf("%f", &bulan_ini)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1220;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1220;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_ag();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1220;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1220;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_ag();
        }
    }
}

int sosial_b1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_lalu)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
    while (scanf("%f", &bulan_ini)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1320;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1500;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_b1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1320;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1500;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*5760;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_b1();
        }
    }
}

int sosial_b2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_lalu)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
    while (scanf("%f", &bulan_ini)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1500;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1780;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*5820;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_b2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1500;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*1780;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<=100){
            biaya=pemakaian*5820;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*5820;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            sosial_b2();
        }
    }
}

int non_niaga_bersubsidi(){
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

int RumahTanggaA1A(){
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

int Gol_D1_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_lalu)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Lalu (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
    while (scanf("%f", &bulan_ini)==0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1780;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*5880;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*1780;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*5880;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*5880;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_1();
        }
    }
}

int Gol_D1_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*5940;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*5940;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*5940;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_2();
        }
    }
}

int RumahTanggaA2A(){
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

int Gol_D2_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2620;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2620;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_1();
        }
    }
}

int Gol_D2_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2620;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2900;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2620;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*2900;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6060;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_2();
        }
    }
}

int RumahTanggaA3A(){
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

int Gol_D3_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2900;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6120;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*2900;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6120;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6120;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_1();
        }
    }
}

int Gol_D3_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3460;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3460;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6180;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_2();
        }
    }
}

int RumahTanggaA4A(){
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

int Gol_D4_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3460;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3740;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6240;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3460;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*3740;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6240;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6240;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_1();
        }
    }
}

int Gol_D4_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3740;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*4020;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*6300;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*3740;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*4020;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*6300;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*6300;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_2();
        }
    }
}

int KelompokII(){
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

int non_niaga_tanpa_bersubsidi(){
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

int RumahTanggaA1B(){
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

int Gol_D1_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9200;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*9600;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6340;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9200;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*9600;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*9600;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_3();
        }
    }
}

int Gol_D1_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6420;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9350;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*9650;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6420;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9350;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*9650;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*9650;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D1_4();
        }
    }
}

int RumahTanggaA2B(){
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

int Gol_D2_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6490;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9500;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6490;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9500;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_3();
        }
    }
}

int Gol_D2_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6570;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9650;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*9950;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6570;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9650;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*9950;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*9950;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D2_4();
        }
    }
}

int RumahTanggaA3B(){
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

int Gol_D3_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6640;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6640;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_3();
        }
    }
}

int Gol_D3_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6720;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9950;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6720;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9950;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10250;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10250;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D3_4();
        }
    }
}

int RumahTanggaA4B(){
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

int Gol_D4_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6790;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6790;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_3();
        }
    }
}

int Gol_D4_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6870;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10250;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10550;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6870;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10250;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10550;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10550;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D4_4();
        }
    }
}

int RumahTanggaB(){
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

int Gol_D5_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6940;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*6940;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_1();
        }
    }
}

int Gol_D5_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7020;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10550;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10850;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7020;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10550;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10850;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10850;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_2();
        }
    }
}

int Gol_D5_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7090;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7090;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_3();
        }
    }
}

int Gol_D5_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7170;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10850;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11150;
            total_bayar=Administrasi+BPM_RumahTangga+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7170;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10850;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11150;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11150;
            total_bayar=Administrasi+BPM_RumahTangga+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_RumahTangga);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D5_4();
        }
    }
}

int instansi(){
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

int Gol_D6_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7240;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11300;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7240;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_1();
        }
    }
}

int Gol_D6_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7320;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11450;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7320;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11450;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11450;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_2();
        }
    }
}

int Gol_D6_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7390;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11350;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7390;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11350;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_3();
        }
    }
}

int Gol_D6_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7470;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*7470;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_D6_4();
        }
    }
}

int KelompokIII(){
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

int niaga(){
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

int niaga_kecil(){
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

int Gol_E1_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9200;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*10950;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*9850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*10950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*10950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_1();
        }
    }
}

int Gol_E1_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9500;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11250;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9500;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11250;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11250;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_2();
        }
    }
}

int Gol_E1_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10450;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11550;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*9800;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10450;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11550;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11550;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_3();
        }
    }
}

int Gol_E1_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*11850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10100;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*10750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*11850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*11850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E1_4();
        }
    }
}

int niaga_sedang(){
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

int Gol_E2_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11050;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10400;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11050;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*12150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_1();
        }
    }
}

int Gol_E2_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11350;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*12550;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*10700;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11350;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*12550;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*12550;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_2();
        }
    }
}

int Gol_E2_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11650;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*13150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11000;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*13150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*13150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_3();
        }
    }
}

int Gol_E2_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11300;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11950;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*13950;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*11950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*13950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*13950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E2_4();
        }
    }
}

int niaga_besar(){
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

int Gol_E3_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11600;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12250;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11600;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12250;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_1();
        }
    }
}

int Gol_E3_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11900;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12550;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*15050;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*11900;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12550;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*15050;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*15050;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_2();
        }
    }
}

int Gol_E3_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*12200;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*15850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*12200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*15850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*15850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_3();
        }
    }
}

int Gol_E3_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*12500;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*13150;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*16650;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*12500;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*13150;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*16650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*16650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_E3_4();
        }
    }
}

int industri(){
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

int industri_kecil(){
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

int Gol_F1_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*12950;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*17450;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*12950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*12950;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*17450;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*17450;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_1();
        }
    }
}

int Gol_F1_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*13400;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*17900;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*13400;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*13400;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*17900;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*17900;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_2();
        }
    }
}

int Gol_F1_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*13850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*18850;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*13850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*13850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*18850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*18850;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_3();
        }
    }
}

int Gol_F1_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*14300;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*20300;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*14300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*14300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*20300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*20300;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F1_4();
        }
    }
}

int industri_besar(){
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

int Gol_F2_1(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*20750;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_1();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*14750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*20750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*20750;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_1();
        }
    }
}

int Gol_F2_2(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*15200;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*21200;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_2();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*15200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*15200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*21200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*21200;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_2();
        }
    }
}

int Gol_F2_3(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*15650;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*21650;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_3();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*15650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*15650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*21650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*21650;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_3();
        }
    }
}

int Gol_F2_4(){
    int tanggal;
    float bulan_lalu, bulan_ini, pemakaian, biaya, total_bayar;
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
    while (scanf("%f", &bulan_ini)==0 || bulan_ini<0){
        printf("\t----------------------------------------------");
        printf("\n\t       [Angka yang Anda inputkan salah!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Penggunaan Bulan Ini (m^3): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    pemakaian = bulan_ini-bulan_lalu;

    if(tanggal<=15){
        if(pemakaian>=0 && pemakaian<=20){
            biaya=pemakaian*16100;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20){
            biaya=pemakaian*22100;
            total_bayar=Administrasi+BPM_Usaha+biaya;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_4();
        }
    }else if(tanggal>15){
        //isi denda
        if(pemakaian>=0 && pemakaian<=10){
            biaya=pemakaian*16100;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaNol;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaNol);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>10 && pemakaian<=20){
            biaya=pemakaian*16100;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>20 && pemakaian<100){
            biaya=pemakaian*22100;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaKecil;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaKecil);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian>100){
            biaya=pemakaian*22100;
            total_bayar=Administrasi+BPM_Usaha+biaya+DendaBesar;
            printf("\t----------------------------------------------");
            printf("\n\tRincian Biaya: ");
            printf("\n\tBiaya Administrasi       : Rp. %d", Administrasi);
            printf("\n\tBiaya Pemeliharaan Meter : Rp. %d", BPM_Usaha);
            printf("\n\tBiaya Pemakaian          : Rp. %.2f", biaya);
            printf("\n\tDenda                    : Rp. %d", DendaBesar);
            printf("\n\t==============================================");
            printf("\n\tTotal Biaya yang Anda Keluarkan adalah %.2f", total_bayar);
            printf("\n\t==============================================");
        }else if(pemakaian<0){
            printf("\t----------------------------------------------");
            printf("\n\t       [Angka yang Anda Inputkan Salah!]");
            printf("\n\t        [Mohon Inputkan Angka Kembali!]");
            printf("\n\t [Pemakaian Bulan Ini > Pemakaian Bulan Lalu]");
            printf("\n\t==============================================");
            close();
            Gol_F2_4();
        }
    }
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

int ulang(){
    int menu;
    close();
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah Anda ingin mengulang?              ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu) == 0 || menu < 0 || menu > 1){
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
