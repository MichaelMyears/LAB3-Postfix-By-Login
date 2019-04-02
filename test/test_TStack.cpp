#include "Postfix.h"

#include <gtest.h>

TEST(TStack, can_create_stack)
{
	ASSERT_NO_THROW(TStack<int> S());
}

TEST(TStack, can_push_element)
{
	TStack<string> s;

	ASSERT_NO_THROW(s.push("sin("));
}

TEST(TStack, check_is_empty_if_stack_empty)
{
	TStack<int> s;
	EXPECT_EQ(1,s.is_empty());
}

TEST(TStack, check_is_empty_if_stack_not_empty)
{
	TStack<int> s;
	s.push(1);
	s.push(2);

	EXPECT_EQ(0, s.is_empty());
}

TEST(TStack, check_is_full_if_stack_full)
{
	TStack<int> s;
	for (int i = 0; i < STACK_MAX_SIZE; i++)
		s.push(i);

	EXPECT_EQ(1, s.is_full());
}

TEST(TStack, check_is_full_if_stack_not_full)
{
	TStack<int> s;
	for (int i = 0; i < STACK_MAX_SIZE-1; i++)
		s.push(i);

	EXPECT_EQ(0, s.is_full());
}

TEST(TStack, throw_when_push_in_full_stack)
{
	TStack<int> s;
	for (int i = 0; i < STACK_MAX_SIZE; i++)
		s.push(i);

	ASSERT_ANY_THROW(s.push(100));
}

TEST(TStack, can_pop_element)
{
	TStack<string> s;
	s.push("sin(");

	ASSERT_NO_THROW(s.pop());
}

TEST(TStack, throw_when_pop_empty_stack)
{
	TStack<string> s;

	ASSERT_ANY_THROW(s.pop());
}

TEST(TStack, equal_element_and_top)
{
	TStack<string> s;
	string ex = "cos(";
	s.push(ex);

	EXPECT_EQ(s.top(), ex);
}

TEST(TStack, throw_when_top_of_empty_stack)
{
	TStack<string> s;

	ASSERT_ANY_THROW(s.top());
}

