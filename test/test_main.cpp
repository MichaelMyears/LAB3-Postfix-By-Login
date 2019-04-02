#include <gtest.h>
#include<locale>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "ru");
  ::testing::InitGoogleTest(&argc, argv);
  RUN_ALL_TESTS();
  system("pause");
  return 0;
}
