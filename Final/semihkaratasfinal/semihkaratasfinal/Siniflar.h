#ifndef Fakulte_h
#define Fakulte_h
#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Fakulte
{
protected:
public:
	 Fakulte();
	 int kisiId;
	 void setkisiId(int kisiId_);
	 int getkisiId();
	 string kisiIsim;
	 void setkisiIsim(string kisiIsim_);
	 string getkisiIsim();
	 string kisiSoyisim;
	 void setkisiSoyisim(string kisiSoyisim_);
	 string getkisiSoyisim();
private:

};

#endif Fakulte_h