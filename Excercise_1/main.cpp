#include <iostream>
#include <cstdlib>
using namespace std;



class Kouti
{

    private:double length; double breadth;double height;
    public :
    void setlength( double );
    void setbreadth( double );
    void setheight( double);
    double getlength(void);
    double getbreadth(void);
    double getheight(void);
 double  calculateOgkos(double);

 Kouti operator+(const Kouti& b)
{
    Kouti kouti;
    kouti.length = this->length + b.length;
kouti.breadth = this->breadth + b.breadth;
kouti.height = this->height + b.height;
return kouti;
}

};


  double Kouti::calculateOgkos ( double l0)
  {
      l0=getlength() * getbreadth() * getheight();
  }



double Kouti::getlength(void)
{
    return length;
}
double Kouti::getbreadth(void)
{
    return breadth;
}
double Kouti::getheight(void)
{
    return height;
}
void  Kouti::setlength(double l1)
{
    length=l1;
}
void Kouti::setbreadth(double l2)
{
   breadth=l2;
}
void Kouti::setheight(double l3)
{
    height=l3;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
double o;
Kouti KoutiA;
Kouti KoutiB;
KoutiA.setlength(2.0);
KoutiA.getlength();
KoutiA.setbreadth(3.2);
KoutiA.getbreadth();
KoutiA.setheight(6.2);
KoutiA.getheight();
KoutiB.setlength(2.5);
KoutiB.getlength();
KoutiB.setbreadth(4.0);
KoutiB.getbreadth();
KoutiB.setheight(5.0);
KoutiB.getheight();
KoutiA.calculateOgkos(o);
KoutiB.calculateOgkos(o);
cout << "o  ogkos tou KoutiA einai : " << KoutiA.calculateOgkos(o) << endl;
cout <<  "o  ogkos tou KoutiB einai : " <<KoutiB.calculateOgkos(o) << endl;
Kouti KoutiC;
KoutiC =KoutiA + KoutiB;
cout << "o  ogkos tou KoutiA kai KoutiB einai : " << KoutiC.calculateOgkos(o) << endl;

return 0;
}

