//
//  main.cpp
//  OperatorOverLoadingOOP4
//
//  Created by Atila PEHLİVAN on 5.12.2017.
//  Copyright © 2017 Atilla Pehlivan. All rights reserved.
//
#include"Vector.h"
void TEST_Input(Vector& vector)
{
    cout << "+------------+" << endl
    << "| INPUT TEST |" << endl
    << "+------------+" << endl;
    cin >> vector;
}
void TEST_Output(Vector& vector)
{
    cout << "+-------------+" << endl
    << "| OUTPUT TEST |" << endl
    << "+-------------+" << endl;
    cout << vector << endl;
}
void TEST_CopyConstructor(Vector& vector)
{
    cout <<"+-----------------------+" << endl
    << "| COPY CONSTRUCTOR TEST |" << endl
    << "+-----------------------+" << endl;
    Vector copy_vector(vector);
    cout << "Original Vector : " <<vector<< endl<< "Copy Vector : "<<copy_vector
    << endl;
}
void TEST_Assignment(Vector& vector)
{
    cout<< "+-----------------+" << endl
    << "| ASSIGNMENT TEST |" << endl
    << "+-----------------+" << endl;
    Vector copy_vector;
    copy_vector = vector;
    cout << "Original Vector : " << vector << endl << "Assignment Copy Vector : "
    << copy_vector << endl;
}
void TEST_Equal(Vector& vector1, Vector& vector2)
{
    cout <<"+------------+" << endl
    << "| EQUAL TEST |" << endl
    << "+------------+" << endl;
    if (vector1 == vector2)
    {
        cout << vector1 << " is equal to " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not equal to " << vector2 << endl;
    }
}
void TEST_Not_Equal(Vector& vector1, Vector& vector2)
{
    cout <<"+------------+" << endl
    << "| NOT EQUAL TEST |" << endl
    << "+------------+" << endl;
    if (vector1 == vector2)
    {
        cout << vector1 << " is equal to " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not equal to " << vector2 << endl;
    }
}
void TEST_LESS_THAN(Vector& vector1, Vector& vector2)
{
    cout << "+----------------+" << endl
    << "| LESS THAN TEST |" << endl
    << "+----------------+" << endl;
    if (vector1 < vector2)
    {
        cout << vector1 << " is less than " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not less than " << vector2 << endl;
    }
}
void TEST_LESS_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
    cout << "+----------------+" << endl
    << "| LESS THAN OR EQUAL TEST |" << endl
    << "+----------------+" << endl;
    if (vector1 <= vector2)
    {
        cout << vector1 << " is less or equal to " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not less than " << vector2 << endl;
    }
}
void TEST_GREATER_THAN(Vector& vector1, Vector& vector2)
{
    cout << "+----------------+" << endl
    << "| GREATER THAN TEST |" << endl
    << "+----------------+" << endl;
    if (vector1 > vector2)
    {
        cout << vector1 << " is greater than " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not greater than " << vector2 << endl;
    }
}
void TEST_GREATER_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
    cout << "+----------------+" << endl
    << "| GREATER THAN OR EQUAL TEST |" << endl
    << "+----------------+" << endl;
    if (vector1 >= vector2)
    {
        cout << vector1 << " is greater or equal to " << vector2 << endl;
    }
    else
    {
        cout << vector1 << " is not greater than " << vector2 << endl;
    }
}
void TEST_Subscription(Vector& vector, int i, double newValue)
{
    cout <<"+-------------------+" << endl
    << "| SUBSCRIPTION TEST |" << endl
    << "+-------------------+" << endl;
    cout << "Vector itself : " << vector << endl;
    cout << "Get vector[" << i << "] = " << vector[i] << endl;
    vector[i] = newValue;
    cout << "Set vector[" << i << "] to "<<newValue<<", then vector[" << i << "] =" << vector[i] << endl;
}
void TEST_Addition(Vector& vector1, Vector& vector2)
{
    cout <<"+---------------+" << endl
    << "| ADDITION TEST |" << endl
    << "+---------------+" << endl;
    Vector result = vector1 + vector2;
    cout << vector1 << " + " << vector2 << " = " << result << endl;
}
void TEST_AdditionOver(Vector vector1, Vector vector2)
{
    cout << "+--------------------+" << endl
    << "| ADDITION OVER TEST |" << endl
    << "+--------------------+" << endl;
    cout << "Vector 1 Before Addition over: " << vector1 << endl;
    vector1 += vector2;
    cout << "Vector 1 After Addition over: " << vector1 << endl;
}
void TEST_Substraction(Vector& vector1, Vector& vector2)
{
    cout <<"+---------------+" << endl
    << "| SUBSTRACTİON TEST |" << endl
    << "+---------------+" << endl;
    Vector result = vector1 - vector2;
    cout << vector1 << " + " << vector2 << " = " << result << endl;
    
}
void TEST_SubstractionOver(Vector vector1, Vector vector2)
{
    cout << "+--------------------+" << endl
    << "| SUBSTRACTİON OVER TEST |" << endl
    << "+--------------------+" << endl;
    cout << "Vector 1 Before Substraction over: " << vector1 << endl;
    vector1 -= vector2;
    cout << "Vector 1 After Substraction over: " << vector1 << endl;
}
void TEST_DotProduct(Vector& vector1, Vector& vector2)
{
    cout <<"+---------------+" << endl
    << "| DOT PRODCT TEST |" << endl
    << "+---------------+" << endl;
    Vector result = vector1 * vector2;
    cout << vector1 << " * " << vector2 << " = " << result << endl;
    
}
void TEST_Constant_Multiplication(Vector& vector1, double constant_value)
{
    cout << "+-----------------------------+" << endl
    << "| CONSTANT MULTIPLICATIN TEST |" << endl
    << "+-----------------------------+" << endl;
    Vector result = vector1 * constant_value;
    cout << vector1 << " * "<< constant_value <<" = "<<result<<endl;
    
}
void TEST_Constant_MultiplicationOver(Vector vector, double constant_value)
{
    cout << "+-----------------------------+" << endl
    << "| CONSTANT MULTIPLICATIN OVER |" << endl
    << "+-----------------------------+" << endl;
    cout << "Vector 1 Before Constant Multiplication over: " << vector << endl;
    vector *= constant_value;
    cout << "Vector 1 After Constant Multiplication over: " << vector << endl;
}
void TEST_Division(Vector& vector1, Vector& vector2)
{
    cout <<"+---------------+" << endl
    << "| DIVISION TEST |" << endl
    << "+---------------+" << endl;
    Vector result = vector1 / vector2;
    cout << vector1 << " / " << vector2 << " = " << result << endl;
    
}
void TEST_DivisionOver(Vector vector1, Vector vector2)
{
    cout << "+--------------------+" << endl
    << "| DIVISION OVER TEST |" << endl
    << "+--------------------+" << endl;
    cout << "Vector 1 Before Division over: " << vector1 << endl;
    vector1 /= vector2;
    cout << "Vector 1 After Division over: " << vector1 << endl;

}
void TEST_Constant_Division(Vector& vector1, double constant_value)
{
    cout << "+-----------------------------+" << endl
    << "| CONSTANT DIVISION TEST |" << endl
    << "+-----------------------------+" << endl;
    Vector result = vector1 / constant_value;
    cout << vector1 << " / "<< constant_value <<" = "<<result<<endl;
}
void TEST_Constant_DivisionOver(Vector vector, double constant_value)
{
    cout << "+-----------------------------+" << endl
    << "| CONSTANT DIVISION OVER |" << endl
    << "+-----------------------------+" << endl;
    cout << "Vector 1 Before Constant Division over: " << vector << endl;
    vector /= constant_value;
    cout << "Vector 1 After Constant Division over: " << vector << endl;
}
void TEST_Magnitude(Vector& vector1)
{
    cout <<"+----------------+" << endl
    << "| MAGNITUDE TEST |" << endl
    << "+----------------+" << endl;
    double result = vector1();
    cout << "MAG( " << vector1 << " ) = " << result << endl;
}
void TEST_InverseDirection(Vector vector)
{
    cout << "+-------------------+" << endl
    << "| INVERSE DIRECTION |" << endl
    << "+-------------------+" << endl;
    cout << "Original Vector: " << vector << endl;
    cout << "Inversed Vector: " << !vector << endl;
}
int main(int argc, const char * argv[]) {
    double firstTestData[] {1.2, 2.4, 3.6};
    double secondTestData[] {1.8, 2.6, 3.4};
    double CihanHoca[] {-0.76, 2.34, -1.6};
    // Implement the function
    Vector v1(CihanHoca,3);
    Vector v2(firstTestData, 3);
    Vector v3(firstTestData, 3);
    Vector v4(secondTestData, 3);
    //TEST_Input(v1);
    TEST_Output(v1);
    TEST_CopyConstructor(v1);
    TEST_Assignment(v1);
    TEST_Equal(v2, v3);
    TEST_Not_Equal(v3, v4);
    TEST_LESS_THAN(v1, v2);
    TEST_LESS_THAN_OR_EQUAL(v2, v3);
    TEST_GREATER_THAN(v1, v2);
    TEST_GREATER_THAN_OR_EQUAL(v2, v3);
    TEST_Subscription(v1, 1, 5.3);
    TEST_Addition(v1, v2);
    TEST_AdditionOver(v1, v2);
    TEST_Substraction(v1, v2);
    TEST_SubstractionOver(v1, v2);
    TEST_DotProduct(v1, v2);
    TEST_Constant_Multiplication(v1, 2);
    TEST_Constant_MultiplicationOver(v1, 2);
    TEST_Division(v1, v2);
    TEST_DivisionOver(v1, v2);
    TEST_Constant_Division(v1, 2);
    TEST_Constant_DivisionOver(v1, 2);
    TEST_Magnitude(v1);
    TEST_InverseDirection(v1);
    return 0;
}
