/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   Articulo.h
 * Author: Yoshi
 *
 * Created on 23 de agosto de 2024, 07:20 PM
 */

#ifndef ARTICULO_H
#define ARTICULO_H

struct Articulo{
    char codigo[10];
    char nombre[100];
    double precio;
    int cantVendida;
    double montoVendido;
};


#endif /* ARTICULO_H */

