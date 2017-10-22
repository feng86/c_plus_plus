#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class Shape
{
protected:
    float x,y;
public:
    Shape() {}
    Shape(int x, int y) : Shape()
    {
        this->x=x;
        this->y=y;
    }
    virtual void Print(){cout << "Position: " << x << ' ' << y << '.';}
    virtual float getArea() const {}
    void add(float x, float y)
    {
        this->x+=x;
        this->y+=y;
    }
    float getCentroidX(){return x;}
    float getCentroidY(){return y;}
};
class Circle : public Shape
{
protected:
    float radius;
public:
    Circle(float x, float y, float r) : Shape(x,y),radius(r) {}
    void Print(){cout << "Position: " << x << ' ' << y << "Radius: " << radius << ".";}
    float getArea() const{return 3.14159f * radius*radius;}
};
class Square : public Shape
{
protected:
    float length;
public:
    Square(float x, float y, float l) : Shape(x,y),length(l) {}
    void Print(){cout << "Position: " << x << ' ' << y << " length: " << length << ".";}
    float getArea() const{return length*length;}
    bool operator <(const Shape& sh)
    {
        const Shape* ptr=&sh;
        return getArea() < ptr->getArea();
    }
};
class Triangle : public Shape
{
protected:
    float base;
    float height;
public:
    Triangle(float x, float y, float b,float h) : Shape(x,y)
    {
        base=b;
        height=h;
    }
    void Print(){cout << "Position: " << x << ' ' << y << " base: " << base << " height: " << height << ".";}
    float getArea() const{return 0.5f*base*height;}
    bool operator <(const Shape& sh)
    {
        const Shape* ptr=&sh;
        return getArea() < ptr->getArea();
    }
};
void mySort(vector<Shape*> &v)
{
    map<float,Shape*> m;
    for (int i=0;i<v.size();i++)
        m[v[i]->getArea()]=v[i];
    v.clear();
    for (map<float,Shape*>::iterator it=m.begin();it!=m.end();it++)
        v.push_back(it->second);
}
int main()
{
    Triangle t(2,3,4,4);
    Circle c(1,0,5);
    Square s(2,5,6);
    vector<Shape*> v;
    v.push_back(&c);
    v.push_back(&t);
    v.push_back(&s);

    for (vector<Shape*>::iterator it=v.begin();it!=v.end();it++)
    {
        (*it)->Print();
        cout << endl;
        cout << "Area: " << (*it)->getArea() << endl;
    }
    mySort(v);
    //sort(v.begin(),v.end());
    cout << "After sorting: " << endl << endl;
    for (vector<Shape*>::iterator it=v.begin();it!=v.end();it++)
    {
        (*it)->Print();
        cout << endl;
        cout << "Area: " << (*it)->getArea() << endl;
    }
    return 0;
}
