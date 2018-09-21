# FDCL Save Class

This class is used for easily saving data into a file on a hard disk. 
Currently, the class supports saving `int`, `float`, `double`, `std::string` and eigen vectors/matrices of size 3x1, 4x1, and 3x3.

Below is an example on how to use this class. Check "classes" tab for more details.

```
#include "fdcl/save.hpp"


int main(void)
{
    // initialize the class first
    fdcl::save log;

    // define few variables that needs to be written
	int i = 0;
	double d = M_PI;

	Eigen::Matrix<double, 3, 1> J;
	J.setIdentity();

    // open the file	
	log.open("test_fdcl_save.txt");
	
    // write data
	log.write(d);
	log.write(i);

    // write a new line character
	log.endl();

    // write more data
	log.write(d);
	log.write(J);

    // write anothe new line character to the file
	log.endl();
		
    // save data to the hard drive
    // skipping this step may not write any data
	log.close();
}
```
