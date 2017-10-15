#include <stdio.h>
#include <stdlib.h>

int main(){

	int bulan, tahun;
	int hitungHari(int bulan, int tahun){
		printf("\n");
		if(bulan > 1 && bulan < 12 && tahun > 0){
			switch(bulan){
				case 1:
					printf("Bulan Januari memiliki jumlah hari sebanyak : 31\n");
					break;
				case 2:
					if(tahun % 4 == 0 && tahun % 100 == 0 && tahun % 400 == 0){
						printf("Bulan Februari memiliki jumlah hari sebanyak : 29\n");
					} else if(tahun % 4 == 0 && tahun % 100 == 0) {
						printf("Bulan Februari memiliki jumlah hari sebanyak : 28\n");
					} else if(tahun % 4 == 0 && tahun % 100 != 0){
						printf("Bulan Februari memiliki jumlah hari sebanyak : 29\n");
					}
					break;
				case 3:
					printf("Bulan Maret memiliki jumlah hari sebanyak : 31\n");
					break;
				case 4:
					printf("Bulan April memiliki jumlah hari sebanyak : 30\n");
					break;
				case 5:
					printf("Bulan Mei memiliki jumlah hari sebanyak : 31\n");
					break;
				case 6:
					printf("Bulan Juni memiliki jumlah hari sebanyak : 30\n");
					break;
				case 7:
					printf("Bulan Juli memiliki jumlah hari sebanyak : 31\n");
					break;
				case 8:
					printf("Bulan Agustus memiliki jumlah hari sebanyak : 31\n");
					break;
				case 9:
					printf("Bulan September memiliki jumlah hari sebanyak : 30\n");
					break;
				case 10:
					printf("Bulan Oktober memiliki jumlah hari sebanyak : 31\n");
					break;
				case 11:
					printf("Bulan November memiliki jumlah hari sebanyak : 30\n");
					break;
				case 12:
					printf("Bulan Desember memiliki jumlah hari sebanyak : 31\n");
					break;
				default:
					printf("Bulan yang anda pilih tidak ada\n");
					break;

			}
			printf("\n");
		} else {
			printf("Terjadi kesalahan pada inputan anda!\n\n");
		}
	}

	printf("==================================\n");
	printf("=== Program Penghitung Tanggal ===\n");
	printf("==================================\n");
	printf("\n\n");
	printf("Masukkan bulan : ");
	scanf("%d", &bulan);
	printf("Masukkan tahun : ");
	scanf("%d", &tahun);

	hitungHari(bulan, tahun);
}
