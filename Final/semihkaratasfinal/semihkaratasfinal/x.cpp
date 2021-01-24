#include "Siniflar.h"
Fakulte::Fakulte() {

}
void Fakulte :: setkisiId(int kisiId_){ 
	kisiId = kisiId_;

}
int Fakulte :: getkisiId() {
	return kisiId;
}
void Fakulte :: setkisiIsim(string kisiIsim_) {
	kisiIsim = kisiIsim_;
}
string Fakulte::getkisiIsim() {
return kisiIsim;
}
void Fakulte::setkisiSoyisim(string kisiSoyisim_) {
	kisiSoyisim = kisiSoyisim_;
}
string Fakulte::getkisiSoyisim() {
	return kisiSoyisim;
}
