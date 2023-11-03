/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sports.h
 * Author: sfu
 *
 * Created on November 2, 2022, 11:36 AM
 */

#ifndef SPORTS_H
#define SPORTS_H
#include "Product.h"
#include <iostream>
using namespace std;

class Sports:public Product {
public:
    Sports();
    Sports(string pName,double p,int qty,string sType);
    double CalculatePrice();
    void PrintDetails();
    Sports(const Sports& orig);
    virtual ~Sports();
private:
    string sportType;
};

#endif /* SPORTS_H */

