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
Robotino::Robotino(ros::NodeHandle nh, std::string name) : Festo(nh, name, true) {
	
}

/**
 *
 */
Robotino::~Robotino() {
	
}
