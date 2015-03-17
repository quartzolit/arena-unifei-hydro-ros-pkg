/**
 *  Festo.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include <Festo.h>

/**
 *
 */
Festo::Festo(ros::NodeHandle nh, std::string name, bool holonomic) : Robot(nh, name, holonomic) {
	setPort("12080");
}

/**
 *
 */
Festo::~Festo() {
	
}
