#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>


void sortLineDescending(std::vector<int>& line) {
    std::sort(line.rbegin(), line.rend()); // сортировка
}


void printFirstTen(std::vector<int> line) {
    for (int i = 0; i < 10; i++) { // цикл проходящий по первым 10 элементам вектора
        std::cout << line[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int vectorNumber = 10; // высота матрицы
    int vectorSize = 100000; // ширина матрицы

    // матрица
    std::vector<std::vector<int>> matrix(vectorNumber);
    for (std::vector<int>& element : matrix) {
        element = std::vector<int>(vectorSize);
    }

    // заполняем матрицу:
    for (int i = 0; i < vectorNumber; i++) {
        for (int j = 0; j < vectorSize; j++) {
            matrix[i][j] = i + j;
        }
    }

    // производим сортировку назначая каждому потоку собственный вектор из матрицы
    std::vector<std::thread> vectorOfThreads(vectorNumber);
    for (int i = 0; i < vectorNumber; i++) {
        vectorOfThreads[i] = std::thread(sortLineDescending, std::ref(matrix[i]));
    }

    // ждём окончания расчётов
    for (int i = 0; i < vectorNumber; i++) {
        vectorOfThreads[i].join();
    }

    // печатаем первые 10 элементов каждого вектора
    for (int i = 0; i < vectorNumber; i++) {
        printFirstTen(matrix[i]);
    }


    return 0;
}