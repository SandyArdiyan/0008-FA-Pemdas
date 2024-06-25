#include <iostream>
using namespace std;
class MasukUniversitas {
public:
 // isi access modifier disini

	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini

	SNBP(int pBiaya)
		biaya(pBiaya):
	{
		cout << " biaya pendaftaran" << biaya << "\n" << endl;
	}
public:
	MasukUniversitas() {
		uangPendaftaran = 100000;

		pendaftaran(int pBiaya) :
			SNBP(pBiaya)
		{
			cout << "Masuk SNBP harga 100000\n" << endl;
		}
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() {
		cout << "SNBP bayar semester pertama 30000000"
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	virtual void namaJalurMasuk() {
		cout << "SNBT bayar semester pertama 9000000"
	}
	



	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBP : public MasukUniversitas {
public:
	void namaJalurMasuk() {
		cout << "SNBP bayar semester pertama 30000000";
	}
	// isi disini untuk melengkapi class SNBT

};
class SNBT : public MasukUniversitas {
public:
	void namaJalurMasuk() {
		cout << "SNBT bayar semester pertama 9000000";
	}

	class budi : public MasukUniversitas, public namaJalurMasuk {:
public:

	budi(int pBiaya) :
		SNBP(pBiaya),
		namaJalurMasuk(pBiaya),
		SNBP(pBiaya)
	{
		cout << " Budi Membayar uangBangunan sebanyak 15000000\n" << endl;
	}
	// isi disini untuk melengkapi class SNBP
};
int main() {
	SNBP; a;
	a.namaJalurMasuk();
}

int main() {
	mahasiswa SNBP1("Arif", "UMY");
	cout << mahasiswa.baru();
	cout << "Hasil = " << mahasiswa.jumlah(45100000, 90) << endl;


int main() {
	SNBT a;
	a.namaJalurMasuk();

int main() {
		mahasiswa SNBP1("Arif", "UMY");
		cout << mahasiswa.baru();
		cout << "Hasil = " << mahasiswa.jumlah(45100000, 90) << endl;

	return 0;
	// isi disini untuk fungsi main
};
