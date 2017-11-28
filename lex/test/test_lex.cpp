#include <stdio.h>
#include "lex.h"

#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup) {

    void setup() {

    }

    void teardown() {

    }
};

TEST(FirstTestGroup, alex_test) {
    printf("AD - hello test\n");
}

int main(int ac, char** av) {
    return CommandLineTestRunner::RunAllTests(ac, av);
}
