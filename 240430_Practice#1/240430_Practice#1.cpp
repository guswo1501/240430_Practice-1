#include <iostream>


int main()
{
	std::string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
	
	std::cout << s.length() << std::endl;

	std::cout << s.at(99) << std::endl;				//index�� 0���ʹϱ� 100��°�� 99��.

	std::cout << s.find("two") << std::endl;

	int num = s.find("two");
	std::cout << s.find("two", num + 1) << std::endl; // find(str,n)�� n��° index�� '����'�ϱ� ������ +1�� ���ش�.
}
