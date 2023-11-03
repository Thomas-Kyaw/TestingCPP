/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sfu
 *
 * Created on November 2, 2022, 11:21 AM
 */

#include <cstdlib>

#include "Order.h"
#include "Sports.h"
#include "Electrical.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Order *o = new Order();
    Sports *s = new Sports("AAA",20,2,"A");
    Electrical *e = new Electrical("EEE",100,1,200);
    o->AddProduct(s);
    o->AddProduct(e);
    o->PrintOrders();
    system("pause");
    return 0;
}

