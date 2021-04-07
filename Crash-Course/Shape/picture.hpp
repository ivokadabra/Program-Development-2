
#include <iostream>
#include <vector>
#include "shape.hpp"
#include <iterator>
using namespace std;

template<typename T>
class Picture{
  private:
  std:: vector<Shape<T>*>shapes;
  public:
  void add(Shape<T> *s){
      shapes.push_back(s);
  }

  void delShape(Shape<T> *s){
      shapes.clear(s);
  }

  double getArea(){
      double sum=0.0;
     for(int i=0;i<shapes.size();i++){
      sum+=shapes[i]->area();
    }
    return sum;
  }
};
