
#include "Eigen/Dense"
#include "fdcl_save.h"

int main()
{
	fdcl_save fd_save;
	int i=0;
	double d=M_PI;
	Eigen::Matrix<double, 3,1> J;
	J.setIdentity();
	
	fd_save.open("test_fdcl_save.txt");
	
	fd_save.write(d);
	fd_save.write(i);
	fd_save.endl();
	fd_save.write(d);
	fd_save.write(J);
	fd_save.endl();
		
	fd_save.close();
}
