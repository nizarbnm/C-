#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
    Car (string x, string y, int z)
    {
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  string ch,m;
  int a;
  cout << " Car brand \n";
  cin >> ch;
  cout << "Car Model \n";
  cin >> m;
  cout << "car Year \n";
  cin >> a;
  Car Carobj(ch, m, a);
  cout << Carobj.brand << " " << Carobj.model << " " << Carobj.year << "\n";
  return 0;
}
