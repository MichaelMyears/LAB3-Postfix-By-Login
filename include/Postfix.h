// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// utmatrix.h - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (21.04.2015)
//
// Верхнетреугольная матрица - реализация на основе шаблона вектора

//#ifndef __TPOSTFIX_H__
//#define __TPOSTFIX_H__

#include <iostream>

using namespace std;

const int STACK_MAX_SIZE = 100;

template <class ElemType>
class TStack
{
	int Lii;   //last item index
	ElemType Stack[STACK_MAX_SIZE];

//	TStack();
//	~TStack();
//
//	bool is_full();
//	bool is_free();
//	bool is_Empty();
//
//	int top();
//	ElemType top_value()
//
//	void push(ElemType Element);
//	ElemType pop();


public:
	TStack()
	{
		Lii = -1;
		for (int i = 0; i < STACK_MAX_SIZE; i++)
			Stack[i] = {};
	}
	~TStack()
	{

	}
	bool is_full()
	{
		if (Lii >= STACK_MAX_SIZE || Lii < -1)
			throw("!Error! Stack size incorrect.");
		if (Lii == STACK_MAX_SIZE - 1)
			return 1;
		return 0;
	}
	bool is_empty()
	{
		if (Lii >= STACK_MAX_SIZE || Lii < -1)
			throw("!Error! Stack size incorrect.");
		if (Lii == -1)
			return 1;
		return 0;
	}
	void push(ElemType Element)
	{
		if (is_full())
			throw("!Error! Full Stack.");
		Lii++;
		Stack[Lii] = Element;
	}
	ElemType pop()
	{
		if (is_empty()) throw("!Error! Empty Stack.");
		Lii--;
		return Stack[Lii + 1];

	}

	ElemType top()
	{
		if (is_empty()) throw("!Error! Empty Stack.");
		return Stack[Lii];
	}
};


class TPostfix
{
//	string PRF;
//	vector<string> OP_ex; // доступные операции
//	TStack<string> OP_s;  // стек операций
//	vector<string> OP_prf;// упорядоченные операции префиксного вида
//	vector<string> operand; // упорядоченныt операнды префиксного вида
//
//	void fill()
//	{
//		OP_ex.push_back("+");
//		OP_ex.push_back("-");
//		OP_ex.push_back("*");
//		OP_ex.push_back("/");
//		OP_ex.push_back("%");
//	}
//
//	void disassemble(string PRF1)
//	{
//		string tmp = "";
//		for (int x = 0; x < PRF1.size(); x++)
//		{
//			tmp += PRF1[x];
//			for (int y = 0; y < OP_ex.size(); y++)
//			{
//				for (int z = 0; OP_ex[y].size(); z++)
//				{
//					if ( == OP_ex[y][z])
//					{
//						
//					}
//				}
//
//			}
//					
//		}
//	}
//public:
//	TPostfix(string PRF1 = "")
//	{
//		fill();
//
//
//	}
//	~TPostfix()
//	{
//
//	}
//	void set_prf(string PRF1)
//	{
//
//	}
//
};


//#endif
