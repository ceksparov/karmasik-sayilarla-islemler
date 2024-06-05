/*********************************************************************************************************
**                                      SAKARYA ÜNİVERSİTESİ
**                                      BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**                                      BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                                      PROGRAMLAMAYA GİRİŞİ DERSİ
**                                      ÖDEV NUMARASI…...: 2. Ödev
**                                      ÖĞRENCİ ADI........:Berkay Can
*                                       ÖĞRENCİ NUMARASI...:B211210048
*                                       DERS GRUBU.........:2. Öğretim A grubu
**
**********************************************************************************************************
**
*/


#include <iostream>

using namespace std;


class Karmasik//karmasik sayi sinifi tanimladim
{
public:
	


	void print()
	{
		if (sanal > 0)
			cout << reel << " + " << sanal << "i" << endl;
		else if (sanal < 0)
			cout << reel << " - " << -sanal << "i" << endl;
		else
			cout << reel << endl;
	}

	Karmasik operator+(Karmasik obj1)// + operator asiri yukleme
	{
		Karmasik toplam;
		toplam.reel = reel + obj1.reel;
		toplam.sanal = sanal + obj1.sanal;
		return toplam;
	}

	Karmasik operator-(Karmasik obj1)// - operator asiri yukleme
	{
		Karmasik toplam;
		toplam.reel = reel - obj1.reel;
		toplam.sanal = sanal - obj1.sanal;
		return toplam;
	}

	Karmasik operator*(Karmasik obj1)// * operator asiri yukleme
	{
		Karmasik toplam;
		toplam.reel = reel * obj1.reel;
		toplam.sanal = sanal * obj1.sanal;
		return toplam;
	}

	Karmasik operator/(Karmasik obj1)// / operator asiri yukleme
	{
		Karmasik toplam;
		toplam.reel = reel / obj1.reel;
		toplam.sanal = sanal / obj1.sanal;
		return toplam;
	}

	Karmasik operator+=(Karmasik obj1)// += operator asiri yukleme
	{
		Karmasik sayi1;
		sayi1.reel = reel + obj1.reel;
		sayi1.sanal = sanal + obj1.sanal;
		sayi1.print();
		return sayi1;
	}

	Karmasik operator-=(Karmasik obj1)// -= operator asiri yukleme
	{
		Karmasik sayi1;
		sayi1.reel = reel - obj1.reel;
		sayi1.sanal = sanal - obj1.sanal;
		sayi1.print();
		return sayi1;
	}

	Karmasik operator*=(Karmasik obj1)// *= operator asiri yukleme
	{
		Karmasik sayi1;
		sayi1.reel = reel * obj1.reel;
		sayi1.sanal = sanal * obj1.sanal;
		sayi1.print();
		return sayi1;
	}

	Karmasik operator/=(Karmasik obj1)// /= operator asiri yukleme
	{
		Karmasik sayi1;
		sayi1.reel = reel / obj1.reel;
		sayi1.sanal = sanal / obj1.sanal;
		sayi1.print();
		return sayi1;
	}

	int reel;
	int sanal;

private:
};

int menu;

int main()
{
	setlocale(LC_ALL, "Turkish");

	Karmasik sayi1;
	Karmasik sayi2;
	Karmasik sayi3;

	cout << "1. sayının reel kısmını giriniz: ";
	cin >>sayi1.reel;
	cout << "1. sayının sanal kısmını giriniz: ";
	cin >> sayi1.sanal;
	cout << "2. sayının reel kısmını giriniz: ";
	cin >> sayi2.reel;
	cout << "2. sayının sanal kısmını giriniz: ";
	cin >> sayi2.sanal;

	
	do//menü
	{

	cout << endl <<
		"---------------------------------------------------------------------------\n" <<
		"1- 1. sayı + 2. sayı\n" <<
		"2- 1. sayı - 2. sayı\n" <<
		"3- 1. sayı * 2. sayı\n" <<
		"4- 1. sayı / 2. sayı\n" <<
		"5- 1. sayı += 2. sayı\n"<<
		"6- 1. sayı -= 2. sayı\n" <<
		"7- 1. sayı *= 2. sayı\n" <<
		"8- 1. sayı /= 2. sayı\n" <<
		"---------------------------------------------------------------------------\n";
	cin >> menu;

	switch (menu)
	{
	case 1:
		sayi3 = sayi1 + sayi2;
		sayi3.print();
		continue;

	case 2:
		sayi3 = sayi1 - sayi2;
		sayi3.print();
		continue;

	case 3:
		sayi3 = sayi1 * sayi2;
		sayi3.print();
		continue;

	case 4:
		sayi3 = sayi1 / sayi2;
		sayi3.print();
		continue;

	case 5:
		sayi1 += sayi2;
		continue;

	case 6:
		sayi1 -= sayi2;
		continue;

	case 7:
		sayi1 *= sayi2;
		continue;

	case 8:
		sayi1 /= sayi2;
		continue;
		
	}
	} while (true);

}