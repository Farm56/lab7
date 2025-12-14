#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 30;
    double c = 4.0;       // แก้เป็น double เพื่อให้หารแล้วติดทศนิยม
    double output;        // ตัวแปรรับผลลัพธ์ต้องเป็น double

    output = a - (b / c); // คำนวณ: 20 - (30/4) = 12.5
    cout << "output: " << output << "\n"; // แก้คำผิด output และใส่เครื่องหมายคำพูด
    return 0;
}