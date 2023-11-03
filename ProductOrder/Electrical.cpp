/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Electrical.cpp
 * Author: sfu
 * 
 * Created on November 2, 2022, 11:53 AM
 */

#include "Electrical.h"

Electrical::Electrical():Product() {
    watt = 0;
}

Electrical::Electrical(string pName, double p, int qty, int w):Product(pName,p,qty){
    watt = w;
}

double Electrical::CalculatePrice(){
    return 0.2 * Product::getPrice();
}

void Electrical::PrintDetails(){
    cout<<"Product Name: "<<Product::getName()<<"\n";
    cout<<"Price: "<<Product::getPrice()<<"\n";
    cout<<"Quantity: "<<Product::getQuantity()<<"\n";
    cout<<"Watt: "<<watt<<"\n";
}

Electrical::Electrical(const Electrical& orig) {
}

Electrical::~Electrical() {
}

