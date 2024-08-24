/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Yoshi
 *
 * Created on 23 de agosto de 2024, 07:19 PM
 */



/*
 * 
 */

#include "Funciones.h"

int main(int argc, char** argv) {
    
    crearArticulosBin();
    crearVendedoresBin();
    ifstream binario("Vendedores.bin",ios::out);
    struct Vendedor vendedor;
    while(true){
        binario.read(reinterpret_cast<char*>(&vendedor),sizeof(vendedor));
        if (binario.eof()) break;
        cout << vendedor.codigo << " " << vendedor.nombre << " " << vendedor.porcentaje << " " << vendedor.cuotaMinima << endl;
    }
    return 0;
}

