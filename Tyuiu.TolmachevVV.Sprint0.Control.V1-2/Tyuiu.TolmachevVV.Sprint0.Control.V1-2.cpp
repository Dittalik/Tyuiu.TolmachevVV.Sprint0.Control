// Tyuiu.TolmachevVV.Sprint0.Control.V1-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Control.V1-2.Lib/Tyuiu.TolmachevVV.Sprint0.Control.V1-2.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task8V0* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Variant1.Zadacha1\n";

    std::cout << std::endl;
    
    int a, b, c;
    std::cout << "Введите трёхзначное число: ";
    std::cin >> a;
    if (serviceV1->Control(a) == false)
    {
        std::cout << "Введенное число не является трёхзначным";
    }
    else
    {
        std::cout << "Произведение цифр данного числа равно: " << serviceV1->Control(a);
    }

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task8V2* serviceV2 = new ServiceV2();
    std::cout << "Variant1.Zadacha2\n";
    std::cout << std::endl;

    std::cout << "Введите значение x: ";
    std::cin >> a;
    std::cout << "Введите значение y: ";
    std::cin >> b;
    std::cout << "Введите значение z: ";
    std::cin >> c;
    std::cout << "Значение выражения с заданными переменными равно: " << serviceV2->Rezultat(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task8V1* serviceV3 = new ServiceV3();
    std::cout << "Variant2.Zadacha1\n";
    std::cout << std::endl;

    std::cout << "Введите значение x: ";
    std::cin >> a;
    std::cout << "Введите значение z: ";
    std::cin >> b;

    std::cout << "Значение выражения с заданными переменными равно: " << serviceV3->Chislo(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task8V2* serviceV4 = new ServiceV4();
    std::cout << "Variant2.Zadacha2\n";
    std::cout << std::endl;

    std::cout << "Введите значение x: ";
    std::cin >> a;
    std::cout << "Введите значение y: ";
    std::cin >> b;
    std::cout << "Введите значение z: ";
    std::cin >> c;

    std::cout << "Значение выражения с заданными переменными равно: " << serviceV4->Rezultat(a, b, c);
}

