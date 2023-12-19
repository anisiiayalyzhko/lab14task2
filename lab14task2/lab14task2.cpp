// lab14task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>

int main() {
    int n;

    // Запитуємо користувача про розмір масиву та перевіряємо на коректність введення
    do {
        printf("Enter the size of the massive (positive number): ");
        scanf_s("%d", &n);
    } while (n <= 0);

    // Оголошуємо масив розміром n
    int* dynamicArray = new int[n];

    // Запитуємо користувача ввести елементи масиву
    printf("Enter the elements of the massive:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf_s("%d", &dynamicArray[i]); // Використовуємо dynamicArray[i] замість i
    }

    // Використовуємо покажчик для ітерації через масив та обчислення суми його елементів
    int* ptr = dynamicArray; // Покажчик на початок масиву
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *ptr; // Додаємо значення, на яке вказує покажчик
        ptr++;       // Переміщаємо покажчик на наступний елемент масиву
    }

    // Обчислення та виведення середнього значення елементів масиву
    double average = (double)sum / n;
    printf("Average of the massive: %.2lf\n", average);

    // Звільнюємо пам'ять, виділену для масиву
    delete[] dynamicArray;

    return 0;
}


