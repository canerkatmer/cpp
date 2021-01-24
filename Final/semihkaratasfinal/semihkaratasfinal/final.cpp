#include<iostream>
#include "Siniflar.h" 
#include <cstdlib>
#include <string>
using namespace std; 

int main() {

	string sorbakalim = " ";
	cout << "Akademik personel islemleri icin 1, Idari personel eklemek icin 0=  ";
	cin >> sorbakalim;
	bool b = true;
	bool a = true;
	bool ib = true;
	bool ia = true;

	bool mainmenu = true;
	while (mainmenu == true)
	{
		if (sorbakalim == "1")
		{
			while (b == true)
			{
				a = true;
				string kullanicicevabi = " ";
				cout << "Yeni Personel eklemek icin ekle, silmek icin sil, geri donmek icin geri yaziniz! ";
				cin >> kullanicicevabi;
				if (kullanicicevabi == "ekle")
				{
					string kullanicicevabi2 = " ";
					cout << "Yeni Personel eklemek icin ekle, menuye donmek icin menu! ";
					cin >> kullanicicevabi2;
					while (a == true)
					{
						if (kullanicicevabi2 == "ekle")
						{
							int idal = 0;
							cout << "Id= ";
							cin >> idal;
							Fakulte id;
							id.setkisiId(idal);
							string isimal = "";
							cout << "Isim= ";
							cin >> isimal;
							Fakulte isim;
							isim.setkisiIsim(isimal);
							string soyisimal = "";
							cout << "Soyisim= ";
							cin >> soyisimal;
							Fakulte soyisim;
							soyisim.setkisiSoyisim(soyisimal);
							cout << "\nId= " << id.getkisiId() << endl;
							cout << "\nIsim= " << isim.getkisiIsim() << endl;
							cout << "\nSoyisim= " << soyisim.getkisiSoyisim() << endl;
							a = false;
							b = true;
						}
						else if (kullanicicevabi2 == "menu")
						{
							a = false;
							b = true;
						}
					}

				}

		
				else if (kullanicicevabi == "sil")
				{
					bool d = true;
					while (d == true)
					{
						string isimtut = " ";
						cout << " Silmek istediginiz kisinin ismini giriniz= ";
						cin >> isimtut;
						cout << "  \n Basariyla silindi... \n";
						d = false;
					}
				}
				else if (kullanicicevabi == "geri")
				{
					bool g = true;
					while (g == true)
					{
						b = false;
						g = false;
					}
				}
				else {
					bool e = true;
					while (e == true)
					{
						cout << "  \n Gecersiz secim yaptiniz lutfen sunulan secenekleri yazmaya ozen gosterin!\n ";
						e = false;
					}
				}

			}
		}
		else if (sorbakalim == "0") 
		{
			while (ib == true)
			{
				ia = true;
				string kullanicicevabi = " ";
				cout << "Yeni Personel eklemek icin ekle, silmek icin sil,listelemek, geri donmek icin geri yaziniz! ";
				cin >> kullanicicevabi;
				if (kullanicicevabi == "ekle")
				{
					string kullanicicevabi2 = " ";
					cout << "Yeni Personel eklemek icin ekle, menuye donmek icin menu! ";
					cin >> kullanicicevabi2;
					while (ia == true)
					{
						if (kullanicicevabi2 == "ekle")
						{
							ia = false;
							ib = true;
						}
						else if (kullanicicevabi2 == "menu")
						{
							ia = false;
							ib = true;
						}
					}

				}

				else if (kullanicicevabi == "listele")
				{
					bool ic = true;
					while (ic == true)
					{
						cout << "\n Listeleme basarili... \n";
						ic = false;
					}
				}

				else if (kullanicicevabi == "sil")
				{
					bool id = true;
					while (id == true)
					{
						string isimtut = " ";
						cout << " Silmek istediginiz kisinin ismini giriniz= ";
						cin >> isimtut;
						cout << "  \n Basariyla silindi... \n";
						id = false;
					}
				}
				else if (kullanicicevabi == "geri")
				{
					bool ig = true;
					while (ig == true)
					{
						ib = false;
						ig = false;
					}
				}
				else {
					bool ie = true;
					while (ie == true)
					{
						cout << "  \n Gecersiz secim yaptiniz lutfen sunulan secenekleri yazmaya ozen gosterin!\n ";
						ie = false;
					}
				}

			}
		}
	}
	}


