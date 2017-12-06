//
//  Vector.cpp
//  OperatorOverLoadingOOP4
//
//  Created by Atila PEHLİVAN on 5.12.2017.
//  Copyright © 2017 Atilla Pehlivan. All rights reserved.
//
#include <iomanip>
#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;
int Vector::getDimension()
{
    return this->m_dimension;
}
Vector::Vector(int dimension):m_dimension(dimension)
{
    m_data = new double[dimension];
}
Vector::Vector(double data[],int dimension):m_dimension(dimension)
{
    m_data = new double[dimension];
    for (int i=0; i<dimension; i++) {
        m_data[i]=data[i];
    }
}
Vector::Vector(const Vector &CopyVector):m_dimension(CopyVector.m_dimension)
{
    m_data =  new double(CopyVector.m_dimension);
    for (int i=0; i<m_dimension; i++) {
        m_data[i]=CopyVector.m_data[i];
    }
}

const Vector& Vector::operator=(const Vector &CopyVector)
{
    this->m_data = new double(CopyVector.m_dimension);
    for (int i=0; i<CopyVector.m_dimension; i++) {
        this->m_data[i] = CopyVector.m_data[i];
    }
    return *this;
}
bool Vector::operator==(const Vector &SecondOperand)
{
    double v1=0,v2=0;
    for (int i=0; i<this->getDimension(); i++) {
        v1+=this->m_data[i];
        v2+=SecondOperand.m_data[i];
    }
    return v1==v2;
}
bool Vector::operator<(const Vector &SecondOperand)
{
    double v1=0,v2=0;
    for (int i=0; i<this->getDimension(); i++) {
        v1+=this->m_data[i];
        v2+=SecondOperand.m_data[i];
    }
    return v1<v2;
}
bool Vector::operator<=(const Vector &SecondOperand)
{
    double v1=0,v2=0;
    for (int i=0; i<this->getDimension(); i++) {
        v1+=this->m_data[i];
        v2+=SecondOperand.m_data[i];
    }
    return v1<=v2;
}bool Vector::operator>(const Vector &SecondOperand)
{
    double v1=0,v2=0;
    for (int i=0; i<this->getDimension(); i++) {
        v1+=this->m_data[i];
        v2+=SecondOperand.m_data[i];
    }
    return v1>v2;
}
bool Vector::operator>=(const Vector &SecondOperand)
{
    double v1=0,v2=0;
    for (int i=0; i<this->getDimension(); i++) {
        v1+=this->m_data[i];
        v2+=SecondOperand.m_data[i];
    }
    return v1>=v2;
}
double& Vector::operator[](int index)
{
    return this->m_data[index];
}
const double& Vector::operator[](int index) const
{
    return this->m_data[index];
}
Vector Vector::operator+(const Vector &SecondOperand)
{
    Vector result(3);
    for (int i =0; i<3; i++) {
        result[i] = this->m_data[i] + SecondOperand.m_data[i];
    }
    return result;
    
}
Vector& Vector::operator+=(const Vector &SecondOperand)
{
    for (int i =0; i<this->m_dimension;i++ ) {
        this->m_data[i] -= SecondOperand.m_data[i];
    }
    return *this;
}
Vector Vector::operator-(const Vector &SecondOperand)
{
    Vector result(3);
    for (int i =0; i<3; i++) {
        result[i] = this->m_data[i] - SecondOperand.m_data[i];
    }
    return result;
    
}
Vector& Vector::operator-=(const Vector &SecondOperand)
{
    for (int i =0; i<this->m_dimension;i++ ) {
        this->m_data[i] += SecondOperand.m_data[i];
    }
    return *this;
}
double Vector::operator*(const Vector &SecondOperand)
{
    double result=0;
    for (int i=0; i<SecondOperand.m_dimension; i++) {
        result+=this->m_data[i] * SecondOperand[i];
    }
    return result;
}
Vector Vector::operator*(const double multiplier)
{
    Vector result(3);
    for (int i =0; i<result.m_dimension; i++) {
        result[i]=this->m_data[i]*multiplier;
    }
    return result;
}
Vector& Vector::operator*=(const double multiplier)
{
    for (int i =0; i<this->m_dimension; i++) {
        this->m_data[i]*=multiplier;
    }
    return *this;
}
Vector Vector::operator/(const Vector &SecondOperand)
{
    Vector result(3);
    for (int i=0; i<3; i++) {
        result.m_data[i]=this->m_data[i]/SecondOperand.m_data[i];
    }
    return result;
}
Vector& Vector::operator/=(const Vector &SecondOperand)
{
    
    for (int i=0; i<3; i++) {
       this->m_data[i]=this->m_data[i]/SecondOperand.m_data[i];
    }
    return *this;
}
Vector Vector::operator/(double divider)
{
    Vector result(3);
    for (int i=0; i<3; i++) {
        result.m_data[i]=this->m_data[i]/divider;
    }
    return result;
}
Vector& Vector::operator/=(double divider)
{
    
    for (int i=0; i<3; i++) {
        this->m_data[i]=this->m_data[i]/divider;
    }
    return *this;
}
double Vector::operator()()
{
    double result =0;
    for (int i=0; i<this->m_dimension; i++) {
        result+=this->m_data[i]*this->m_data[i];
    }
    
    return  sqrt(result);
}
Vector& Vector::operator!()
{
   
    for (int i=0; i<this->m_dimension; i++) {
        m_data[i]=abs(m_data[i]);
    }
    return *this;
}
istream &operator>>( istream &input, Vector &a )
 {
     for ( int i = 0; i < a.m_dimension; i++ )input >> a.m_data[ i ];
     return input;
}
 ostream &operator<<( ostream &output, const Vector &a )
 {
     int i;
     output<<"[";
     for ( i = 0; i < a.m_dimension; i++ ) {
         output << setw(5) << a.m_data[i];
         if ( ( i + 1 ) % 3 == 0 )output <<"]"<< endl;
         }
         if ( i % 3 != 0 )output << endl;
         return output;
 }
