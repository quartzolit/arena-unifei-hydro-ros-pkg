/**
 *  Robotino.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 01/04/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include "br/edu/unifei/expertinos/robots/Robotino.h"

using namespace br::edu::unifei::expertinos::robots;

/**
 *
 */
Robotino::Robotino(ros::NodeHandle nh) : Festo(nh, "robotino_", "robotino/", true) {
	
}

/**
 *
 */
Robotino::Robotino(ros::NodeHandle nh, std::string number) : Festo(nh, "robotino_" + number + "_", "robotino/" + number + "/", false) {
	
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
