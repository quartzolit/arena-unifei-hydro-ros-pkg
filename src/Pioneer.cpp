/**
 *  Pioneer.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include <Pioneer.h>

/**
 *
 */
Pioneer::Pioneer(ros::NodeHandle nh, std::string name, std::string ns, bool holonomic) : Robot(nh, name, ns, holonomic){
	setPort("8101");
}

/**
 *
 */
Pioneer::~Pioneer() {
	
}
