/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Order.cpp
 * Author: sfu
 * 
 * Created on November 2, 2022, 12:21 PM
 */

#include "Order.h"

Order::Order() {
}

void Order::AddProduct(Product* p){
    products.push_back(p);
}

void Order::RemoveProduct(int i){
    if(i < products.size()){
        products.erase(products.begin()+i);
    }
}

vector<Product *> Order::getProducts(){
    return products;
}

void Order::PrintOrders(){
    for(int i=0; i < products.size(); i++){
        products.at(i)->PrintDetails();
    }
}

Order::Order(const Order& orig) {
}

Order::~Order() {
}

