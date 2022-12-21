#include <iostream>

using namespace std;

int main(){

  double sayi1 , sayi2 , sonuc ;
  char islem = 'x';

  cout << "1.Sayi Islem 2.Sayi : ";
  cin >> sayi1 >> islem >> sayi2;

  switch (islem){
    case '+':
    sonuc = sayi1 + sayi2;
      break;
    case '-':
    sonuc = sayi1 - sayi2;
      break;
    case '*':
    sonuc = sayi1 * sayi2;
      break;
    case '/':
    sonuc = sayi1 / sayi2;
      break;
    case 'o':
    sonuc = (sayi1 + sayi2)/2;
      break;
   
    default:
    sonuc = 0;
      break;
    
  }

  cout << sonuc;
  
  return 0;
}
