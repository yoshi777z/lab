/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   Vendedor.h
 * Author: Yoshi
 *
 * Created on 23 de agosto de 2024, 07:25 PM
 */

#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Funciones.h"
#include "ArticuloVendido.h"


struct Vendedor{
    int codigo;
    char nombre[150];
    double porcentaje;
    double cuotaMinima;
    ArticuloVendido articulo;
    int cantArticulos = {};
    double montoTotal = {};
    bool superoCuota = {};
};


#endif /* VENDEDOR_H */

