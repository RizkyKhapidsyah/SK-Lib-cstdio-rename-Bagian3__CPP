#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	char namaSebelumnya[] = "fileLama.txt";
	char namaBaru[] = "fileBaru.txt";

	if (rename(namaSebelumnya, namaBaru) != 0) {
		perror("Kesalahan pengubahan nama file");
	} else {
		cout << "Nama file berhasil dirubah";
	}
		
	_getch();
	return 0;
}