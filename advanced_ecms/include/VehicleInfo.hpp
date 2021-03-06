#include <iostream>
#include <math.h>
#include <eigen3/Eigen/Dense>

using namespace std;



class VehicleInfo
{

public:
	// variable
	static float velocity;
	static float accel;
	static float mass;  // [kg]
	static float parameter[3];
	static float wheel_radius;

	// calculation function
	static float Frl();
	static float P_d();
	static void velocity_update(float accel, float time = VehicleInfo::time_rt);
	static void for_optimizer();
	
	// real time variable
	static float velocity_rt;
	static float accel_rt;
	static float time_rt;

};

