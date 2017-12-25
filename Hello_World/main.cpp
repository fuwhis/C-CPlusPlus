/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Quy Nguyen
 *
 * Created on December 10, 2017, 5:32 PM
 */

#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;

int main() {
    cout << "Hello World" << "\n";

    int array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i + 100;
    }
    cout << "Phan tu thu ||" << setw(10) << " Gia tri la:" << endl;

    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(15) << array[j] << endl;
    }
    return 0;
}

