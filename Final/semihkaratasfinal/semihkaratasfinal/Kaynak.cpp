#include <cstdlib>
#include <iostream>
#include <string>
#include "Siniflar.h" 

using namespace std;

TermPaper::TermPaper()
{
	Isým = "";
	Soyisim = "";
	Fakulte = "";
}
void TermPaper::setIsým(string isim)
{
	Isým = isim;
}
void TermPaper::setSoyisim(string si)
{
	Soyisim = si;
}
void TermPaper::setFakulte(string fk)
{
	Fakulte = fk;
}

string  TermPaper::getIsým()
{
	return Isým;
}
string TermPaper::getSoyisim()
{
	return Soyisim;
}
string TermPaper::getFakulte()
{
	return Fakulte;
}