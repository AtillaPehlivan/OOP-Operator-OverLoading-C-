//
//  Vector.h
//  OperatorOverLoadingOOP4
//
//  Created by Atila PEHLİVAN on 5.12.2017.
//  Copyright © 2017 Atilla Pehlivan. All rights reserved.
//
#include <iostream>
#ifndef Vector_h
#define Vector_h
using namespace std;
class Vector {
    friend ostream &operator<<( ostream &, const Vector & );
    friend istream &operator>>( istream &, Vector & );
public:
    Vector(int dimension=3);
    Vector(double data[],int dimension);
    Vector(const Vector &CopyVector);
    int getDimension();
    const Vector& operator=(const Vector & CopyVector);
    bool operator==(const Vector & SecondOperand);
    bool operator!=(const Vector & SecondOperand);
    bool operator<=(const Vector & SecondOperand);
    bool operator<(const Vector & SecondOperand);
    bool operator>=(const Vector & SecondOperand);
    bool operator>(const Vector & SecondOperand);
    double& operator[](int index);
    const double& operator[](int index) const;
    Vector operator+(const Vector & SecondOperand);
    Vector& operator+=(const Vector & SecondOperand);
    Vector operator-(const Vector & SecondOperand);
    Vector& operator-=(const Vector & SecondOperand);
    double operator*(const Vector & SecondOperand);
    Vector operator*(const double multiplier);
    Vector& operator*=(const double multiplier);
    Vector operator/(const Vector & SecondOperand);
    Vector& operator/=(const Vector & SecondOperand);
    Vector operator/(const double divider);
    Vector& operator/=(const double divider);
    double operator()();
    Vector & operator!();
    
private:
    double * m_data;
    int m_dimension;
    
};











#endif /* Vector_h */
