#include<iostream>
using namespace std;
class IntSet
{
    int n=0;
    int data[50];
public:
    int getData(int);
    void putData(int,int);
    int getCount();
    IntSet Union(IntSet);
    IntSet Difference(IntSet);
};

int IntSet::getData(int index)
{
    return data[index];
}

void IntSet::putData(int value, int i)
{
    data[i]=value;
    n++;
}

int IntSet::getCount()
{
    return n;
}

IntSet IntSet::Union(IntSet op)
{
    int additions=0;
    bool flag;
    int k=op.getCount();
    for (int i=0;i<k;i++)
    {
        flag=false;
        for (int j=0;j<n;j++)
        {
            if (op.data[i]==data[j])
            {
                flag=true;
                break;
            }
        }
        if (flag==false)
        {
            data[n+additions++]=op.data[i];
        }
    }
    n+=additions;
    return *this;
}

IntSet IntSet::Difference(IntSet op)
{
    int k=op.getCount();
    bool flag;
    for (int i=0;i<n;i++)
    {
        flag=false;
        for (int j=0;j<k;j++)
        {
            if (op.data[j]==data[i])
            {
                flag=true;
                break;

            }
        }
        if (flag==true)
        {
            for (int pagla=i;pagla<n;pagla++)
            {
                data[pagla]=data[pagla+1];
            }
            i--;
            n--;
        }
    }
    return *this;
}

int main()
{
    int counter;
    cout
     << "Number of sets: ";
    cin >> counter;
    IntSet s[counter];
    for (int i=0;i<counter;i++)
    {
        int n,data;
        cout << "Set " << i+1 << " n=";
        cin >> n;
        cout << "Data: ";
        for (int j=0;j<n;j++)
        {
            cin >> data;
            s[i].putData(data, j);
        }
    }

    for (int i=1;i<counter;i++)
    {
        s[0].Union(s[i]);
    }

    cout << "Result: ";
    for (int i=0;i<s[0].getCount();i++)
    {
        cout << s[0].getData(i) << " ";
    }
}
