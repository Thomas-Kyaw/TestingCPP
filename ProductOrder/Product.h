/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.h
 * Author: sfu
 *
 * Created on November 2, 2022, 11:22 AM
 */

#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product {
public:
    Product();
    Product(string pName, double p, int qty);
    double getPrice();
    string getName();
    int getQuantity();
    virtual double CalculatePrice() = 0;
    virtual void PrintDetails() = 0;
    Product(const Product& orig);
    virtual ~Product();
private:
    string prodName;
    double price;
    int quantity;
};

#endif /* PRODUCT_H */

