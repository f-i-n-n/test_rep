#include <iostream>
#include <vector>
#include <map>
#include <string>

//---------------------------------------------
// Test strings
std::string q1 = "x^2+x";
std::string q2 = "2*x^100+100*x^2";
std::string q3 = "x+x+x+x+x+x+x+x+x+x";
//---------------------------------------------

//---- stepic function ------------------------
std::string derivative(std::string polynomial)
{
	return polynomial;
}
//---------------------------------------------




//---------------------------------------------
int main(const int argc, char** argv)
{
	// test control function
	std::cout<<derivative(q3)<<std::endl;

	// for terms of polinomial
	std::vector<std::string> v_s;
	

	// test 
	v_s[0] = q2+q1; // Bug !!!
	std::cout<< v_s[0] <<std::endl;
	


	return 0;	
}
//---------------------------------------------






