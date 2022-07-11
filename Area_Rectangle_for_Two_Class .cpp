// example: one class, two objects
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area () {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect, rectb;
  int i,a,b;
  for (i=0; i<2;i++)
  {
    
    cout << "Hight rectangle " << i+1 << endl;
    cin >>a;
    cout <<"Width rectangle " << i+1 << endl ;
    cin >> b;
    if (i < 1)
    rect.set_values (a,b);
    else
    rectb.set_values (a,b);
  }
  cout << "rect 1 area: " << rect.area() << endl;
  cout << "rect 2 area: " << rectb.area() << endl;
  return 0;
}
