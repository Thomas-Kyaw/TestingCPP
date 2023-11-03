/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   testProductOrderclass.cpp
 * Author: sfu
 *
 * Created on Nov 2, 2022, 12:04:40 PM
 */

#include "testProductOrderclass.h"
#include "Sports.h"
#include "Electrical.h"
#include "Order.h"
#include <iomanip>
#include <cmath>
using namespace std;


CPPUNIT_TEST_SUITE_REGISTRATION(testProductOrderclass);

testProductOrderclass::testProductOrderclass() {
}

testProductOrderclass::~testProductOrderclass() {
}

void testProductOrderclass::setUp() {
}

void testProductOrderclass::tearDown() {
}

void testProductOrderclass::testSportCalculatePrice() {
    Sports *s = new Sports("AAA",20,2,"A");
    CPPUNIT_ASSERT(s->CalculatePrice()==10);
}


void testProductOrderclass::testElectricalCalculatePrice(){
    Electrical *e = new Electrical("EEE",100,1,200);
    CPPUNIT_ASSERT(ceil(e->CalculatePrice()*100.0)/100==20.00);
}

void testProductOrderclass::testOrder(){
    Order *o = new Order();
    Sports *s = new Sports("AAA",20,2,"A");
    Electrical *e = new Electrical("EEE",100,1,200);
    o->AddProduct(s);
    o->AddProduct(e);
    CPPUNIT_ASSERT(o->getProducts().size()==2);
    o->RemoveProduct(0);
    CPPUNIT_ASSERT(o->getProducts().size()==1);
}



