#include <iostream>
using namespace std;

class Rational {       
	private:
		int n, d; 

	public:
		Rational(){
			this->n=1;
			this->d=1;
		}  	
		Rational(int n, int d){
			this->n=n;
			this->d=d;
		}
		int getNominator() const{
			return n;
		}
		int getDenominator() const{
			return d;
		}
		Rational negate() const{
			return Rational(-n, d);
		}
		Rational reciprocal() const{
			return Rational(d, n);
		}
		bool operator==(const Rational& other){
			return (n == other.n && d == other.d);
		}
		Rational add(const Rational& rhs) const{
			int addN, addD;
			addN=(getNominator()*rhs.getDenominator())+(rhs.getNominator()*getDenominator());
			addD=(getDenominator()*rhs.getDenominator());
			return Rational(addN,addD);
		}
		Rational subtract(const Rational& rhs) const{
			int substractN,substractD;
			substractN=(getNominator()*rhs.getDenominator())-(rhs.getNominator()*getDenominator());
			substractD=(getDenominator()*rhs.getDenominator());
			return Rational(substractN,substractD);
		}
		Rational multiply(const Rational& rhs) const{
			int multiplyN,multiplyD;
			multiplyN=getNominator()*rhs.getNominator();
			multiplyD=getDenominator()*rhs.getDenominator();
			return Rational(multiplyN,multiplyD);
		}
		Rational divide(const Rational& rhs) const{
			int divideN,divideD;
			divideN=getNominator()*rhs.getDenominator();
			divideD=getDenominator()*rhs.getNominator();
			return Rational (divideN,divideD);
		}

};

class Complex {
	private:
		float real,im;
	public:
		Complex(){
			this->real=0;
			this->im=0;	
		}
		Complex(float real, float im){
			this->im=im;
			this->real=real;
		}
		float getImaginary() const{
			return im;
		}
		float getReal() const{
			return real;
		}
		Complex add(const Complex& rhs) const{
			float addReal,addIm;
			addReal=getReal()+rhs.getReal();
			addIm=getImaginary()+rhs.getImaginary();
			return Complex(addReal,addIm);	
		}
		Complex subtract(const Complex& rhs) const{
			float subtractReal,subtractIm;
			subtractReal=getReal()-rhs.getReal();
			subtractIm=getImaginary()-rhs.getImaginary();
			return Complex(subtractReal,subtractIm);
		}
		Complex multiply(const Complex& rhs) const{
			float multiplyReal,multiplyIm;
			multiplyReal=(getReal()*rhs.getReal())-(getImaginary()*rhs.getImaginary());
			multiplyIm=getReal()*rhs.getImaginary()+getImaginary()*rhs.getReal();
			return Complex(multiplyReal,multiplyIm);
		}

};

int main(){
	
	Rational r1(1,2),r2(2,3),r3;
	r3=r1.add(r2);
	cout<<r3.getNominator()<<"/"<<r3.getDenominator()<<endl;
	r3=r1.subtract(r2);
	cout<<r3.getNominator()<<"/"<<r3.getDenominator()<<endl;
	r3=r1.multiply(r2);
	cout<<r3.getNominator()<<"/"<<r3.getDenominator()<<endl;
	r3=r1.divide(r2);
	cout<<r3.getNominator()<<"/"<<r3.getDenominator()<<endl;
	cout<<r1.operator==(r2)<<endl;
	
	Complex c1(-2,1),c2(-2,1),c3;
	c3=c1.add(c2);
	cout<<c3.getReal()<<" "<<c3.getImaginary()<<"i"<<endl;
	c3=c1.subtract(c2);
	cout<<c3.getReal()<<" "<<c3.getImaginary()<<"i"<<endl;
	c3=c1.multiply(c2);
	cout<<c3.getReal()<<" "<<c3.getImaginary()<<"i"<<endl;
	
	return 0;
}
