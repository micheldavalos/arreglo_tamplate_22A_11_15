#include <iostream>
#include "arreglo.hpp"
using namespace std;

int main() {
    // Arreglo<int> enteros({1, 2, 4, 6, 8, 9});

    // for (size_t i = 0; i < enteros.size(); i++)
    // {
    //     cout << enteros[i] << ", ";
    // }
    // cout << endl;
    // cout << "Elementos: " << enteros.size() << endl;
    // cout << "Capacidad: " << enteros.max_size() << endl;

    Arreglo<int> enteros(6);
    cout << "Elementos: " << enteros.size() << endl;
    cout << "Capacidad: " << enteros.max_size() << endl;
    cout << "Lleno: " << enteros.full() << endl;

    try
    {
        enteros.push_back(1);
        enteros.push_back(2);
        enteros.push_back(3);
        enteros.push_back(4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << "Elementos: " << enteros.size() << endl;
    cout << "Capacidad: " << enteros.max_size() << endl;
    cout << "Lleno: " << enteros.full() << endl;

    enteros.push_front(-1);
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << endl;
    enteros.insert(100, 2);
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << endl;
    enteros.pop_back();
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << endl;

    enteros.pop_front();
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << endl;
    enteros.erase(1);
    for (size_t i = 0; i < enteros.size(); i++)
    {
        cout << enteros[i] << ", ";
    }
    cout << endl;

    return 0;
}