/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.cpp
 * Author: sfu
 * 
 * Created on November 2, 2022, 11:22 AM
 */

#include "Product.h"

Product::Product() {
    prodName = "";
    price = 0;
    quantity = 0;
}

Product::Product(string pName, double p, int qty){
    prodName = pName;
    price = p;
    quantity = qty;
}

double Product::getPrice(){
    return price;
}

string Product::getName(){
    return prodName;
}

int Product::getQuantity(){
    return quantity;
}

Product::Product(const Product& orig) {
}

Product::~Product() {
}

