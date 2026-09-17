// ------------------------- Your tests - student_gtests.cpp ----------------------------- //
// Your own GoogleTest suite for SetList. It is graded: the autograder runs it against a correct
// SetList and against several with one bug each. A test is worth something only when it passes
// on the correct SetList and fails on a broken one, so a test that always fails (or that tests
// nothing) earns nothing.
//
// Two examples are given. Add tests of your own for contains, for inserting a value twice, for
// what insert returns, for iterating, and for a SetList of something other than int.
// --------------------------------------------------------------------------------------- //

#include <gtest/gtest.h>

#include "set_list.hpp"

TEST(SetListTests, NewSetContainsNothing) {
    SetList<int> s;
    EXPECT_FALSE(s.contains(1));
}

TEST(SetListTests, InsertedValuesAreFound) {
    SetList<int> s;
    s.insert(4);
    EXPECT_TRUE(s.contains(4));
}

// ADD YOUR TESTS HERE:
