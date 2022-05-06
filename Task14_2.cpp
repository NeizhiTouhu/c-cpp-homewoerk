#include <iostream>
using namespace std;

class Mammal
{
	
public:
	
	// constructors
	
	Mammal():itsAge(2), itsWeight(5){}
	
	~Mammal(){}
	
	//accessors
	
	int GetAge() const { return itsAge; }
	
	void SetAge(int age) { itsAge = age; }
	
	int GetWeight() const { return itsWeight; }
	
	void SetWeight(int weight) { itsWeight = weight; }
	
	void Speak()const { 
		cout<<"Mammal sound!\n"; 
	}
	
	void Sleep()const { 
		cout<<"shhh. I¡¯m sleeping.\n"; 
	}
	
protected:
	
	int itsAge;
	
	int itsWeight;
	
};

class Dog :public Mammal{
public:
	Dog(){}
	~Dog(){}
	void Speak(){
		cout<<"Woof!\n";
	}
};

class Cat :public Mammal{
public:
	Cat(){}
	~Cat(){}
	void Speak(){
		cout<<"Meow!\n";
	}
};

int main(void){
	Dog adog;
	Cat acat;
	cout<<"Cat:"<<endl;
	cout<<"Age:"<<acat.GetAge()<<endl;
	cout<<"Weight:"<<acat.GetWeight()<<endl;
	cout<<"Speak:";acat.Speak();
	cout<<"Sleep:";acat.Sleep();
	
	cout<<endl;
	
	cout<<"Dog:"<<endl;
	cout<<"Age:"<<adog.GetAge()<<endl;
	cout<<"Weight:"<<adog.GetWeight()<<endl;
	cout<<"Speak:";adog.Speak();
	cout<<"Sleep:";adog.Sleep();
}
