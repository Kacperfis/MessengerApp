#include "gtest/gtest.h"

#include "../src/mainWindow.hpp"

class MainWindowTest : public ::testing::Test
{
public:
    MainWindow mainWindow;
};

TEST_F(MainWindowTest, shouldAddTwoValues)
{
    auto result = mainWindow.addTwoValues(2, 7);
    EXPECT_EQ(result, 9);
}