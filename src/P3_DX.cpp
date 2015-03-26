/**
 *  P3_DX.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2015
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include <P3_DX.h>

/**
 *
 */
P3_DX::P3_DX(ros::NodeHandle nh) : Pioneer(nh, "p3_dx_", "p3_dx/", false) {
	
}

/**
 *
 */
P3_DX::~P3_DX() {
	
}
