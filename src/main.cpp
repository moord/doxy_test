#include <iostream>

/**
 * \brief Складывает два числа.
 *
 * Эта функция принимает два числа, складывает их и возвращает это результат суммирования
 * 
 * \param a Первое слагаемое.
 * \param b Второе слагаемое.
 * \return Сумма двух чисел.
 */

int sum(int a, int b){
    return a+b;
}

/**
 * \brief Entry point
 *
 * Execution of the program
 * starts here.
 *
 * \return Program exit status
 */


int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << sum(a,b) << std::endl;
    return 0;
}