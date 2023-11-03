/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Order.h
 * Author: sfu
 *
 * Created on November 2, 2022, 12:21 PM
 */

#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include "Product.h"
using namespace std;

class Order {
public:
    Order();
    void AddProduct(Product * p);
    void RemoveProduct(int i);
    vector<Product *> getProducts();
    void PrintOrders();
    Order(const Order& orig);
    virtual ~Order();
private:
    vector<Product *> products;

};

#endif /* ORDER_H */

