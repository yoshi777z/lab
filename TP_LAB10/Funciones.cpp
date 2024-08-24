/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "Funciones.h"

void crearArticulosBin(){
    ifstream archArticulos("Articulos.csv",ios::in);
    ofstream archArticulosBin("Articulos.bin",ios::out|ios::binary);
    struct Articulo articulo;
    while(true){
        archArticulos.getline(articulo.codigo,10,',');
        if (archArticulos.eof()) return;
        archArticulos.getline(articulo.nombre,100,',');
        pasarMayus(articulo.nombre);
        archArticulos>>articulo.precio;
        archArticulos.get();
        archArticulosBin.write(reinterpret_cast<char*>(&articulo),sizeof(articulo));
    }
}

void pasarMayus(char* cadena){
    int i = 0;
    char c;
    do{
        c = cadena[i];
        if (c >= 'a' and c<= 'z'){
            c -= 'a' - 'A';
            cadena[i] = c;
        }
        i++;
    }while(c != '\0');
}

void crearVendedoresBin(){
    ifstream archVendedores("Vendedores.csv",ios::in);
    ofstream archVendedoresBin("Vendedores.bin",ios::out|ios::binary);
    struct Vendedor vendedor;
    while(true){
        archVendedores>>vendedor.codigo;
        cout << vendedor.codigo << endl;
        if (archVendedores.eof()) return;
        archVendedores.get();
        archVendedores.getline(vendedor.nombre,150,',');
        modificarNombre(vendedor.nombre);
        archVendedores>>vendedor.porcentaje;
        archVendedores.get();
        archVendedores>>vendedor.cuotaMinima;
        archVendedoresBin.write(reinterpret_cast<char*>(&vendedor),sizeof(vendedor));
    }
}

void modificarNombre(char* cadena){
    int i = 0;
    char c;
    bool primeraLetra = true;
    do{
        c = cadena[i];
        if (c == '/' or c == '-'){
            c = ' ';
            primeraLetra = true;
        }
        else{
            if (not primeraLetra and (c >= 'A' and c <= 'Z')){
                c += 'a' - 'A';
            }
            primeraLetra = false;
        }
        cadena[i] = c;
        i++;
    }while(c != '\0');
}