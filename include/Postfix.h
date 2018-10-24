// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// utmatrix.h - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (21.04.2015)
//
// Верхнетреугольная матрица - реализация на основе шаблона вектора

#ifndef __TPOSTFIX_H__
#define __TPOSTFIX_H__

#include <iostream>

using namespace std;

const int STACK_MAX_SIZE = 100;

template <class ElemType>
class TStack
{
	int Lii;   //last item index
	ElemType Stack[STACK_MAX_SIZE];

	Tstack();
	~TStack();

	bool is_full();
	bool is_free();
	bool is_Empty();

	int top();
	ElemType top_value()

	void push(ElemType Element);
	ElemType pop();


protected:
	TStack()
	{
		Lii = 0;
		for (int i = 0; i < STACK_MAX_SIZE; i++)
			Stack[i] = {};
	}
	~TStack()
	{

	}
	bool is_full()
	{
		if (Lii >= STACK_MAX_SIZE || Lii < 0)
			throw("!Error! Stack size incorrect.");
		if (Lii == STACK_MAX_SIZE - 1)
			return 1;
		return 0;
	}
	bool is_free()
	{
		if (Lii >= STACK_MAX_SIZE || Lii < 0)
			throw("!Error! Stack size incorrect.");
		if (Lii < STACK_MAX_SIZE - 1)
			return 1;
		return 0;
	}
	bool is_Empty()
	{
		if (Lii >= STACK_MAX_SIZE || Lii < 0)
			throw("!Error! Stack size incorrect.");
		if (Lii == 0)
			return 1;
		return 0;
	}
	void push(ElemType Element)
	{
		if (is_full())
			throw("!Error! Full Stack.");

		Stack[Lii] = Element;
		Lii++;
	}
	ElemType pop()
	{
		if (is_Empty()) throw("!Error! Empty Stack.");
		Lii--;
		return Stack[Lii + 1];

	}
	int top()
	{
		return Lii;
	}

	ElemType top_value()
	{
		return Stack[Lii];
	}
};


#endif
