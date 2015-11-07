#pragma once

#include "typedefs.h"
class EquilFns
{
public:
	vector<vector<vector<vector<vector<VecDoub>>>>> consumption;
	vector<vector<vector<vector<vector<vector<VecDoub>>>>>> policy_fn;
	void setValueFn(VecInt_I param, const double val);
	double getValueFn(VecInt_I param) const;
	VecDoub::const_iterator getReorderedValueFnVector(VecInt_I param) const;
	int policyToArray(double *toAlloc) const;
	void setPolicyFromArray(double *values);

	EquilFns();
	~EquilFns();
	EquilFns& operator=(const EquilFns& fnSource);

private:
	vector<vector<vector<vector<vector<VecDoub>>>>> value_fn;
	vector<vector<vector<vector<vector<VecDoub>>>>> reordered_value_fn;
};