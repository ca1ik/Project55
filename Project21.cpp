#include <iostream>
using namespace std;

int main() {
 int myvar = 25;
 int* foo = &myvar;
 int bar = myvar;
 cout << "myvar : " << myvar << endl;
 cout << "foo : " << foo << endl;
 cout << "bar : " << bar << endl;
 system("pause");
 return 0;
}

/*
int main() {
 // degiskenleri tanimla
 int var1 = 3;
 int var2 = 24;
 int var3 = 17;
 // var1 adresini yazd�r
 cout << "var1 Adresi: " << &var1 << endl;
 // var2 adresini yazd�r
 cout << "var2 Adresi: " << &var2 << endl;
 // var3 adresini yazd�r
 cout << "var3 Adresi: " << &var3 << endl;
 return 0;
}
