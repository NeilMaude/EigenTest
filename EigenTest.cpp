// EigenTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "D:\Git\C++\EigenTest\Eigen\Eigen"			// using the full path - the last 'Eigen' is the file name, noting the lack of a .h on the end...

//using namespace std;
using namespace Eigen;


int main()
{
	MatrixXd m(2, 2);
	m(0, 0) = 3;
	m(1, 0) = 2.5;
	m(0, 1) = -1;
	m(1, 1) = m(1, 0) + m(0, 1);
	std::cout << "First matrix :" << std::endl;
	std::cout << m << std::endl;
	std::cout << std::endl;
	
	MatrixXd m2 = MatrixXd::Random(5, 5);
	std::cout << "Random 5x5 matrix :" << std::endl;
	std::cout << m2 << std::endl;
	VectorXd v(5);
	v << 1, 2, 3, 4, 5;
	std::cout << "Vector :" << std::endl <<  v << std::endl;
	std::cout << std::endl << "Product :" << std::endl;
	std::cout << "m2 * v = " << std::endl;
	std::cout << m2 * v << std::endl;


    return 0;
}

