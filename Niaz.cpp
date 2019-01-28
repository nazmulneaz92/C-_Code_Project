#include<iostream>
#include<math.h>
using namespace std;
class Customer;
class Item
{
    public:
    string Name;
    string Product_origin;
    string Catagory;
    int Price;

    Item(string name,string product_origin,int price,string catagory)
    {
        Name=name;
        Product_origin=product_origin;
        Price=price;
        Catagory=catagory;
    }
};
class Person
{
    string Name;
    string Gender;
    int National_id;

public:
    Person(){}
    Person(string name,string gender,int nid)
    {
        Name=name;
        Gender=gender;
        National_id=nid;
    }
    void show_person()
    {
        cout<<"Name          :"<<Name<<endl;
        cout<<"Gender        :"<<Gender<<endl;
        cout<<"National id   :"<<National_id<<endl;
    }
};
class Customer:public Person
{
    string Name;
    int item_bought=0;
    int bill=0;
public:
    Customer(){}
    Customer(string name,string gender,int nid):Person(name,gender,nid)
    {
        Name=name;
    }
    void Buy_item(Item item,int quantity)
    {
       item_bought++;
      // cout<<item_bought<<endl;
      if(item_bought>=3)
      {
        bill+=((item.Price*5)/100)*quantity;//5% comission
        cout<<Name<<" has bought "<<item.Name<<" at price "<<((item.Price*5)/100)<<" with 5% commision "<<endl;
      }
      else
      {
          bill+=item.Price*quantity;
          cout<<Name<<" has bought "<<item.Name<<" at price "<<item.Price<<endl;
      }
    }


};
int main()
{
    Item i1("sugar","x",100,"food");
    Item i2("rice","x",900,"food");
    Item i3("cloth","x",300,"garments");

    Customer c1("Nazmul","male",11708050);
    Customer c2("Ashiq","male",11708019);
    Customer c3("Asraf","male",11708046);

    c1.Buy_item(i1,5);
    c1.Buy_item(i2,3);
    c1.Buy_item(i3,7);
    c2.Buy_item(i1,4);
    c2.Buy_item(i2,2);


}


