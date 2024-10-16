#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include "C:\Users\admin\source\repos\Project_6.3_rec\Project_6.3_rec\lab_6.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumOfSquares)
        {
            const int size = 5;
            double arr[size] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

            double expectedSum = 1.0 * 1.0 + 2.0 * 2.0 + 3.0 * 3.0 + 4.0 * 4.0 + 5.0 * 5.0; // 55.0
            double actualSum = sumOfSquares(arr, size);

            Assert::AreEqual(expectedSum, actualSum);
        }

        TEST_METHOD(TestPrintArray)
        {
            const int size = 5;
            double arr[size] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
            ostringstream output;
            cout.rdbuf(output.rdbuf());

            printArray(arr, size);

            Assert::AreEqual(string("1 2 3 4 5 \n"), output.str());
        }

        TEST_METHOD(TestInputArray)
        {
            const int size = 5;
            double arr[size];
            istringstream input("1.0 2.0 3.0 4.0 5.0");
            cin.rdbuf(input.rdbuf());

            inputArray(arr, size);

            Assert::AreEqual(1.0, arr[0]);
            Assert::AreEqual(2.0, arr[1]);
            Assert::AreEqual(3.0, arr[2]);
            Assert::AreEqual(4.0, arr[3]);
            Assert::AreEqual(5.0, arr[4]);
        }
    };
}