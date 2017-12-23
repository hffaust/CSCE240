/*
 * BigNum.cpp
 *
 *  Created on: Mar 30, 2017
 *      Author: hfaust
 */

#include "BigNum.h"
#include <vector>
#include <string>
using namespace std;
//namespace std {

BigNum::BigNum() {
	// TODO Auto-generated constructor stub
	Digit a = {"5252",5252};
BigNum::numerals.push_back(a);
//a.insert();
	cout<<"default constructor"<<endl;
}
BigNum::BigNum(unsigned long long num)
{
	string str = to_string(num);
	Digit a = {str, num};
	BigNum::numerals.push_back(a);
	cout<<"long long constructor"<<endl;
}
BigNum::BigNum(BigNum& bignum)
{
	vector<Digit> v = bignum.getNumerals();
	char* ch = getDigitString(v);
	int n = getDigitInt(v);
	string str(ch, sizeof(ch) );
	Digit a = {str, n};
	BigNum::numerals.push_back(a);
	cout<<"BigNum constructor"<<endl;
}
BigNum::~BigNum() {
	// TODO Auto-generated destructor stub
}
ostream& operator <<(ostream& os, const BigNum& largeint)
{
	vector<Digit> v;
	v = largeint.getNumerals();
	//BigNum::dataPrint(v);
	//BigNum::numPrint(v);
	os<<v.back().getData()<<" "<<v.back().getNum()<<endl;

};
BigNum operator+(const BigNum& a, const BigNum& b)
{
	BigNum c;
	c = a + b;
	return c;
}


//string getDigitData(Digit d)
//{
//	string str = d.getData();
//	return str;
//}
//} /* namespace std */

//Digit d;
//d = bignum.getNumerals();
//d.setData(bignum.getData(v.));
//d.data = getData(v);
//string str = to_string(bignum.getNumerals().getData());
//int n = bignum.getNumerals().getNum();

