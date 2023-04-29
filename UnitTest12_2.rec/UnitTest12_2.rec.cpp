#include "pch.h"
#include "CppUnitTest.h"
#include "D:\АП\Лабораторні роботи\Lab_12\Lab_12.2.rec\Lab_12.2.rec\Lab_12.2.rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest122
{
	TEST_CLASS(UnitTest122)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			struct Node
			{
				int data;
				Node* next;
			};

			void checkDuplicates(Node* head);


		}
	};
}
