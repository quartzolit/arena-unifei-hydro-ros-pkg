/**
 *  Festo.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef FESTO_H_
#define FESTO_H_

#include "Robot.h"

class Festo : public Robot {

public:

	Festo(ros::NodeHandle nh, bool holonomic = false);
	~Festo();

private:

	virtual void readParameters();

};

#endif /* FESTO_H_ */