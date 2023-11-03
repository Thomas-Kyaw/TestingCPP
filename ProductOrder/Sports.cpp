/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sports.cpp
 * Author: sfu
 * 
 * Created on November 2, 2022, 11:36 AM
 */

#include "Sports.h"

Sports::Sports():Product() {
    sportType = "";
}

Sports::Sports(string pName, double p, int qty, string sType):Product(pName,p,qty){
    sportType = sType;
}

double Sports::CalculatePrice(){
    return 0.5 * Product::getPrice();
}

void Sports::PrintDetails(){
    cout<<"Product Name: "<<Product::getName()<<"\n";
    cout<<"Price: "<<Product::getPrice()<<"\n";
    cout<<"Quantity: "<<Product::getQuantity()<<"\n";
    cout<<"Sport Type: "<<sportType<<"\n";
}

Sports::Sports(const Sports& orig) {
}

Sports::~Sports() {
}

