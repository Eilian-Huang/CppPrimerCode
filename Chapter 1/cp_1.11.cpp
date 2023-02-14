/*
 * 练习1.11
 * 编写程序，提示用户输入两个整数，打印出这两个整数所指定范围内的所有整数。
 */

#include <iostream>

int main(){
    std::cout << "Enter 2 numbers" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2) {                  // 从大至小打印
        while (v1 >= v2) {
            std::cout << v1 << " ";
            v1--;
        }
    }
    else {                          // 从小至大打印
        while (v1 <= v2) {
            std::cout << v1 << " ";
            v1++;
        }
    }
    std::cout << std::endl;
    return 0;
}