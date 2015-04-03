/**
 *  main.cpp
 *
 *  Version: 1.0.0.0
 *  Created on: 16/03/2014
 *  Modified on: 16/03/2014
 *  Author: Adriano Henrique Rossette Leite (adrianohrl@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#include "br/edu/unifei/expertinos/arena/LRO.h"

int main(int argc, char** argv)
{
	ros::init(argc, argv, "arena_unifei_node");
	br::edu::unifei::expertinos::arena::LRO arena_lro;
	arena_lro.spin();
	return 0;
}
