#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));

	Vector obj1(5); //-------------  1 2 3 4 5
	obj1.InputRand();
	obj1.Print();

	Vector obj3 = obj1 - 2;// 1 2 3    
	obj3.Print();
	obj1.Print();

	
	
	Vector obj4 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5

	obj4.Print();
	obj1.Print();

	Vector obj5 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5

	obj5.Print();
	obj1.Print();

	cout << "====================\n";

	Vector obj5pref = --obj5;

	obj5pref.Print();
	obj5.Print();

	Vector obj5post = obj5--;
	obj5post.Print();
	obj5.Print();

	cout << "====================\n";

	Vector obj6(3); // 1 2 3
	obj6.InputRand();

	obj6+=5; // 1 2 3 0 0 0 0 0
	obj6.Print();

	obj6-=6; // количество уменьшаем на 5 если тек. размер >=5,иначе ничего не делаем
	obj6.Print();

	obj6*=5; // каждый элемент умножаем на 5, возвращаем массив после изменения
	obj6.Print();
	
	




	


}