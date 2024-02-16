#include <io.stream>
#include <cstring>
using namespace std;
 //bazi niteliklerle bir telefon
 class Telefon {
     public:
     char marka [30];
     char model [30];
     int fiyat;
     int GB;
 };
 int main () {
     // ilk Telefon
     Telefon telefon1;
     strcpy (telefon.marka, "İPhone") ;
     strcpy (telefon.model, "15 Pro Max");
     telefon1.fiyat = 8289900;
     telefon1.GB = 512 GB
     // ikinci telefon
     Telefon telefon2;
     strcpy (telefon.marka, "Samsung") ;
     strcpy (telefon.model, "Galaxy S24 Ultra") ;
     telefon2.fiyat = 73999;
     telefon2.GB = 512 GB
     //telefonlarin ozellikleri
     cout << "Telefon1:" << telefon1.marka << ", " << telefon1.model << ", " << telefon1.fiyat << ", " telefon1.GB << " \n";
 cout << "Telefon2:" << telefon2.marka << ", " << telefon2.model << ", " << telefon2.fiyat << ", " telefon2.GB << " \n";