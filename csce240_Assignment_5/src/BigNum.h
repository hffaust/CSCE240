/*
 * BigNum.h
 *
 *  Created on: Mar 30, 2017
 *      Author: hfaust
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#ifndef BIGNUM_H_
#define BIGNUM_H_

//namespace std {
struct Digit{

	string data;
	int num;
	const string& getData() const {
		return data;
	};

	int getNum() const {
		return num;
	};
	void setData(const string& data) {
		this->data = data;
	};

	void setNum(int num) {
		this->num = num;
	};
};
class BigNum {
public:
	//static Digit d;
	const string& getData(Digit d) const {
		return d.getData() ;
	};

	int getNum(Digit d) const {
		return d.getNum();
	};
	vector<Digit> numerals;
	//may not need
	const vector<Digit>& getNumerals() const {
		return numerals;
	};

	static int getDigitInt(vector<Digit> v)
	{
		Digit d;
		int n;
		char* ch = new char[v.size()];
		for(int i=0; i < v.size(); i++)
		{
			d = v[i];
			n = d.getNum();
			ch[i] = n;
		}
		n = atoi(ch);
		return n;
	}
	static char* getDigitString(vector<Digit> v){
		Digit d;
		//int n;
		string str;
		char* ch = new char[v.size()];
		for(int i=0; i < v.size(); i++)
		{
			d = v[i];
			str = d.getData();
			ch[i] = str[i];
		}
		return ch;
	};
	static void dataPrint(vector<Digit>v){
		cout<<"dataprint"<<endl;
		cout<<v.back().getData()<<endl;

	};
	static void numPrint(vector<Digit> v){
		cout<<"numprint"<<endl;
		cout<<v.back().getNum()<<endl;
	};
	BigNum();
	BigNum(unsigned long long);
	BigNum(BigNum&);
	//string getDigitData(Digit);
	virtual ~BigNum();

	friend BigNum operator+(const BigNum&, const BigNum&);
	//	friend const UnsignedLargeInt operator *(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//
	//	friend const UnsignedLargeInt& operator +=(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const UnsignedLargeInt& operator *=(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//
	//	const bool operator !();
	//	friend const bool operator !=(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const bool operator ==(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const bool operator <(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const bool operator >(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const bool operator <=(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//	friend const bool operator >=(const UnsignedLargeInt& i1, const UnsignedLargeInt& i2);
	//
	BigNum operator ++();
	BigNum operator ++(int);

	friend ostream& operator <<(ostream& os, const BigNum& largeint);



	//	void setNumerals(const vector<Digit>& numerals) {
	//		this->numerals = numerals;
	//	}
};

//} /* namespace std */

#endif /* BIGNUM_H_ */
