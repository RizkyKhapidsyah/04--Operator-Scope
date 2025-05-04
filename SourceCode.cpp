#include <iostream>

// Program untuk menunjukkan penggunaan variabel lokal dan scope di C++
// Programmer : Rizky Khapidsyah
// Tanggal: 04 Mei 2025

// Deskripsi: Program ini mendemonstrasikan bagaimana variabel lokal dapat memiliki scope yang berbeda
// dan bagaimana nilai variabel dapat diubah di dalam scope tersebut.
// Contoh ini juga menunjukkan bagaimana variabel dengan nama yang sama dapat dideklarasikan di dalam scope yang berbeda.
// Catatan: Pastikan untuk mengganti [Nama Anda] dan [Tanggal Hari Ini] dengan informasi yang sesuai.
// Contoh penggunaan variabel lokal dan scope di C++

int main() {
	int VarA = 1; // Deklarasi variabel VarA dengan nilai awal 1
	VarA++; // Increment nilai VarA

	std::cout << "Nilai Awal Variabel A (Sebelum Masuk Scope) = " << VarA << std::endl; // Menampilkan nilai awal VarA

	{
		int VarA = 2;	// Deklarasi variabel VarA baru di dalam blok
		VarA = 42;	// Mengubah nilai VarA yang baru
		std::cout << "Nilai Variabel A (Di Dalam Scope) = " << VarA << std::endl; // Menampilkan nilai VarA di dalam scope
	}

	std::cout << "Nilai Akhir Variabel A (Setelah Keluar Scope) = " << VarA << std::endl; // Menampilkan nilai VarA setelah keluar dari scope

	return 0; // Mengembalikan 0 menandakan program selesai dengan sukses
}