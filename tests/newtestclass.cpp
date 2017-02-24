/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: pc
 *
 * Created on Feb 24, 2017, 12:30:18 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

bool compare_equals(double a, double b, double EPSILON);

void newtestclass::testCompare_equals() {
    double a;
    double b;
    double EPSILON;
    bool result = compare_equals(a, b, EPSILON);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

