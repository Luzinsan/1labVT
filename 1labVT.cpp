#include <iostream>
void binary(unsigned char* ptr, int bites);

int main()
{
	signed int si = -2'147'483'647;
	unsigned int u = 4'294'967'295;

	char c = -128;
	unsigned char uc = 255;

	short s = -32'768;
	unsigned short us = 65'535;

	long long ll = 9'223'372'036'854'775'808;
	unsigned long long ull = 18'446'744'073'709'551'615;

	float f = 1.512;
	double d = 8.256;

	std::cout << "signed int " << (signed int)si << " = ";
	binary((unsigned char*)&si, sizeof(si));
	std::cout << "unsigned int " << (unsigned int)u << " = ";
	binary((unsigned char*)&u, sizeof(u));
	std::cout << "char " << (short)c << " = ";
	binary((unsigned char*)&c, sizeof(c));
	std::cout << "unsigned char " << (unsigned short)uc << " = ";
	binary((unsigned char*)&uc, sizeof(uc));
	std::cout << "short " << (short)s << " = ";
	binary((unsigned char*)&s, sizeof(s));
	std::cout << "unsigned short " << (unsigned short)us << " = ";
	binary((unsigned char*)&us, sizeof(us));
	std::cout << "long long " << (long long)ll << " = ";
	binary((unsigned char*)&ll, sizeof(ll));
	std::cout << "unsigned long long " << (unsigned long long)ull << " = ";
	binary((unsigned char*)&ull, sizeof(ull));
	std::cout << "float " << (float)f << " = ";
	binary((unsigned char*)&f, sizeof(f));
	std::cout << "double " << (double)d << " = ";
	binary((unsigned char*)&d, sizeof(d));

	return 0;
}
