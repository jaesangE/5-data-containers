//grade.cpp
#include "grade.h"
#include "median.h"
#include "Student_info.h"

#include <vector>
#include <stdexcept>

using namespace std;

// �߰����� ����, �⸻���� ����, ���� ������ ���ͷ�
// �л��� ���� ������ ����.
// �� �Լ��� �μ��� �����ϱ� �ʰ� median �Լ��� �ش� �۾��� ����.
double grade(double mt, double ft, double hw) {
    return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}

double grade(double mt, double ft, const vector<double>& hw) {
    if (hw.size() == 0)
        throw domain_error("No homework!");

    return grade(mt, ft, median(hw));
}
double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}

