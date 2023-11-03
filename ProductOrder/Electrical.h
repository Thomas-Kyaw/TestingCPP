/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Electrical.h
 * Author: sfu
 *
 * Created on November 2, 2022, 11:53 AM
 */

#ifndef ELECTRICAL_H
#define ELECTRICAL_H
#include "Product.h"
#include <iostream>
using namespace std;

class Electrical:public Product {
public:
    Electrical();
    Electrical(string pName,double p,int qty,int w);
    double CalculatePrice();
    void PrintDetails();
    Electrical(const Electrical& orig);
    virtual ~Electrical();
private:
    int watt;

};

#endif /* ELECTRICAL_H */

