#include <iostream>

struct Rectangle {
      int length,
          width;
};

void store(Rectangle &rec) {
      std::cin >> rec.width >> rec.length;
}

void display(Rectangle rec) {
      std::cout << rec.width << " " << rec.length;
}

int main() {
      Rectangle rec; 

      store(rec);

      display(rec);

      return 0;
}
