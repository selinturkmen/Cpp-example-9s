#include <iostream>
using namespace std;
 
class Vector{
	private:
    int m_x, m_y, m_z; 
	public:
	Vector(){
		m_x=0;
		m_y=0;
        m_z=0;
    }
	void setValues(int s1, int s2, int s3)
	{
		m_x = s1;
		m_y = s2;
		m_z = s3;
	}
	void print()
	{
		cout<<"<"<<m_x<<","<<m_y<<","<<m_z<<">"<<endl;
	}
	bool isEqual(int a, int b, int c)
	{
      if(a==m_x && b==m_y && c==m_z)
	  {
		  return true;
	  }
	  else
	  {
		  return false;
	  }
	}
	void add(int a, int b, int c){
		cout<<"vecA + vecB : <"<<a+m_x<<","<<b+m_y<<","<<c+m_z<<">"<<endl;
	}
};

int main()
{
	Vector variables;
	int x,y,z;
	cout<<"Give <x,y,z> of the vecA:";
    cin>>x>>y>>z;
    cout<<"Using setValues for vec A:"<<endl;
    variables.setValues(x,y,z);
    variables.print();
    cout<<"Give <x,y,z> of the vecB:";
    cin>>x>>y>>z;
    cout<<"Using constractor for vecB:"<<endl;
    variables.print();
    if(variables.isEqual(x,y,z))
    {
      cout<<"vecA and vecB are equal"<<endl;
    }
    else
    {
      cout<<"vecA and vecB are not equal"<<endl;
    }
    variables.add(x,y,z);
    return 0;
   }
 

