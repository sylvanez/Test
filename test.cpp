
#include <iostream>


template< class T >
struct A
{
  typedef T typeA;
  typeA val()
{
  return static_cast< typeA >( 26 );
}
};


template< class T >
struct B
{
  typedef T typeB;
  typeB mType;
};

template< class T >
struct C
{
  typedef B< A< T > > typeC;
  T foo()
  {
    typeC myType;
    return myType.mType.val();
  }
};


int main(int argc, char** argv)
{
  C< int > cC;
  std::cout << cC.foo() << std::endl;
  
  return 0;
}
