//single inheritance 


// visibility-mode = public;
// #include <iostream>

// using namespace std;

// class base
// {
//     int data1;
//     public:
//        int data2;
//        void setvalues(void)
//        {
//            data1=10;
//            data2=20;
//        }
//        int getvalue()
//        {
//            return data1;
//        }
//        int getvalue1()
//        {
//            return data2;
//        }
// };

// class derived : public base
// {
     
//     public:
//    int data3;
//       void process()
//       {
//           data3=getvalue1()*getvalue();
//       }
//       void display()
//       {
//           cout<<data3<<endl;
//       }
// };


// int main()
// {
//     derived d;
//     d.setvalues();
//     d.process();
//     cout<<d.getvalue()<<endl;          
//     cout<<d.getvalue1()<<endl;
//     d.display();
//     cout<<d.data3<<endl<<d.data2<<endl;     //we can't access d.data1 bcz data1 is private member 
//     return 0;
// }



//visibility-mode = private;
#include <iostream>
using namespace std;
class base
{
    int data1;
    public:
       int data2;
       void setvalues(void)
       {
           data1=10;
           data2=20;
       }
       int getvalue()
       {
           return data1;
       }
       int getvalue1()
       {
           return data2;
       }
};

class derived : private base      /*if we write private here then setvalues,getvalues are considered as private 
                                    members  so we can't access them in main function first we have to 
                                    call public function and in that we can access private members */
{
    public:
      int data3;  
      void process()
      {
          setvalues();
          cout<<data2<<endl;   //we can access data2 here but not in main function can't access data1 here 
                               // or in main function 
          data3=getvalue1()*getvalue();
      }
      void display()
      {
          cout<<data3<<endl;
      }
};


int main()
{
    derived d;
    d.process();
    d.display();
    cout<<d.data3<<endl;     //we can't access d.data1,d.data2 bcz they are private members 
    return 0;
}