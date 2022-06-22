#include <iostream>

class test
{
	public:
		int	a;
		test(int a);
		test();
		~test();
		test(const test& t);
};

test::test()
{
	a = 30;
}

test::test(int _a)
{
	a = _a;
}

test::~test()
{
;
}

test::test(const test& t)
{
	a = t.a;
}

int	main(void)
{
	test t1(10);
	test t2(t1);
	test t3;

	t3 = t2;
	std::cout << t1.a << std::endl;
	std::cout << t2.a << std::endl;
	std::cout << t3.a << std::endl;
	t2.a = 20;
	t3.a = 20;
	std::cout << std::endl;
	std::cout << t1.a << std::endl;
	std::cout << t2.a << std::endl;
	std::cout << t3.a << std::endl;
	return (0);
}
