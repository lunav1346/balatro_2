#include <iostream>

int main() {
  float a = 3.14;
  int b;

  b = (int)a; // 왼족 변수(b) type(int)로 우측 변수(a)의 type(float)이 int형으로
              // 명시적 변환 방생

  std::cout << b << std::endl;
}