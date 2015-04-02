/**
 *  Robotino.h
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 02/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef ROBOTINO_H_
#define ROBOTINO_H_

#include "Festo.h"

class Robotino : public Festo {

public:

	Robotino(ros::NodeHandle nh);
	~Robotino();

	static const int NUMBER_OF_DISTANCE_SENSORS = 9;
	
	int getNumberOfDistanceSensors() const;

};

#endif /* Robotino_H_ */
