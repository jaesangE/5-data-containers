#pragma once
//grade.h
#ifndef GUARD_grade_h
#define GUARD_grade_h


#include <vector>
#include "Student_info.h"

double grade(double,double,double);
double grade(double, double, vector<double>&);
double grade(const Student_info&);

#endif // !GUARD_grade_h
