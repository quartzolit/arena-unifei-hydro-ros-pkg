/**
 *  Robotino.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include <Robotino.h>

/**
 *
 */
Robotino::Robotino(ros::NodeHandle nh) : Festo(nh, "robotino_", "robotino/", true) {
	
}

/**
 *
 */
Robotino::~Robotino() {
	
}

/**
 *
 */
int Robotino::getNumberOfDistanceSensors() const {
	return Robotino::NUMBER_OF_DISTANCE_SENSORS;
}
