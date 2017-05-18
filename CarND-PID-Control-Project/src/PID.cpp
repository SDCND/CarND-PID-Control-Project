#include "PID.h"
#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}
PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) 
{
		this->Kp = Kp;
		this->Ki = Ki;
		this->Kd = Kd;
}

void PID::UpdateError(double cte) 
{
		p_error = cte;
		i_error += cte;
		d_error = cte - p_error;
}

double PID::TotalError() 
{
		return -1 * (Kp * p_error + Kd * d_error + Ki * i_error);
}
