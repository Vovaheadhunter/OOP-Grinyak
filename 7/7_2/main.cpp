// Написать программу, позволяющую имитировать работу с игровыми автоматами.
// Создать два класса: автомат и игрок. Есть несколько автоматов, одновременно на одном
// автомате может играть только один человек. С каждым автоматом связан свой поток
// команд. В каждом автомате есть некоторое количество денег. В процессе игры каждый
// автомат генерирует 4 числа в диапазоне от 1 до 3, если эти числа совпали, то игрок
// получает выигрыш в размере всей суммы, которая есть в автомате и автомат завершает
// работу, если совпали 3 числа, то игрок получает половину от суммы, имеющейся в
// автомате и автомат продолжает работу. Один игрок может сыграть несколько раз на
// одном автомате. Программа должна выводить на экран номера игроков и данные о
// результатах их игры. Работа программы заканчивается, когда не остаётся работающих
// автоматов.


#include "slots.h"


int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    slot A(1000);
    slot B;


    Gambler gm1(&A, 1, 50);
    Gambler gm2(&A, 2, 75);
    Gambler gm3(&A, 3, 30);
    Gambler gm4(&B, 4, 100);
    Gambler gm5(&B, 5, 40);


    gm1.getThreadReference()->join();
    gm2.getThreadReference()->join();
    gm3.getThreadReference()->join();
    gm4.getThreadReference()->join();
    gm5.getThreadReference()->join();



    std::cout << "first slot machine: " << "\n";
    std::cout << "Slot money: " << A.money << " Gambler 1 money: " << gm1.money
        << " Gambler 2 money: " << gm2.money << " Gambler 3 money: " << gm3.money << "\n";


    std::cout << "second slot machine: " << "\n";
    std::cout << "Slot money: " << B.money << " Gambler 4 money: " << gm4.money
              << " Gambler 5 money: " << gm5.money << "\n";


    return 0;
}