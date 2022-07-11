// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  int a,b;
  cout << "What's the Height ?";
  cin >> a;
  cout << "What's the Widh";
  cin >>b;
  rect.set_values (a,b);
  cout << "Area : " << rect.area();
  return 0;
}
