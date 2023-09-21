#include <iostream>
using namespace std;

class Box {
private:
  int length, width, height;
  int volume;
  bool ept;

public:
  Box() {
    length = 0;
    width = 0;
    height = 0;
    volume = 0;
    ept = empty();
  }
  Box(int l, int w, int h) {
    length = l;
    width = w;
    height = h;
    volume = getVolume();
    ept = empty();
  }
  bool empty() {
    if (length == 0 || width == 0 || height == 0)
      return true;

    return false;
  }
  int getVolume() { return length * width * height; }
  void setLength(int l) { length = l; }
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }
  int getLength() { return length; }
  int getWight() { return width; }
  int getHeight() { return height; }
  void print(int n) {
    cout << "상자 #" << n << endl;
    cout << "상자의 길이: " << length << endl;
    cout << "상자의 너비: " << width << endl;
    cout << "상자의 높이: " << height << endl;
    cout << "상자의 부피: " << volume << endl;
    cout << "상자가 비어있는가?: " << ept << endl;
  }
};
int main() {
  Box B1;
  Box B2(3, 2, 4);
  B1.print(1);
  B2.print(2);
}