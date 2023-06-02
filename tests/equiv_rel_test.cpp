#include <gtest/gtest.h>
#include <memory>




int main(int argc, char **argv) 
{
  std::unique_ptr<int> ptr;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

