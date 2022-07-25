#include <bits/stdc++.h>
using namespace std;

bool compareExpression(char Operator[], string identifier[], char punctuation[])
{
	int OperatorCounter = 0, identifierCounter = 0, punctuationCounter = 0;
	int Operator_Len = sizeof(Operator) / sizeof(Operator[0]);
	int identifier_Len = sizeof(identifier) / sizeof(identifier[0]);
	int punctuation_Len = sizeof(punctuation) / sizeof(punctuation[0]);
	bool decision = false;
	char defined_Operators[] = { '=', '+', '-', '*', '/', '^', '%' };
	char defined_Punctuation[] = { ',', '\"', '.', '*', '/', ';', '?' };

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < Operator_Len; j++)
		{
			if (defined_Operators[i] == Operator[j])
			{
				OperatorCounter++;
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < punctuation_Len; j++)
		{
			if (defined_Punctuation[i] == punctuation[j])
			{
				punctuationCounter++;
			}
		}
	}

	if (OperatorCounter >= OP_Flag)
	{
		decision = true;
	}
	else
	{
		decision = false;
	}

	if (punctuationCounter >= Pn_Flag)
	{
		decision = true;
	}
	else
	{
		decision = false;
	}

	if (identifierCounter <= ID_Flag)
	{
		decision = true;
	}
	else
	{
		decision = false;
	}

	return decision;
}
