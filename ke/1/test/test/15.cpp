#include <iostream>


int b15()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';
    return 0;

    // 从开始的输入 整数， 最后 打印出来转字符串的过程 

}
