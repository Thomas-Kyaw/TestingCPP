/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   testProductOrderclass.h
 * Author: sfu
 *
 * Created on Nov 2, 2022, 12:04:39 PM
 */

#ifndef TESTPRODUCTORDERCLASS_H
#define TESTPRODUCTORDERCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class testProductOrderclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(testProductOrderclass);

    CPPUNIT_TEST(testSportCalculatePrice);
    CPPUNIT_TEST(testElectricalCalculatePrice);
    CPPUNIT_TEST(testOrder);
    

    CPPUNIT_TEST_SUITE_END();

public:
    testProductOrderclass();
    virtual ~testProductOrderclass();
    void setUp();
    void tearDown();

private:
    void testSportCalculatePrice();
    void testElectricalCalculatePrice();
    void testOrder();
};

#endif /* TESTPRODUCTORDERCLASS_H */

